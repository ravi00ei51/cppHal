#ifndef __H_AFIO_H__
#define __H_AFIO_H__
#include "Tuple.h"

#define          AFIO_BASE_ADDRESS                0x40010000
#define     AFIO_EVCR_OFFSET    0x00000000
#define     AFIO_MAPR_OFFSET    0x00000004
#define     AFIO_EXTICR1_OFFSET    0x00000008
#define     AFIO_EXTICR2_OFFSET    0x0000000C
#define     AFIO_EXTICR3_OFFSET    0x00000010
#define     AFIO_EXTICR4_OFFSET    0x00000014
#define     AFIO_MAPR2_OFFSET    0x0000001C
template <> class xEnum<AFIO_BASE_ADDRESS, AFIO_EVCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        PIN,
        PORT,
        EVOE,
        RESERVED_0,
    };
};
template <> class xEnum<AFIO_BASE_ADDRESS, AFIO_MAPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        SPI1_REMAP,
        I2C1_REMAP,
        USART1_REMAP,
        USART2_REMAP,
        USART3_REMAP,
        TIM1_REMAP,
        TIM2_REMAP,
        TIM3_REMAP,
        TIM4_REMAP,
        CAN_REMAP,
        PD01_REMAP,
        TIM5CH4_IREMAP,
        ADC1_ETRGINJ_REMAP,
        ADC1_ETRGREG_REMAP,
        ADC2_ETRGINJ_REMAP,
        ADC2_ETRGREG_REMAP,
        RESERVED_0,
        SWJ_CFG,
        RESERVED_1,
    };
};
template <> class xEnum<AFIO_BASE_ADDRESS, AFIO_EXTICR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        EXTI0,
        EXTI1,
        EXTI2,
        EXTI3,
        RESERVED_0,
    };
};
template <> class xEnum<AFIO_BASE_ADDRESS, AFIO_EXTICR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        EXTI4,
        EXTI5,
        EXTI6,
        EXTI7,
        RESERVED_0,
    };
};
template <> class xEnum<AFIO_BASE_ADDRESS, AFIO_EXTICR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        EXTI8,
        EXTI9,
        EXTI10,
        EXTI11,
        RESERVED_0,
    };
};
template <> class xEnum<AFIO_BASE_ADDRESS, AFIO_EXTICR4_OFFSET>
{
public:
    enum val:unsigned int
    {
        EXTI12,
        EXTI13,
        EXTI14,
        EXTI15,
        RESERVED_0,
    };
};
template <> class xEnum<AFIO_BASE_ADDRESS, AFIO_MAPR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        RESERVED_0,
        TIM9_REMAP,
        TIM10_REMAP,
        TIM11_REMAP,
        TIM13_REMAP,
        TIM14_REMAP,
        FSMC_NADV,
        RESERVED_1,
    };
};
template <> class moduleName<AFIO_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, AFIO_BASE_ADDRESS, AFIO_EVCR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 3u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> evcr;
    typedef    mcuRegister<unsigned int, AFIO_BASE_ADDRESS, AFIO_MAPR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 2u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, RESERVED, 21u, 3u, WRITE_ONLY, 24u, 3u, RESERVED, 27u, 5u> mapr;
    typedef    mcuRegister<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR1_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> exticr1;
    typedef    mcuRegister<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> exticr2;
    typedef    mcuRegister<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR3_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> exticr3;
    typedef    mcuRegister<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR4_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> exticr4;
    typedef    mcuRegister<unsigned int, AFIO_BASE_ADDRESS, AFIO_MAPR2_OFFSET, RESERVED, 0u, 5u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> mapr2;
};
typedef moduleName<AFIO_BASE_ADDRESS>  afio;
template     Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_EVCR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 3u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> afio::evcr::reg;
template <>  Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_EVCR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 3u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> afio::evcr::reg;
template     Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_MAPR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 2u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, RESERVED, 21u, 3u, WRITE_ONLY, 24u, 3u, RESERVED, 27u, 5u> afio::mapr::reg;
template <>  Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_MAPR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 2u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, READ_WRITE, 17u, 1u, READ_WRITE, 18u, 1u, READ_WRITE, 19u, 1u, READ_WRITE, 20u, 1u, RESERVED, 21u, 3u, WRITE_ONLY, 24u, 3u, RESERVED, 27u, 5u> afio::mapr::reg;
template     Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR1_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> afio::exticr1::reg;
template <>  Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR1_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> afio::exticr1::reg;
template     Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> afio::exticr2::reg;
template <>  Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> afio::exticr2::reg;
template     Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR3_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> afio::exticr3::reg;
template <>  Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR3_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> afio::exticr3::reg;
template     Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR4_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> afio::exticr4::reg;
template <>  Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_EXTICR4_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 4u, READ_WRITE, 8u, 4u, READ_WRITE, 12u, 4u, RESERVED, 16u, 16u> afio::exticr4::reg;
template     Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_MAPR2_OFFSET, RESERVED, 0u, 5u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> afio::mapr2::reg;
template <>  Tuple<unsigned int, AFIO_BASE_ADDRESS, AFIO_MAPR2_OFFSET, RESERVED, 0u, 5u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> afio::mapr2::reg;
#endif

