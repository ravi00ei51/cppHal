#ifndef __H_CLOCK_H__
#define __H_CLOCK_H__
#include "stm32f103rb.h"

#define HSE_BASE_CLK_SPEED   (16000000u)

enum sysClkSrcType
{
    SYSCLK_SRC_HSI,
    SYSCLK_SRC_HSE,
    SYSCLK_SRC_PLL,
};

template <sysClkSrcType src> class sysClock
{
private:
    static auto getSystemClockSrc()
    {
        if( src == SYSCLK_SRC_HSI )
            return 0u;
        else if ( src == SYSCLK_SRC_HSE )
        {
            return 1u;
        }
        else if( src == SYSCLK_SRC_PLL )
        {
            return 2u;
        }
        else
        {
            return 0u;
        }
    }

public:
    static void open( void )
    {
        volatile unsigned int x = 3u;
        volatile unsigned int sysClkSrcVal = getSystemClockSrc();
        stm32f103rb::rcc::cfgr::set<stm32f103rb::rcc::cfgr::SW>(sysClkSrcVal);
        while( x != sysClkSrcVal )
        {
            asm("nop;");
            x = stm32f103rb::rcc::cfgr::get<stm32f103rb::rcc::cfgr::SWS>();
        }
    }
};

enum baseClockType
{
    BASE_CLK_HSI,
    BASE_CLK_HSE
};

template <baseClockType> class baseClock;

template <> class baseClock<BASE_CLK_HSI>
{
private:

public:
    static void open( )
    {
        volatile unsigned int x = 0u;
        /* Set HSION */
        stm32f103rb::rcc::cr::set<stm32f103rb::rcc::cr::HSION>(1u);
        /* Set system clock to HSI */
        sysClock<SYSCLK_SRC_HSI>::open();
        /* Clear PLLON */
        stm32f103rb::rcc::cr::clr<stm32f103rb::rcc::cr::PLLON>();
        /* check PLLRDY is clear */
        x = 1u;
        while( x == 1u )
        {
            x = stm32f103rb::rcc::cr::get<stm32f103rb::rcc::cr::PLLRDY>();
        }
        /* Clear HSEON */
        stm32f103rb::rcc::cr::clr<stm32f103rb::rcc::cr::HSEON>();
        /* Check HSIRDY is set */
        x = 0u;
        while( x == 0u )
        {
            x = stm32f103rb::rcc::cr::get<stm32f103rb::rcc::cr::HSIRDY>();
        }
    }
};

template <> class baseClock<BASE_CLK_HSE>
{
private:

public:
    static void open( )
    {
        volatile unsigned int x = 0u;

        /* Set HSION */
        stm32f103rb::rcc::cr::set<stm32f103rb::rcc::cr::HSION>(1u);
        /* Set system clock to HSI */
        sysClock<SYSCLK_SRC_HSI>::open();

        /* Clear PLLON */
        stm32f103rb::rcc::cr::clr<stm32f103rb::rcc::cr::PLLON>();
        x = 1u;
        while( x == 1u )
        {
            x = stm32f103rb::rcc::cr::get<stm32f103rb::rcc::cr::PLLRDY>();
        }
        /* Clear HSEON */
        stm32f103rb::rcc::cr::clr<stm32f103rb::rcc::cr::HSEON>();

        /* Check HSERDY is cleared */
        x = 1u;
        while( x == 1u )
        {
            x = stm32f103rb::rcc::cr::get<stm32f103rb::rcc::cr::HSERDY>();
        }

        /* Set HSEON */
        stm32f103rb::rcc::cr::set<stm32f103rb::rcc::cr::HSEON>(1u);

        /* Check HSERDY is set */
        x = 0u;
        while( x == 0u )
        {
            x = stm32f103rb::rcc::cr::get<stm32f103rb::rcc::cr::HSERDY>();
        }
    }
};

enum pllClockSrcType
{
    PLL_SRC_HSI,
    PLL_SRC_HSE,
    PLL_SRC_MAX
};
template <baseClockType pllsrc> class pllClock;
template <> class pllClock<BASE_CLK_HSI>
{
private:

    static auto getMultiplier( unsigned int speed )
    {
        /*static_assert( ( ( speed%(4000000u) == 0u ) && ( speed >= 8000000u ) ) , "PLL clock speed is not a multiplier of 4MHz. \
                                             For Stm32f103rb board with HSI clock as PLL source can have following clock speeds \
                                              8MHz, \
                                             12MHz, \
                                             16MHz, \
                                             20MHz, \
                                             24MHz, \
                                             28MHz, \
                                             32MHz, \
                                             36MHz, \
                                             40MHz, \
                                             44MHz, \
                                             48MHz, \
                                             52MHz, \
                                             56MHz, \
                                             60MHz, \
                                             64MHz. ");*/
        return ( (speed/( 4000000u ) - 2u ) );
    }
public:
    static void open( unsigned int speed )
    {
        volatile unsigned int x = 0u;
        volatile unsigned int pllMultipler = getMultiplier(speed);
        baseClock<BASE_CLK_HSI>::open();

        /* Now that system clock is on HSI we can change PLL source and speed */


        /* Set PLLSRC to HSI/2 */
        stm32f103rb::rcc::cfgr::set<stm32f103rb::rcc::cfgr::PLLSRC>(0u);

        /* Set PLLMUL to set PLL clock speed */
        stm32f103rb::rcc::cfgr::set<stm32f103rb::rcc::cfgr::PLLMUL>(pllMultipler);
        //stm32f103rb::rcc::cfgr::set<stm32f103rb::rcc::cfgr::PPRE1>(5u);
        //stm32f103rb::rcc::cfgr::set<stm32f103rb::rcc::cfgr::HPRE>(9u);
        /* Set PLLON */
        stm32f103rb::rcc::cr::set<stm32f103rb::rcc::cr::PLLON>(1u);

        /* Check PLLRDY is set */
        x = 0u;
        while( x == 0u )
        {
            x = stm32f103rb::rcc::cr::get<stm32f103rb::rcc::cr::PLLRDY>();
        }
    }
};

template <> class pllClock<BASE_CLK_HSE>
{
private:
    static auto getHSEMultiplier( unsigned int speed )
    {
        /*static_assert( ( speed%(4000000u)!=0 ), "PLL clock speed is not a multiplier of 4MHz. \
                                             For Stm32f103rb board with HSI clock as PLL source can have following clock speeds \
                                              8MHz, \
                                             12MHz, \
                                             16MHz, \
                                             20MHz, \
                                             24MHz, \
                                             28MHz, \
                                             32MHz, \
                                             36MHz, \
                                             40MHz, \
                                             44MHz, \
                                             48MHz, \
                                             52MHz, \
                                             56MHz, \
                                             60MHz, \
                                             64MHz. ");*/
        if( ( speed%HSE_BASE_CLK_SPEED ) == 0u )
        {
            return 0u;
        }
        else if( ( speed%( HSE_BASE_CLK_SPEED/2 ) ) == 0u )
        {
            return 1u;
        }
        else
        {
            return 0u;
        }
    }
    static auto getPLLMultiplier( unsigned int speed )
    {
        if( ( speed%HSE_BASE_CLK_SPEED ) == 0u )
        {
            return ( ( speed/( HSE_BASE_CLK_SPEED/2 ) ) - 2u );
        }
        else if( ( speed%( HSE_BASE_CLK_SPEED/2 ) ) == 0u )
        {
            return ( ( speed/HSE_BASE_CLK_SPEED ) - 2u );
        }
    }
public:
    static void open( unsigned int speed )
    {
        volatile unsigned int x;
        volatile unsigned int pllMultipler = getPLLMultiplier( speed );
        volatile unsigned int hseMultipler = getHSEMultiplier( speed );
        baseClock<BASE_CLK_HSE>::open();

        /* Set PLLSRC to HSE */
        stm32f103rb::rcc::cfgr::set<stm32f103rb::rcc::cfgr::PLLSRC>(1u);

        /* Set PLLXTPRE to set PLL clock multiplier for HSE clock */
        stm32f103rb::rcc::cfgr::set<stm32f103rb::rcc::cfgr::PLLXTPRE>(hseMultipler);

        /* Set PLLMUL to set PLL clock speed */
        stm32f103rb::rcc::cfgr::set<stm32f103rb::rcc::cfgr::PLLMUL>(pllMultipler);
        //stm32f103rb::rcc::cfgr::set<stm32f103rb::rcc::cfgr::PPRE1>(5u);
        //stm32f103rb::rcc::cfgr::set<stm32f103rb::rcc::cfgr::HPRE>(9u);
        /* Set PLLON */
        stm32f103rb::rcc::cr::set<stm32f103rb::rcc::cr::PLLON>(1u);

        /* Check PLLRDY is set */
        x = 0u;
        while( x == 0u )
        {
            x = stm32f103rb::rcc::cr::get<stm32f103rb::rcc::cr::PLLRDY>();
        }
    }

};
enum clockSrcType
{
    CLK_SRC_HSI,
    CLK_SRC_HSE,
    CLK_SRC_PLL
};
template <clockSrcType src, pllClockSrcType pllSrc, unsigned int speed > class clockOpen;

template <unsigned int speed> class clockOpen<CLK_SRC_HSI, PLL_SRC_MAX, speed>
{
public:
    static void open()
    {
        baseClock<BASE_CLK_HSI >::open();
        sysClock<SYSCLK_SRC_HSI>::open();
    }
};

template <unsigned int speed> class clockOpen<CLK_SRC_HSE, PLL_SRC_MAX, speed>
{
public:
    static void open()
    {
        baseClock<BASE_CLK_HSE >::open();
        sysClock<SYSCLK_SRC_HSE>::open();
    }
};

template <unsigned int speed> class clockOpen<CLK_SRC_PLL, PLL_SRC_HSE, speed>
{
public:
    static void open( void )
    {
        pllClock<BASE_CLK_HSE>::open( speed );
        sysClock<SYSCLK_SRC_PLL>::open();
    }
};

template <unsigned int speed> class clockOpen<CLK_SRC_PLL, PLL_SRC_HSI, speed>
{
public:
    static void open( void )
    {
        pllClock<BASE_CLK_HSI>::open(speed);
        sysClock<SYSCLK_SRC_PLL>::open();
    }
};
enum clkType
{
    SYS_CLK,
    AHB_CLK,
    PCLK1_CLK,
    PCLK2_CLK,
    ADC_CLK,
    USB_CLK

};

template <clkType clk> class clockRead;

template <> class clockRead<SYS_CLK>
{
public:
    static unsigned int read()
    {
        volatile unsigned int x = 0u;
        volatile unsigned int sysClockSpeed = 0u;
        volatile unsigned int pllMultiplier = 0u;
        x = stm32f103rb::rcc::cfgr::get<stm32f103rb::rcc::cfgr::SWS>();
        if( x == SYSCLK_SRC_HSI )
        {
            sysClockSpeed = 8000000u;
        }
        else if( x == SYSCLK_SRC_HSE )
        {
            sysClockSpeed = HSE_BASE_CLK_SPEED;
        }
        else if( x == SYSCLK_SRC_PLL )
        {
            x             = stm32f103rb::rcc::cfgr::get<stm32f103rb::rcc::cfgr::PLLSRC>();
            pllMultiplier = stm32f103rb::rcc::cfgr::get<stm32f103rb::rcc::cfgr::PLLMUL>() + 2u;
            if( x == 0 )
            {

                sysClockSpeed = (4000000u)*( pllMultiplier );
            }
            else
            {
                sysClockSpeed = ( HSE_BASE_CLK_SPEED )*( pllMultiplier );
            }
        }
        return sysClockSpeed;
    }
};
template <> class clockRead<AHB_CLK>
{
public:
    static unsigned int read()
    {
        volatile unsigned int x = 0u;;
        volatile unsigned int sysClockSpeed = 0u;;
        volatile unsigned int ahbClockSpeed = 0u;;
        sysClockSpeed = clockRead<SYS_CLK>::read();
        x = stm32f103rb::rcc::cfgr::get<stm32f103rb::rcc::cfgr::HPRE>();
        if( ( x & 0x00000008) != 0x00000008 )
        {
            ahbClockSpeed = sysClockSpeed;
        }
        else
        {
            x = x&0x07u;
            ahbClockSpeed = ( sysClockSpeed >> ( x + 1u ) );
        }

        return ahbClockSpeed;
    }

};
template <> class clockRead<PCLK1_CLK>
{
public:
    static unsigned int read()
    {
        volatile unsigned int x = 0u;
        volatile unsigned int ahbClockSpeed = 0u;
        volatile unsigned int pclk1ClockSpeed = 0u;
        ahbClockSpeed = clockRead<AHB_CLK>::read();
        x = stm32f103rb::rcc::cfgr::get<stm32f103rb::rcc::cfgr::PPRE1>();
        if( ( x & 0x00000004u ) != 0x00000004u )
        {
            pclk1ClockSpeed = ahbClockSpeed;
        }
        else
        {
            x = x&0x03u;
            pclk1ClockSpeed = ( ahbClockSpeed >> ( x + 1u ) );
        }
        return pclk1ClockSpeed;
    }

};
template <> class clockRead<PCLK2_CLK>
{
public:
    static unsigned int read()
    {
        volatile unsigned int x = 0u;
        volatile unsigned int ahbClockSpeed = 0u;
        volatile unsigned int pclk2ClockSpeed = 0u;
        ahbClockSpeed = clockRead<AHB_CLK>::read();
        x = stm32f103rb::rcc::cfgr::get<stm32f103rb::rcc::cfgr::PPRE2>();
        if( ( x & 0x00000004u ) != 0x00000004u )
        {
            pclk2ClockSpeed = ahbClockSpeed;
        }
        else
        {
            x = x&0x03u;
            pclk2ClockSpeed = ( ahbClockSpeed >> ( x + 1u ) );
        }

        return pclk2ClockSpeed;
    }
};

template <clockSrcType src, pllClockSrcType pllSrc, unsigned int speed> class clock:public clockOpen<src, pllSrc, speed>
{
private:
public:
    static void write()
    {

    }
    static unsigned int read( clkType clk )
    {
        volatile unsigned int retVal = 0u;

        switch(clk)
        {
            case SYS_CLK:
                retVal = clockRead<SYS_CLK>::read();
            break;
            case AHB_CLK:
                retVal = clockRead<AHB_CLK>::read();
            break;
            case PCLK1_CLK:
                retVal = clockRead<PCLK1_CLK>::read();
            break;
            case PCLK2_CLK:
                retVal = clockRead<PCLK2_CLK>::read();
            break;
            default:
                retVal = 0u;
            break;
        }
        return retVal;
    }

    static void close()
    {

    }
    static void ioctl()
    {

    }
};
typedef clock<CLK_SRC_PLL, PLL_SRC_HSI, 16000000u> __clk__;
#endif // __H_CLOCK_H__
