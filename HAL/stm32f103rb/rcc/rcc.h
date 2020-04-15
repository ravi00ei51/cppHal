#ifndef __H_RCC_H__
#define __H_RCC_H__
#include "Tuple.h"

#define          RCC_BASE_ADDRESS                0x40021000
#define     RCC_CR_OFFSET    0x00000000
#define     RCC_CFGR_OFFSET    0x00000004
#define     RCC_CIR_OFFSET    0x00000008
#define     RCC_APB2RSTR_OFFSET    0x0000000C
#define     RCC_APB1RSTR_OFFSET    0x00000010
#define     RCC_AHBENR_OFFSET    0x00000014
#define     RCC_APB2ENR_OFFSET    0x00000018
#define     RCC_APB1ENR_OFFSET    0x0000001C
#define     RCC_BDCR_OFFSET    0x00000020
#define     RCC_CSR_OFFSET    0x00000024
template <> class xEnum<RCC_BASE_ADDRESS, RCC_CR_OFFSET>
{
public:
    enum val:unsigned int
    {
        HSION,
        HSIRDY,
        RESERVED_0,
        HSITRIM,
        HSICAL,
        HSEON,
        HSERDY,
        HSEBYP,
        CSSON,
        RESERVED_1,
        PLLON,
        PLLRDY,
        RESERVED_2,
    };
};
template <> class xEnum<RCC_BASE_ADDRESS, RCC_CFGR_OFFSET>
{
public:
    enum val:unsigned int
    {
        SW,
        SWS,
        HPRE,
        PPRE1,
        PPRE2,
        ADCPRE,
        PLLSRC,
        PLLXTPRE,
        PLLMUL,
        USBPRE,
        RESERVED_0,
        MCO,
        RESERVED_1,
    };
};
template <> class xEnum<RCC_BASE_ADDRESS, RCC_CIR_OFFSET>
{
public:
    enum val:unsigned int
    {
        LSIRDYF,
        LSERDYF,
        HSIRDYF,
        HSERDYF,
        PLLRDYF,
        RESERVED_0,
        CSSF,
        LSIRDYIE,
        LSERDYIE,
        HSIDRYIE,
        HSERDYIE,
        PLLRDYIE,
        RESERVED_1,
        LSIRDYC,
        LSERDYC,
        HSIRDYC,
        HSERDYC,
        PLLRDYC,
        RESERVED_2,
        CSSC,
        RESERVED_3,
    };
};
template <> class xEnum<RCC_BASE_ADDRESS, RCC_APB2RSTR_OFFSET>
{
public:
    enum val:unsigned int
    {
        AFIORST,
        RESERVED_0,
        IOPARST,
        IOPBRST,
        IOPCRST,
        IOPDRST,
        IOPERST,
        IOPFRST,
        IOPGRST,
        ADC1RST,
        ADC2RST,
        TIM1RST,
        SPI1RST,
        TIM8RST,
        USART1RST,
        ADC3RST,
        RESERVED_1,
        TIM9RST,
        TIM10RST,
        TIM11RST,
        RESERVED_2,
    };
};
template <> class xEnum<RCC_BASE_ADDRESS, RCC_APB1RSTR_OFFSET>
{
public:
    enum val:unsigned int
    {
        TIM2RST,
        TIM3RST,
        TIM4RST,
        TIM5RST,
        TIM6RST,
        TIM7RST,
        TIM12RST,
        TIM13RST,
        TIM14RST,
        RESERVED_0,
        	WWDGRST,
        RESERVED_1,
        SPI2RST,
        SPI3RST,
        RESERVED_2,
        USART2RST,
        USART3RST,
        UART4RST,
        UART5RST,
        I2C1RST,
        I2C2RST,
        USBRST,
        RESERVED_3,
        CANRST,
        RESERVED_4,
        BKPRST,
        PWRRST,
        DACRST,
        RESERVED_5,
    };
};
template <> class xEnum<RCC_BASE_ADDRESS, RCC_AHBENR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DMA1EN,
        DMA2EN,
        SRAMEN,
        RESERVED_0,
        FLITFEN,
        RESERVED_1,
        CRCEN,
        RESERVED_2,
        FSMCEN,
        RESERVED_3,
        SDIO,
        RESERVED_4,
    };
};
template <> class xEnum<RCC_BASE_ADDRESS, RCC_APB2ENR_OFFSET>
{
public:
    enum val:unsigned int
    {
        AFIOEN,
        RESERVED_0,
        IOPAEN,
        IOPBEN,
        IOPCEN,
        IOPDEN,
        IOPEEN,
        IOPFEN,
        IOPGEN,
        ADC1EN,
        ADC2EN,
        TIM1EN,
        SPI1EN,
        TIM8EN,
        USART1EN,
        ADC3EN,
        RESERVED_1,
        TIM9EN,
        TIM10EN,
        TIM11EN,
        RESERVED_2,
    };
};
template <> class xEnum<RCC_BASE_ADDRESS, RCC_APB1ENR_OFFSET>
{
public:
    enum val:unsigned int
    {
        TIM2EN,
        TIM3EN,
        TIM4EN,
        TIM5EN,
        TIM6EN,
        TIM7EN,
        TIM12EN,
        TIM13EN,
        TIM14EN,
        RESERVED_0,
        WWDGEN,
        RESERVED_1,
        SPI2EN,
        SPI3EN,
        RESERVED_2,
        USART2EN,
        USART3EN,
        UART4EN,
        UART5EN,
        I2C1EN,
        I2C2EN,
        USBEN,
        RESERVED_3,
        CANEN,
        RESERVED_4,
        BKPEN,
        PWREN,
        DACEN,
        RESERVED_5,
    };
};
template <> class xEnum<RCC_BASE_ADDRESS, RCC_BDCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        LSEON,
        LSERDY,
        LSEBYP,
        RESERVED_0,
        RTCSEL,
        RESERVED_1,
        RTCEN,
        BDRST,
        RESERVED_2,
    };
};
template <> class xEnum<RCC_BASE_ADDRESS, RCC_CSR_OFFSET>
{
public:
    enum val:unsigned int
    {
        LSION,
        LSIRDY,
        RESERVED_0,
        RMVF,
        RESERVED_1,
        PINRSTF,
        PORRSTF,
        SFTRSTF,
        IWDGRSTF,
        WWDGRSTF,
        LPWRRSTF,
    };
};
template <> class moduleName<RCC_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, RCC_BASE_ADDRESS, RCC_CR_OFFSET, READ_WRITE, 0u, 1u, READ_ONLY, 1u, 1u, RESERVED, 2u, 1u, READ_WRITE, 3u, 5u, READ_ONLY, 8u, 8u, READ_WRITE, 16u, 1u, READ_ONLY, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, RESERVED, 20u, 4u, READ_WRITE, 24u, 1u, READ_ONLY, 25u, 1u, RESERVED, 26u, 6u> cr;
    typedef    mcuRegister<unsigned int, RCC_BASE_ADDRESS, RCC_CFGR_OFFSET, READ_WRITE, 0u, 2u, READ_ONLY, 2u, 2u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 3u, READ_WRITE, 11u, 3u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 4u, READ_WRITE, 22u, 1u, RESERVED, 23u, 1u, READ_WRITE, 24u, 3u, RESERVED, 27u, 5u> cfgr;
    typedef    mcuRegister<unsigned int, RCC_BASE_ADDRESS, RCC_CIR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, RESERVED, 5u, 2u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 3u, WRITE_ONLY, 16u, 1u, WRITE_ONLY, 17u, 1u, WRITE_ONLY, 18u, 1u, WRITE_ONLY, 19u, 1u, WRITE_ONLY, 20u, 1u, WRITE_ONLY, 21u, 2u, WRITE_ONLY, 23u, 1u, RESERVED, 24u, 8u> cir;
    typedef    mcuRegister<unsigned int, RCC_BASE_ADDRESS, RCC_APB2RSTR_OFFSET, READ_WRITE, 0u, 1u, RESERVED, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 3u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, RESERVED, 22u, 10u> apb2rstr;
    typedef    mcuRegister<unsigned int, RCC_BASE_ADDRESS, RCC_APB1RSTR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, RESERVED, 9u, 2u, READ_WRITE, 11u, 1u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, READ_WRITE, 22u, 1u, READ_WRITE, 23u, 1u, RESERVED, 24u, 1u, READ_WRITE, 25u, 1u, RESERVED, 26u, 1u, READ_WRITE, 27u, 1u, READ_WRITE, 28u, 1u, READ_WRITE, 29u, 1u, RESERVED, 30u, 2u> apb1rstr;
    typedef    mcuRegister<unsigned int, RCC_BASE_ADDRESS, RCC_AHBENR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, READ_WRITE, 4u, 1u, RESERVED, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, RESERVED, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> ahbenr;
    typedef    mcuRegister<unsigned int, RCC_BASE_ADDRESS, RCC_APB2ENR_OFFSET, READ_WRITE, 0u, 1u, RESERVED, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 3u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, RESERVED, 22u, 10u> apb2enr;
    typedef    mcuRegister<unsigned int, RCC_BASE_ADDRESS, RCC_APB1ENR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, RESERVED, 9u, 2u, READ_WRITE, 11u, 1u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, READ_WRITE, 22u, 1u, READ_WRITE, 23u, 1u, RESERVED, 24u, 1u, READ_WRITE, 25u, 1u, RESERVED, 26u, 1u, READ_WRITE, 27u, 1u, READ_WRITE, 28u, 1u, READ_WRITE, 29u, 1u, RESERVED, 30u, 2u> apb1enr;
    typedef    mcuRegister<unsigned int, RCC_BASE_ADDRESS, RCC_BDCR_OFFSET, READ_WRITE, 0u, 1u, READ_ONLY, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 5u, READ_WRITE, 8u, 2u, RESERVED, 10u, 5u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> bdcr;
    typedef    mcuRegister<unsigned int, RCC_BASE_ADDRESS, RCC_CSR_OFFSET, READ_WRITE, 0u, 1u, READ_ONLY, 1u, 1u, RESERVED, 2u, 22u, READ_WRITE, 24u, 1u, RESERVED, 25u, 1u, READ_WRITE, 26u, 1u, READ_WRITE, 27u, 1u, READ_WRITE, 28u, 1u, READ_WRITE, 29u, 1u, READ_WRITE, 30u, 1u, READ_WRITE, 31u, 1u> csr;
};
typedef moduleName<RCC_BASE_ADDRESS>  rcc;
template     Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_CR_OFFSET, READ_WRITE, 0u, 1u, READ_ONLY, 1u, 1u, RESERVED, 2u, 1u, READ_WRITE, 3u, 5u, READ_ONLY, 8u, 8u, READ_WRITE, 16u, 1u, READ_ONLY, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, RESERVED, 20u, 4u, READ_WRITE, 24u, 1u, READ_ONLY, 25u, 1u, RESERVED, 26u, 6u> rcc::cr::reg;
template <>  Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_CR_OFFSET, READ_WRITE, 0u, 1u, READ_ONLY, 1u, 1u, RESERVED, 2u, 1u, READ_WRITE, 3u, 5u, READ_ONLY, 8u, 8u, READ_WRITE, 16u, 1u, READ_ONLY, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, RESERVED, 20u, 4u, READ_WRITE, 24u, 1u, READ_ONLY, 25u, 1u, RESERVED, 26u, 6u> rcc::cr::reg;
template     Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_CFGR_OFFSET, READ_WRITE, 0u, 2u, READ_ONLY, 2u, 2u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 3u, READ_WRITE, 11u, 3u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 4u, READ_WRITE, 22u, 1u, RESERVED, 23u, 1u, READ_WRITE, 24u, 3u, RESERVED, 27u, 5u> rcc::cfgr::reg;
template <>  Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_CFGR_OFFSET, READ_WRITE, 0u, 2u, READ_ONLY, 2u, 2u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 3u, READ_WRITE, 11u, 3u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 4u, READ_WRITE, 22u, 1u, RESERVED, 23u, 1u, READ_WRITE, 24u, 3u, RESERVED, 27u, 5u> rcc::cfgr::reg;
template     Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_CIR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, RESERVED, 5u, 2u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 3u, WRITE_ONLY, 16u, 1u, WRITE_ONLY, 17u, 1u, WRITE_ONLY, 18u, 1u, WRITE_ONLY, 19u, 1u, WRITE_ONLY, 20u, 1u, WRITE_ONLY, 21u, 2u, WRITE_ONLY, 23u, 1u, RESERVED, 24u, 8u> rcc::cir::reg;
template <>  Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_CIR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, RESERVED, 5u, 2u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 3u, WRITE_ONLY, 16u, 1u, WRITE_ONLY, 17u, 1u, WRITE_ONLY, 18u, 1u, WRITE_ONLY, 19u, 1u, WRITE_ONLY, 20u, 1u, WRITE_ONLY, 21u, 2u, WRITE_ONLY, 23u, 1u, RESERVED, 24u, 8u> rcc::cir::reg;
template     Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_APB2RSTR_OFFSET, READ_WRITE, 0u, 1u, RESERVED, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 3u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, RESERVED, 22u, 10u> rcc::apb2rstr::reg;
template <>  Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_APB2RSTR_OFFSET, READ_WRITE, 0u, 1u, RESERVED, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 3u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, RESERVED, 22u, 10u> rcc::apb2rstr::reg;
template     Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_APB1RSTR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, RESERVED, 9u, 2u, READ_WRITE, 11u, 1u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, READ_WRITE, 22u, 1u, READ_WRITE, 23u, 1u, RESERVED, 24u, 1u, READ_WRITE, 25u, 1u, RESERVED, 26u, 1u, READ_WRITE, 27u, 1u, READ_WRITE, 28u, 1u, READ_WRITE, 29u, 1u, RESERVED, 30u, 2u> rcc::apb1rstr::reg;
template <>  Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_APB1RSTR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, RESERVED, 9u, 2u, READ_WRITE, 11u, 1u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, READ_WRITE, 22u, 1u, READ_WRITE, 23u, 1u, RESERVED, 24u, 1u, READ_WRITE, 25u, 1u, RESERVED, 26u, 1u, READ_WRITE, 27u, 1u, READ_WRITE, 28u, 1u, READ_WRITE, 29u, 1u, RESERVED, 30u, 2u> rcc::apb1rstr::reg;
template     Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_AHBENR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, READ_WRITE, 4u, 1u, RESERVED, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, RESERVED, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> rcc::ahbenr::reg;
template <>  Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_AHBENR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, READ_WRITE, 4u, 1u, RESERVED, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, RESERVED, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> rcc::ahbenr::reg;
template     Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_APB2ENR_OFFSET, READ_WRITE, 0u, 1u, RESERVED, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 3u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, RESERVED, 22u, 10u> rcc::apb2enr::reg;
template <>  Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_APB2ENR_OFFSET, READ_WRITE, 0u, 1u, RESERVED, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 3u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, RESERVED, 22u, 10u> rcc::apb2enr::reg;
template     Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_APB1ENR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, RESERVED, 9u, 2u, READ_WRITE, 11u, 1u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, READ_WRITE, 22u, 1u, READ_WRITE, 23u, 1u, RESERVED, 24u, 1u, READ_WRITE, 25u, 1u, RESERVED, 26u, 1u, READ_WRITE, 27u, 1u, READ_WRITE, 28u, 1u, READ_WRITE, 29u, 1u, RESERVED, 30u, 2u> rcc::apb1enr::reg;
template <>  Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_APB1ENR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, RESERVED, 9u, 2u, READ_WRITE, 11u, 1u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, READ_WRITE, 21u, 1u, READ_WRITE, 22u, 1u, READ_WRITE, 23u, 1u, RESERVED, 24u, 1u, READ_WRITE, 25u, 1u, RESERVED, 26u, 1u, READ_WRITE, 27u, 1u, READ_WRITE, 28u, 1u, READ_WRITE, 29u, 1u, RESERVED, 30u, 2u> rcc::apb1enr::reg;
template     Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_BDCR_OFFSET, READ_WRITE, 0u, 1u, READ_ONLY, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 5u, READ_WRITE, 8u, 2u, RESERVED, 10u, 5u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> rcc::bdcr::reg;
template <>  Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_BDCR_OFFSET, READ_WRITE, 0u, 1u, READ_ONLY, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 5u, READ_WRITE, 8u, 2u, RESERVED, 10u, 5u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> rcc::bdcr::reg;
template     Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_CSR_OFFSET, READ_WRITE, 0u, 1u, READ_ONLY, 1u, 1u, RESERVED, 2u, 22u, READ_WRITE, 24u, 1u, RESERVED, 25u, 1u, READ_WRITE, 26u, 1u, READ_WRITE, 27u, 1u, READ_WRITE, 28u, 1u, READ_WRITE, 29u, 1u, READ_WRITE, 30u, 1u, READ_WRITE, 31u, 1u> rcc::csr::reg;
template <>  Tuple<unsigned int, RCC_BASE_ADDRESS, RCC_CSR_OFFSET, READ_WRITE, 0u, 1u, READ_ONLY, 1u, 1u, RESERVED, 2u, 22u, READ_WRITE, 24u, 1u, RESERVED, 25u, 1u, READ_WRITE, 26u, 1u, READ_WRITE, 27u, 1u, READ_WRITE, 28u, 1u, READ_WRITE, 29u, 1u, READ_WRITE, 30u, 1u, READ_WRITE, 31u, 1u> rcc::csr::reg;
#endif

