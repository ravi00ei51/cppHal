#ifndef __H_IOPIN_H__
#define __H_IOPIN_H__
#include "stm32f103rb.h"
enum port_t
{
    PORTA,
    PORTB,
    PORTC,
    PORTD,
    PORTE,
    PORTF,
    PORTG
};
enum pin_status_t
{
    PIN_OFF,
    PIN_ON
};
enum pin_t
{
    PIN0,
    PIN1,
    PIN2,
    PIN3,
    PIN4,
    PIN5,
    PIN6,
    PIN7,
    PIN8,
    PIN9,
    PIN10,
    PIN11,
    PIN12,
    PIN13,
    PIN14,
    PIN15
};

template <port_t port, pin_t pin> class iopin;
template <pin_t pin> class iopin<PORTA, pin>
{
private:
    constexpr static auto getPinIndex( )
    {
        return (pin&0x07u);
    }
    static constexpr auto pinIndex1 = (getPinIndex() << 1u );
    static constexpr auto pinIndex2 = (getPinIndex() << 1u) + 1u;
    static constexpr auto pinMask   = (1u << pin);
public:
    static void open(unsigned int cfg, unsigned int mode)
    {
        /* enable RCC clock for given port */
        //stm32f103rb::rcc::apb2enr ::set<stm32f103rb::rcc::apb2enr::IOPAEN>(1u);
        if( pin < PIN8 )
        {
            /* set direction of the pin */
            stm32f103rb::gpio1::crl::set<static_cast<stm32f103rb::gpio1::crl::val>( pinIndex1 )>(mode);
            /* set pin configuration or alternate function */
            stm32f103rb::gpio1::crl::set<static_cast<stm32f103rb::gpio1::crl::val>( pinIndex2 )>(cfg);
        }
        else
        {
            /* set direction of the pin */
            stm32f103rb::gpio1::crh::set<static_cast<stm32f103rb::gpio1::crh::val>( pinIndex1 )>(mode);
            /* set pin configuration or alternate function */
            stm32f103rb::gpio1::crh::set<static_cast<stm32f103rb::gpio1::crh::val>( pinIndex2 )>(cfg);
        }
    }
    static unsigned int read(void)
    {
        unsigned int odrVal;
        /* read IDR register */
        odrVal = stm32f103rb::gpio1::odr::get<stm32f103rb::gpio1::odr::ODR>();
        /* return the status */
        return (odrVal & pinMask);
    }
    static void writeOn( void )
    {
        stm32f103rb::gpio1::bsrr::set<stm32f103rb::gpio1::bsrr::BS>(pinMask);
    }
    static void writeOff( void )
    {
        stm32f103rb::gpio1::bsrr::set<stm32f103rb::gpio1::bsrr::BR>(pinMask);
    }

    static void write(pin_status_t status)
    {
        /* write BSRR register to set the PIN */
        if( status == PIN_ON )
            stm32f103rb::gpio1::bsrr::set<stm32f103rb::gpio1::bsrr::BS>(pinMask);
        else
            stm32f103rb::gpio1::bsrr::set<stm32f103rb::gpio1::bsrr::BR>(pinMask);
        /* or write BRR register to reset the PIN */
    }
    static void close(void)
    {
        /* reset all GPIO registers to default */
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::IOPAEN>();
        /* if none of the pin is under use then disable rcc clock for the port */
    }
    static void ioctl(void)
    {
        /* change the pin configuration after its open */
    }
};

template <pin_t pin> class iopin<PORTB, pin>
{
private:
    constexpr static auto getPinIndex( )
    {
        return (pin&0x07u);
    }
    static constexpr auto pinIndex1 = (getPinIndex() << 1u );
    static constexpr auto pinIndex2 = (getPinIndex() << 1u) + 1u;
    static constexpr auto pinMask   = (1u << pin);
public:
    static void open(unsigned int cfg, unsigned int mode)
    {
        /* enable RCC clock for given port */
        //stm32f103rb::rcc::apb2enr ::set<stm32f103rb::rcc::apb2enr::IOPBEN>(1u);
        if( pin < PIN8 )
        {
            /* set direction of the pin */
            stm32f103rb::gpio2::crl::set<static_cast<stm32f103rb::gpio2::crl::val>( pinIndex1 )>(mode);
            /* set pin configuration or alternate function */
            stm32f103rb::gpio2::crl::set<static_cast<stm32f103rb::gpio2::crl::val>( pinIndex2 )>(cfg);
        }
        else
        {
            /* set direction of the pin */
            stm32f103rb::gpio2::crh::set<static_cast<stm32f103rb::gpio2::crh::val>( pinIndex1 )>(mode);
            /* set pin configuration or alternate function */
            stm32f103rb::gpio2::crh::set<static_cast<stm32f103rb::gpio2::crh::val>( pinIndex2 )>(cfg);
        }
    }
    static unsigned int read(void)
    {
        unsigned int odrVal;
        /* read IDR register */
        odrVal = stm32f103rb::gpio2::odr::get<stm32f103rb::gpio2::odr::ODR>();
        /* return the status */
        return (odrVal & pinMask);
    }
    static void writeOn( void )
    {
        stm32f103rb::gpio2::bsrr::set<stm32f103rb::gpio2::bsrr::BS>(pinMask);
    }
    static void writeOff( void )
    {
        stm32f103rb::gpio2::bsrr::set<stm32f103rb::gpio2::bsrr::BR>(pinMask);
    }

    static void write(pin_status_t status)
    {
        /* write BSRR register to set the PIN */
        if( status == PIN_ON )
            stm32f103rb::gpio2::bsrr::set<stm32f103rb::gpio2::bsrr::BS>(pinMask);
        else
            stm32f103rb::gpio2::bsrr::set<stm32f103rb::gpio2::bsrr::BR>(pinMask);
        /* or write BRR register to reset the PIN */
    }
    static void close(void)
    {
        /* reset all GPIO registers to default */
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::IOPBEN>();
        /* if none of the pin is under use then disable rcc clock for the port */
    }
    static void ioctl(void)
    {
        /* change the pin configuration after its open */
    }
};

template <pin_t pin> class iopin<PORTC, pin>
{
private:
    constexpr static auto getPinIndex( )
    {
        return (pin&0x07u);
    }
    static constexpr auto pinIndex1 = (getPinIndex() << 1u );
    static constexpr auto pinIndex2 = (getPinIndex() << 1u) + 1u;
    static constexpr auto pinMask   = (1u << pin);
public:
    static void open(unsigned int cfg, unsigned int mode)
    {
        /* enable RCC clock for given port */
        //stm32f103rb::rcc::apb2enr ::set<stm32f103rb::rcc::apb2enr::IOPCEN>(1u);
        if( pin < PIN8 )
        {
            /* set direction of the pin */
            stm32f103rb::gpio3::crl::set<static_cast<stm32f103rb::gpio3::crl::val>( pinIndex1 )>(mode);
            /* set pin configuration or alternate function */
            stm32f103rb::gpio3::crl::set<static_cast<stm32f103rb::gpio3::crl::val>( pinIndex2 )>(cfg);
        }
        else
        {
            /* set direction of the pin */
            stm32f103rb::gpio3::crh::set<static_cast<stm32f103rb::gpio3::crh::val>( pinIndex1 )>(mode);
            /* set pin configuration or alternate function */
            stm32f103rb::gpio3::crh::set<static_cast<stm32f103rb::gpio3::crh::val>( pinIndex2 )>(cfg);
        }
    }
    static unsigned int read(void)
    {
        unsigned int odrVal;
        /* read IDR register */
        odrVal = stm32f103rb::gpio3::odr::get<stm32f103rb::gpio3::odr::ODR>();
        /* return the status */
        return (odrVal & pinMask);
    }
    static void writeOn( void )
    {
        stm32f103rb::gpio3::bsrr::set<stm32f103rb::gpio3::bsrr::BS>(pinMask);
    }
    static void writeOff( void )
    {
        stm32f103rb::gpio3::bsrr::set<stm32f103rb::gpio3::bsrr::BR>(pinMask);
    }

    static void write(pin_status_t status)
    {
          /* write BSRR register to set the PIN */
        if( status == PIN_ON )
            stm32f103rb::gpio3::bsrr::set<stm32f103rb::gpio3::bsrr::BS>(pinMask);
        else
            stm32f103rb::gpio3::bsrr::set<stm32f103rb::gpio3::bsrr::BR>(pinMask);
        /* or write BRR register to reset the PIN */
    }
    static void close(void)
    {
        /* reset all GPIO registers to default */
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::IOPCEN>();
        /* if none of the pin is under use then disable rcc clock for the port */
    }
    static void ioctl(void)
    {
        /* change the pin configuration after its open */
    }
};

#endif
