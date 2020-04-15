#ifndef __H_UART_H__
#define __H_UART_H__
#include "Tuple.h"

#define          UART1_BASE_ADDRESS                0x40013800
#define          UART2_BASE_ADDRESS                0x40004400
#define          UART3_BASE_ADDRESS                0x40004800
#define          UART4_BASE_ADDRESS                0x40004C00
#define          UART5_BASE_ADDRESS                0x40005000
#define     UART1_SR_OFFSET    0x00000000
#define     UART2_SR_OFFSET    0x00000000
#define     UART3_SR_OFFSET    0x00000000
#define     UART4_SR_OFFSET    0x00000000
#define     UART5_SR_OFFSET    0x00000000
#define     UART1_DR_OFFSET    0x00000004
#define     UART2_DR_OFFSET    0x00000004
#define     UART3_DR_OFFSET    0x00000004
#define     UART4_DR_OFFSET    0x00000004
#define     UART5_DR_OFFSET    0x00000004
#define     UART1_BRR_OFFSET    0x00000008
#define     UART2_BRR_OFFSET    0x00000008
#define     UART3_BRR_OFFSET    0x00000008
#define     UART4_BRR_OFFSET    0x00000008
#define     UART5_BRR_OFFSET    0x00000008
#define     UART1_CR1_OFFSET    0x0000000C
#define     UART2_CR1_OFFSET    0x0000000C
#define     UART3_CR1_OFFSET    0x0000000C
#define     UART4_CR1_OFFSET    0x0000000C
#define     UART5_CR1_OFFSET    0x0000000C
#define     UART1_CR2_OFFSET    0x00000010
#define     UART2_CR2_OFFSET    0x00000010
#define     UART3_CR2_OFFSET    0x00000010
#define     UART4_CR2_OFFSET    0x00000010
#define     UART5_CR2_OFFSET    0x00000010
#define     UART1_CR3_OFFSET    0x00000014
#define     UART2_CR3_OFFSET    0x00000014
#define     UART3_CR3_OFFSET    0x00000014
#define     UART4_CR3_OFFSET    0x00000014
#define     UART5_CR3_OFFSET    0x00000014
#define     UART1_GTPR_OFFSET    0x00000018
#define     UART2_GTPR_OFFSET    0x00000018
#define     UART3_GTPR_OFFSET    0x00000018
#define     UART4_GTPR_OFFSET    0x00000018
#define     UART5_GTPR_OFFSET    0x00000018
template <> class xEnum<UART1_BASE_ADDRESS, UART1_SR_OFFSET>
{
public:
    enum val:unsigned int
    {
        PE,
        FE,
        NE,
        ORE,
        IDLE,
        RXNE,
        TC,
        TXE,
        LBD,
        CTS,
        RESERVED_0,
    };
};
template <> class xEnum<UART2_BASE_ADDRESS, UART2_SR_OFFSET>
{
public:
    enum val:unsigned int
    {
        PE,
        FE,
        NE,
        ORE,
        IDLE,
        RXNE,
        TC,
        TXE,
        LBD,
        CTS,
        RESERVED_0,
    };
};
template <> class xEnum<UART3_BASE_ADDRESS, UART3_SR_OFFSET>
{
public:
    enum val:unsigned int
    {
        PE,
        FE,
        NE,
        ORE,
        IDLE,
        RXNE,
        TC,
        TXE,
        LBD,
        CTS,
        RESERVED_0,
    };
};
template <> class xEnum<UART4_BASE_ADDRESS, UART4_SR_OFFSET>
{
public:
    enum val:unsigned int
    {
        PE,
        FE,
        NE,
        ORE,
        IDLE,
        RXNE,
        TC,
        TXE,
        LBD,
        CTS,
        RESERVED_0,
    };
};
template <> class xEnum<UART5_BASE_ADDRESS, UART5_SR_OFFSET>
{
public:
    enum val:unsigned int
    {
        PE,
        FE,
        NE,
        ORE,
        IDLE,
        RXNE,
        TC,
        TXE,
        LBD,
        CTS,
        RESERVED_0,
    };
};
template <> class xEnum<UART1_BASE_ADDRESS, UART1_DR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DR,
        RESERVED_0,
    };
};
template <> class xEnum<UART2_BASE_ADDRESS, UART2_DR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DR,
        RESERVED_0,
    };
};
template <> class xEnum<UART3_BASE_ADDRESS, UART3_DR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DR,
        RESERVED_0,
    };
};
template <> class xEnum<UART4_BASE_ADDRESS, UART4_DR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DR,
        RESERVED_0,
    };
};
template <> class xEnum<UART5_BASE_ADDRESS, UART5_DR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DR,
        RESERVED_0,
    };
};
template <> class xEnum<UART1_BASE_ADDRESS, UART1_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DIV_FRACTION,
        DIV_MANTISSA,
        RESERVED_0,
    };
};
template <> class xEnum<UART2_BASE_ADDRESS, UART2_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DIV_FRACTION,
        DIV_MANTISSA,
        RESERVED_0,
    };
};
template <> class xEnum<UART3_BASE_ADDRESS, UART3_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DIV_FRACTION,
        DIV_MANTISSA,
        RESERVED_0,
    };
};
template <> class xEnum<UART4_BASE_ADDRESS, UART4_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DIV_FRACTION,
        DIV_MANTISSA,
        RESERVED_0,
    };
};
template <> class xEnum<UART5_BASE_ADDRESS, UART5_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DIV_FRACTION,
        DIV_MANTISSA,
        RESERVED_0,
    };
};
template <> class xEnum<UART1_BASE_ADDRESS, UART1_CR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        SBK,
        RWU,
        RE,
        TE,
        IDLEIE,
        RXNEIE,
        TCIE,
        TXIE,
        PEIE,
        PS,
        PCE,
        WAKE,
        M,
        UE,
        RESERVED_0,
    };
};
template <> class xEnum<UART2_BASE_ADDRESS, UART2_CR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        SBK,
        RWU,
        RE,
        TE,
        IDLEIE,
        RXNEIE,
        TCIE,
        TXIE,
        PEIE,
        PS,
        PCE,
        WAKE,
        M,
        UE,
        RESERVED_0,
    };
};
template <> class xEnum<UART3_BASE_ADDRESS, UART3_CR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        SBK,
        RWU,
        RE,
        TE,
        IDLEIE,
        RXNEIE,
        TCIE,
        TXIE,
        PEIE,
        PS,
        PCE,
        WAKE,
        M,
        UE,
        RESERVED_0,
    };
};
template <> class xEnum<UART4_BASE_ADDRESS, UART4_CR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        SBK,
        RWU,
        RE,
        TE,
        IDLEIE,
        RXNEIE,
        TCIE,
        TXIE,
        PEIE,
        PS,
        PCE,
        WAKE,
        M,
        UE,
        RESERVED_0,
    };
};
template <> class xEnum<UART5_BASE_ADDRESS, UART5_CR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        SBK,
        RWU,
        RE,
        TE,
        IDLEIE,
        RXNEIE,
        TCIE,
        TXIE,
        PEIE,
        PS,
        PCE,
        WAKE,
        M,
        UE,
        RESERVED_0,
    };
};
template <> class xEnum<UART1_BASE_ADDRESS, UART1_CR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        ADD,
        RESERVED_0,
        LBDL,
        LBDIE,
        RESERVED_1,
        LBCL,
        CPHA,
        CPOL,
        CLKEN,
        STOP,
        LINEN,
        RESERVED_2,
    };
};
template <> class xEnum<UART2_BASE_ADDRESS, UART2_CR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        ADD,
        RESERVED_0,
        LBDL,
        LBDIE,
        RESERVED_1,
        LBCL,
        CPHA,
        CPOL,
        CLKEN,
        STOP,
        LINEN,
        RESERVED_2,
    };
};
template <> class xEnum<UART3_BASE_ADDRESS, UART3_CR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        ADD,
        RESERVED_0,
        LBDL,
        LBDIE,
        RESERVED_1,
        LBCL,
        CPHA,
        CPOL,
        CLKEN,
        STOP,
        LINEN,
        RESERVED_2,
    };
};
template <> class xEnum<UART4_BASE_ADDRESS, UART4_CR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        ADD,
        RESERVED_0,
        LBDL,
        LBDIE,
        RESERVED_1,
        LBCL,
        CPHA,
        CPOL,
        CLKEN,
        STOP,
        LINEN,
        RESERVED_2,
    };
};
template <> class xEnum<UART5_BASE_ADDRESS, UART5_CR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        ADD,
        RESERVED_0,
        LBDL,
        LBDIE,
        RESERVED_1,
        LBCL,
        CPHA,
        CPOL,
        CLKEN,
        STOP,
        LINEN,
        RESERVED_2,
    };
};
template <> class xEnum<UART1_BASE_ADDRESS, UART1_CR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        EIE,
        IRNE,
        IRLP,
        HDSEL,
        NACK,
        SCEN,
        DMAR,
        DMAT,
        RTSE,
        CTSE,
        CTSIE,
        RESERVED_0,
    };
};
template <> class xEnum<UART2_BASE_ADDRESS, UART2_CR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        EIE,
        IRNE,
        IRLP,
        HDSEL,
        NACK,
        SCEN,
        DMAR,
        DMAT,
        RTSE,
        CTSE,
        CTSIE,
        RESERVED_0,
    };
};
template <> class xEnum<UART3_BASE_ADDRESS, UART3_CR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        EIE,
        IRNE,
        IRLP,
        HDSEL,
        NACK,
        SCEN,
        DMAR,
        DMAT,
        RTSE,
        CTSE,
        CTSIE,
        RESERVED_0,
    };
};
template <> class xEnum<UART4_BASE_ADDRESS, UART4_CR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        EIE,
        IRNE,
        IRLP,
        HDSEL,
        NACK,
        SCEN,
        DMAR,
        DMAT,
        RTSE,
        CTSE,
        CTSIE,
        RESERVED_0,
    };
};
template <> class xEnum<UART5_BASE_ADDRESS, UART5_CR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        EIE,
        IRNE,
        IRLP,
        HDSEL,
        NACK,
        SCEN,
        DMAR,
        DMAT,
        RTSE,
        CTSE,
        CTSIE,
        RESERVED_0,
    };
};
template <> class xEnum<UART1_BASE_ADDRESS, UART1_GTPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        PSC,
        GT,
        RESERVED_0,
    };
};
template <> class xEnum<UART2_BASE_ADDRESS, UART2_GTPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        PSC,
        GT,
        RESERVED_0,
    };
};
template <> class xEnum<UART3_BASE_ADDRESS, UART3_GTPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        PSC,
        GT,
        RESERVED_0,
    };
};
template <> class xEnum<UART4_BASE_ADDRESS, UART4_GTPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        PSC,
        GT,
        RESERVED_0,
    };
};
template <> class xEnum<UART5_BASE_ADDRESS, UART5_GTPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        PSC,
        GT,
        RESERVED_0,
    };
};
template <> class moduleName<UART1_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, UART1_BASE_ADDRESS, UART1_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> sr;
    typedef    mcuRegister<unsigned int, UART1_BASE_ADDRESS, UART1_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> dr;
    typedef    mcuRegister<unsigned int, UART1_BASE_ADDRESS, UART1_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, UART1_BASE_ADDRESS, UART1_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> cr1;
    typedef    mcuRegister<unsigned int, UART1_BASE_ADDRESS, UART1_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> cr2;
    typedef    mcuRegister<unsigned int, UART1_BASE_ADDRESS, UART1_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> cr3;
    typedef    mcuRegister<unsigned int, UART1_BASE_ADDRESS, UART1_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> gtpr;
};
typedef moduleName<UART1_BASE_ADDRESS>  uart1;
template     Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> uart1::sr::reg;
template <>  Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> uart1::sr::reg;
template     Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> uart1::dr::reg;
template <>  Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> uart1::dr::reg;
template     Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> uart1::brr::reg;
template <>  Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> uart1::brr::reg;
template     Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> uart1::cr1::reg;
template <>  Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> uart1::cr1::reg;
template     Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> uart1::cr2::reg;
template <>  Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> uart1::cr2::reg;
template     Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> uart1::cr3::reg;
template <>  Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> uart1::cr3::reg;
template     Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> uart1::gtpr::reg;
template <>  Tuple<unsigned int, UART1_BASE_ADDRESS, UART1_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> uart1::gtpr::reg;
template <> class moduleName<UART2_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, UART2_BASE_ADDRESS, UART2_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> sr;
    typedef    mcuRegister<unsigned int, UART2_BASE_ADDRESS, UART2_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> dr;
    typedef    mcuRegister<unsigned int, UART2_BASE_ADDRESS, UART2_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, UART2_BASE_ADDRESS, UART2_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> cr1;
    typedef    mcuRegister<unsigned int, UART2_BASE_ADDRESS, UART2_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> cr2;
    typedef    mcuRegister<unsigned int, UART2_BASE_ADDRESS, UART2_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> cr3;
    typedef    mcuRegister<unsigned int, UART2_BASE_ADDRESS, UART2_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> gtpr;
};
typedef moduleName<UART2_BASE_ADDRESS>  uart2;
template     Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> uart2::sr::reg;
template <>  Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> uart2::sr::reg;
template     Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> uart2::dr::reg;
template <>  Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> uart2::dr::reg;
template     Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> uart2::brr::reg;
template <>  Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> uart2::brr::reg;
template     Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> uart2::cr1::reg;
template <>  Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> uart2::cr1::reg;
template     Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> uart2::cr2::reg;
template <>  Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> uart2::cr2::reg;
template     Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> uart2::cr3::reg;
template <>  Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> uart2::cr3::reg;
template     Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> uart2::gtpr::reg;
template <>  Tuple<unsigned int, UART2_BASE_ADDRESS, UART2_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> uart2::gtpr::reg;
template <> class moduleName<UART3_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, UART3_BASE_ADDRESS, UART3_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> sr;
    typedef    mcuRegister<unsigned int, UART3_BASE_ADDRESS, UART3_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> dr;
    typedef    mcuRegister<unsigned int, UART3_BASE_ADDRESS, UART3_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, UART3_BASE_ADDRESS, UART3_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> cr1;
    typedef    mcuRegister<unsigned int, UART3_BASE_ADDRESS, UART3_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> cr2;
    typedef    mcuRegister<unsigned int, UART3_BASE_ADDRESS, UART3_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> cr3;
    typedef    mcuRegister<unsigned int, UART3_BASE_ADDRESS, UART3_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> gtpr;
};
typedef moduleName<UART3_BASE_ADDRESS>  uart3;
template     Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> uart3::sr::reg;
template <>  Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> uart3::sr::reg;
template     Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> uart3::dr::reg;
template <>  Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> uart3::dr::reg;
template     Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> uart3::brr::reg;
template <>  Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> uart3::brr::reg;
template     Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> uart3::cr1::reg;
template <>  Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> uart3::cr1::reg;
template     Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> uart3::cr2::reg;
template <>  Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> uart3::cr2::reg;
template     Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> uart3::cr3::reg;
template <>  Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> uart3::cr3::reg;
template     Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> uart3::gtpr::reg;
template <>  Tuple<unsigned int, UART3_BASE_ADDRESS, UART3_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> uart3::gtpr::reg;
template <> class moduleName<UART4_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, UART4_BASE_ADDRESS, UART4_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> sr;
    typedef    mcuRegister<unsigned int, UART4_BASE_ADDRESS, UART4_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> dr;
    typedef    mcuRegister<unsigned int, UART4_BASE_ADDRESS, UART4_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, UART4_BASE_ADDRESS, UART4_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> cr1;
    typedef    mcuRegister<unsigned int, UART4_BASE_ADDRESS, UART4_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> cr2;
    typedef    mcuRegister<unsigned int, UART4_BASE_ADDRESS, UART4_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> cr3;
    typedef    mcuRegister<unsigned int, UART4_BASE_ADDRESS, UART4_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> gtpr;
};
typedef moduleName<UART4_BASE_ADDRESS>  uart4;
template     Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> uart4::sr::reg;
template <>  Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> uart4::sr::reg;
template     Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> uart4::dr::reg;
template <>  Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> uart4::dr::reg;
template     Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> uart4::brr::reg;
template <>  Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> uart4::brr::reg;
template     Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> uart4::cr1::reg;
template <>  Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> uart4::cr1::reg;
template     Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> uart4::cr2::reg;
template <>  Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> uart4::cr2::reg;
template     Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> uart4::cr3::reg;
template <>  Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> uart4::cr3::reg;
template     Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> uart4::gtpr::reg;
template <>  Tuple<unsigned int, UART4_BASE_ADDRESS, UART4_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> uart4::gtpr::reg;
template <> class moduleName<UART5_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, UART5_BASE_ADDRESS, UART5_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> sr;
    typedef    mcuRegister<unsigned int, UART5_BASE_ADDRESS, UART5_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> dr;
    typedef    mcuRegister<unsigned int, UART5_BASE_ADDRESS, UART5_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, UART5_BASE_ADDRESS, UART5_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> cr1;
    typedef    mcuRegister<unsigned int, UART5_BASE_ADDRESS, UART5_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> cr2;
    typedef    mcuRegister<unsigned int, UART5_BASE_ADDRESS, UART5_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> cr3;
    typedef    mcuRegister<unsigned int, UART5_BASE_ADDRESS, UART5_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> gtpr;
};
typedef moduleName<UART5_BASE_ADDRESS>  uart5;
template     Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> uart5::sr::reg;
template <>  Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> uart5::sr::reg;
template     Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> uart5::dr::reg;
template <>  Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_DR_OFFSET, READ_WRITE, 0u, 9u, RESERVED, 9u, 23u> uart5::dr::reg;
template     Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> uart5::brr::reg;
template <>  Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_BRR_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 12u, RESERVED, 16u, 16u> uart5::brr::reg;
template     Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> uart5::cr1::reg;
template <>  Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 18u> uart5::cr1::reg;
template     Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> uart5::cr2::reg;
template <>  Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_CR2_OFFSET, READ_WRITE, 0u, 4u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, RESERVED, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> uart5::cr2::reg;
template     Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> uart5::cr3::reg;
template <>  Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_CR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, RESERVED, 11u, 21u> uart5::cr3::reg;
template     Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> uart5::gtpr::reg;
template <>  Tuple<unsigned int, UART5_BASE_ADDRESS, UART5_GTPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 8u, RESERVED, 16u, 16u> uart5::gtpr::reg;
#endif

