#ifndef __H_GPIO_H__
#define __H_GPIO_H__
#include "Tuple.h"

#define          GPIO1_BASE_ADDRESS                0x40010800
#define          GPIO2_BASE_ADDRESS                0x40010C00
#define          GPIO3_BASE_ADDRESS                0x40011000
#define          GPIO4_BASE_ADDRESS                0x40011400
#define          GPIO5_BASE_ADDRESS                0x40011800
#define          GPIO6_BASE_ADDRESS                0x40011C00
#define          GPIO7_BASE_ADDRESS                0x40012000
#define     GPIO1_CRL_OFFSET    0x00000000
#define     GPIO2_CRL_OFFSET    0x00000000
#define     GPIO3_CRL_OFFSET    0x00000000
#define     GPIO4_CRL_OFFSET    0x00000000
#define     GPIO5_CRL_OFFSET    0x00000000
#define     GPIO6_CRL_OFFSET    0x00000000
#define     GPIO7_CRL_OFFSET    0x00000000
#define     GPIO1_CRH_OFFSET    0x00000004
#define     GPIO2_CRH_OFFSET    0x00000004
#define     GPIO3_CRH_OFFSET    0x00000004
#define     GPIO4_CRH_OFFSET    0x00000004
#define     GPIO5_CRH_OFFSET    0x00000004
#define     GPIO6_CRH_OFFSET    0x00000004
#define     GPIO7_CRH_OFFSET    0x00000004
#define     GPIO1_IDR_OFFSET    0x00000008
#define     GPIO2_IDR_OFFSET    0x00000008
#define     GPIO3_IDR_OFFSET    0x00000008
#define     GPIO4_IDR_OFFSET    0x00000008
#define     GPIO5_IDR_OFFSET    0x00000008
#define     GPIO6_IDR_OFFSET    0x00000008
#define     GPIO7_IDR_OFFSET    0x00000008
#define     GPIO1_ODR_OFFSET    0x0000000C
#define     GPIO2_ODR_OFFSET    0x0000000C
#define     GPIO3_ODR_OFFSET    0x0000000C
#define     GPIO4_ODR_OFFSET    0x0000000C
#define     GPIO5_ODR_OFFSET    0x0000000C
#define     GPIO6_ODR_OFFSET    0x0000000C
#define     GPIO7_ODR_OFFSET    0x0000000C
#define     GPIO1_BSRR_OFFSET    0x00000010
#define     GPIO2_BSRR_OFFSET    0x00000010
#define     GPIO3_BSRR_OFFSET    0x00000010
#define     GPIO4_BSRR_OFFSET    0x00000010
#define     GPIO5_BSRR_OFFSET    0x00000010
#define     GPIO6_BSRR_OFFSET    0x00000010
#define     GPIO7_BSRR_OFFSET    0x00000010
#define     GPIO1_BRR_OFFSET    0x00000014
#define     GPIO2_BRR_OFFSET    0x00000014
#define     GPIO3_BRR_OFFSET    0x00000014
#define     GPIO4_BRR_OFFSET    0x00000014
#define     GPIO5_BRR_OFFSET    0x00000014
#define     GPIO6_BRR_OFFSET    0x00000014
#define     GPIO7_BRR_OFFSET    0x00000014
#define     GPIO1_LCKR_OFFSET    0x00000018
#define     GPIO2_LCKR_OFFSET    0x00000018
#define     GPIO3_LCKR_OFFSET    0x00000018
#define     GPIO4_LCKR_OFFSET    0x00000018
#define     GPIO5_LCKR_OFFSET    0x00000018
#define     GPIO6_LCKR_OFFSET    0x00000018
#define     GPIO7_LCKR_OFFSET    0x00000018
template <> class xEnum<GPIO1_BASE_ADDRESS, GPIO1_CRL_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE0,
        CNF0,
        MODE1,
        CNF1,
        MODE2,
        CNF2,
        MODE3,
        CNF3,
        MODE4,
        CNF4,
        MODE5,
        CNF5,
        MODE6,
        CNF6,
        MODE7,
        CNF7,
    };
};
template <> class xEnum<GPIO2_BASE_ADDRESS, GPIO2_CRL_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE0,
        CNF0,
        MODE1,
        CNF1,
        MODE2,
        CNF2,
        MODE3,
        CNF3,
        MODE4,
        CNF4,
        MODE5,
        CNF5,
        MODE6,
        CNF6,
        MODE7,
        CNF7,
    };
};
template <> class xEnum<GPIO3_BASE_ADDRESS, GPIO3_CRL_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE0,
        CNF0,
        MODE1,
        CNF1,
        MODE2,
        CNF2,
        MODE3,
        CNF3,
        MODE4,
        CNF4,
        MODE5,
        CNF5,
        MODE6,
        CNF6,
        MODE7,
        CNF7,
    };
};
template <> class xEnum<GPIO4_BASE_ADDRESS, GPIO4_CRL_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE0,
        CNF0,
        MODE1,
        CNF1,
        MODE2,
        CNF2,
        MODE3,
        CNF3,
        MODE4,
        CNF4,
        MODE5,
        CNF5,
        MODE6,
        CNF6,
        MODE7,
        CNF7,
    };
};
template <> class xEnum<GPIO5_BASE_ADDRESS, GPIO5_CRL_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE0,
        CNF0,
        MODE1,
        CNF1,
        MODE2,
        CNF2,
        MODE3,
        CNF3,
        MODE4,
        CNF4,
        MODE5,
        CNF5,
        MODE6,
        CNF6,
        MODE7,
        CNF7,
    };
};
template <> class xEnum<GPIO6_BASE_ADDRESS, GPIO6_CRL_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE0,
        CNF0,
        MODE1,
        CNF1,
        MODE2,
        CNF2,
        MODE3,
        CNF3,
        MODE4,
        CNF4,
        MODE5,
        CNF5,
        MODE6,
        CNF6,
        MODE7,
        CNF7,
    };
};
template <> class xEnum<GPIO7_BASE_ADDRESS, GPIO7_CRL_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE0,
        CNF0,
        MODE1,
        CNF1,
        MODE2,
        CNF2,
        MODE3,
        CNF3,
        MODE4,
        CNF4,
        MODE5,
        CNF5,
        MODE6,
        CNF6,
        MODE7,
        CNF7,
    };
};
template <> class xEnum<GPIO1_BASE_ADDRESS, GPIO1_CRH_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE8,
        CNF8,
        MODE9,
        CNF9,
        MODE10,
        CNF10,
        MODE11,
        CNF11,
        MODE12,
        CNF12,
        MODE13,
        CNF13,
        MODE14,
        CNF14,
        MODE15,
        CNF15,
    };
};
template <> class xEnum<GPIO2_BASE_ADDRESS, GPIO2_CRH_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE8,
        CNF8,
        MODE9,
        CNF9,
        MODE10,
        CNF10,
        MODE11,
        CNF11,
        MODE12,
        CNF12,
        MODE13,
        CNF13,
        MODE14,
        CNF14,
        MODE15,
        CNF15,
    };
};
template <> class xEnum<GPIO3_BASE_ADDRESS, GPIO3_CRH_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE8,
        CNF8,
        MODE9,
        CNF9,
        MODE10,
        CNF10,
        MODE11,
        CNF11,
        MODE12,
        CNF12,
        MODE13,
        CNF13,
        MODE14,
        CNF14,
        MODE15,
        CNF15,
    };
};
template <> class xEnum<GPIO4_BASE_ADDRESS, GPIO4_CRH_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE8,
        CNF8,
        MODE9,
        CNF9,
        MODE10,
        CNF10,
        MODE11,
        CNF11,
        MODE12,
        CNF12,
        MODE13,
        CNF13,
        MODE14,
        CNF14,
        MODE15,
        CNF15,
    };
};
template <> class xEnum<GPIO5_BASE_ADDRESS, GPIO5_CRH_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE8,
        CNF8,
        MODE9,
        CNF9,
        MODE10,
        CNF10,
        MODE11,
        CNF11,
        MODE12,
        CNF12,
        MODE13,
        CNF13,
        MODE14,
        CNF14,
        MODE15,
        CNF15,
    };
};
template <> class xEnum<GPIO6_BASE_ADDRESS, GPIO6_CRH_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE8,
        CNF8,
        MODE9,
        CNF9,
        MODE10,
        CNF10,
        MODE11,
        CNF11,
        MODE12,
        CNF12,
        MODE13,
        CNF13,
        MODE14,
        CNF14,
        MODE15,
        CNF15,
    };
};
template <> class xEnum<GPIO7_BASE_ADDRESS, GPIO7_CRH_OFFSET>
{
public:
    enum val:unsigned int
    {
        MODE8,
        CNF8,
        MODE9,
        CNF9,
        MODE10,
        CNF10,
        MODE11,
        CNF11,
        MODE12,
        CNF12,
        MODE13,
        CNF13,
        MODE14,
        CNF14,
        MODE15,
        CNF15,
    };
};
template <> class xEnum<GPIO1_BASE_ADDRESS, GPIO1_IDR_OFFSET>
{
public:
    enum val:unsigned int
    {
        IDR,
    };
};
template <> class xEnum<GPIO2_BASE_ADDRESS, GPIO2_IDR_OFFSET>
{
public:
    enum val:unsigned int
    {
        IDR,
    };
};
template <> class xEnum<GPIO3_BASE_ADDRESS, GPIO3_IDR_OFFSET>
{
public:
    enum val:unsigned int
    {
        IDR,
    };
};
template <> class xEnum<GPIO4_BASE_ADDRESS, GPIO4_IDR_OFFSET>
{
public:
    enum val:unsigned int
    {
        IDR,
    };
};
template <> class xEnum<GPIO5_BASE_ADDRESS, GPIO5_IDR_OFFSET>
{
public:
    enum val:unsigned int
    {
        IDR,
    };
};
template <> class xEnum<GPIO6_BASE_ADDRESS, GPIO6_IDR_OFFSET>
{
public:
    enum val:unsigned int
    {
        IDR,
    };
};
template <> class xEnum<GPIO7_BASE_ADDRESS, GPIO7_IDR_OFFSET>
{
public:
    enum val:unsigned int
    {
        IDR,
    };
};
template <> class xEnum<GPIO1_BASE_ADDRESS, GPIO1_ODR_OFFSET>
{
public:
    enum val:unsigned int
    {
        ODR,
    };
};
template <> class xEnum<GPIO2_BASE_ADDRESS, GPIO2_ODR_OFFSET>
{
public:
    enum val:unsigned int
    {
        ODR,
    };
};
template <> class xEnum<GPIO3_BASE_ADDRESS, GPIO3_ODR_OFFSET>
{
public:
    enum val:unsigned int
    {
        ODR,
    };
};
template <> class xEnum<GPIO4_BASE_ADDRESS, GPIO4_ODR_OFFSET>
{
public:
    enum val:unsigned int
    {
        ODR,
    };
};
template <> class xEnum<GPIO5_BASE_ADDRESS, GPIO5_ODR_OFFSET>
{
public:
    enum val:unsigned int
    {
        ODR,
    };
};
template <> class xEnum<GPIO6_BASE_ADDRESS, GPIO6_ODR_OFFSET>
{
public:
    enum val:unsigned int
    {
        ODR,
    };
};
template <> class xEnum<GPIO7_BASE_ADDRESS, GPIO7_ODR_OFFSET>
{
public:
    enum val:unsigned int
    {
        ODR,
    };
};
template <> class xEnum<GPIO1_BASE_ADDRESS, GPIO1_BSRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BS,
        BR,
    };
};
template <> class xEnum<GPIO2_BASE_ADDRESS, GPIO2_BSRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BS,
        BR,
    };
};
template <> class xEnum<GPIO3_BASE_ADDRESS, GPIO3_BSRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BS,
        BR,
    };
};
template <> class xEnum<GPIO4_BASE_ADDRESS, GPIO4_BSRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BS,
        BR,
    };
};
template <> class xEnum<GPIO5_BASE_ADDRESS, GPIO5_BSRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BS,
        BR,
    };
};
template <> class xEnum<GPIO6_BASE_ADDRESS, GPIO6_BSRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BS,
        BR,
    };
};
template <> class xEnum<GPIO7_BASE_ADDRESS, GPIO7_BSRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BS,
        BR,
    };
};
template <> class xEnum<GPIO1_BASE_ADDRESS, GPIO1_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BR,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO2_BASE_ADDRESS, GPIO2_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BR,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO3_BASE_ADDRESS, GPIO3_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BR,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO4_BASE_ADDRESS, GPIO4_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BR,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO5_BASE_ADDRESS, GPIO5_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BR,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO6_BASE_ADDRESS, GPIO6_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BR,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO7_BASE_ADDRESS, GPIO7_BRR_OFFSET>
{
public:
    enum val:unsigned int
    {
        BR,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO1_BASE_ADDRESS, GPIO1_LCKR_OFFSET>
{
public:
    enum val:unsigned int
    {
        LCK0,
        LCK1,
        LCK2,
        LCK3,
        LCK4,
        LCK5,
        LCK6,
        LCK7,
        LCK8,
        LCK9,
        LCK10,
        LCK11,
        LCK12,
        LCK13,
        LCK14,
        LCK15,
        LCKK,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO2_BASE_ADDRESS, GPIO2_LCKR_OFFSET>
{
public:
    enum val:unsigned int
    {
        LCK0,
        LCK1,
        LCK2,
        LCK3,
        LCK4,
        LCK5,
        LCK6,
        LCK7,
        LCK8,
        LCK9,
        LCK10,
        LCK11,
        LCK12,
        LCK13,
        LCK14,
        LCK15,
        LCKK,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO3_BASE_ADDRESS, GPIO3_LCKR_OFFSET>
{
public:
    enum val:unsigned int
    {
        LCK0,
        LCK1,
        LCK2,
        LCK3,
        LCK4,
        LCK5,
        LCK6,
        LCK7,
        LCK8,
        LCK9,
        LCK10,
        LCK11,
        LCK12,
        LCK13,
        LCK14,
        LCK15,
        LCKK,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO4_BASE_ADDRESS, GPIO4_LCKR_OFFSET>
{
public:
    enum val:unsigned int
    {
        LCK0,
        LCK1,
        LCK2,
        LCK3,
        LCK4,
        LCK5,
        LCK6,
        LCK7,
        LCK8,
        LCK9,
        LCK10,
        LCK11,
        LCK12,
        LCK13,
        LCK14,
        LCK15,
        LCKK,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO5_BASE_ADDRESS, GPIO5_LCKR_OFFSET>
{
public:
    enum val:unsigned int
    {
        LCK0,
        LCK1,
        LCK2,
        LCK3,
        LCK4,
        LCK5,
        LCK6,
        LCK7,
        LCK8,
        LCK9,
        LCK10,
        LCK11,
        LCK12,
        LCK13,
        LCK14,
        LCK15,
        LCKK,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO6_BASE_ADDRESS, GPIO6_LCKR_OFFSET>
{
public:
    enum val:unsigned int
    {
        LCK0,
        LCK1,
        LCK2,
        LCK3,
        LCK4,
        LCK5,
        LCK6,
        LCK7,
        LCK8,
        LCK9,
        LCK10,
        LCK11,
        LCK12,
        LCK13,
        LCK14,
        LCK15,
        LCKK,
        RESERVED_0,
    };
};
template <> class xEnum<GPIO7_BASE_ADDRESS, GPIO7_LCKR_OFFSET>
{
public:
    enum val:unsigned int
    {
        LCK0,
        LCK1,
        LCK2,
        LCK3,
        LCK4,
        LCK5,
        LCK6,
        LCK7,
        LCK8,
        LCK9,
        LCK10,
        LCK11,
        LCK12,
        LCK13,
        LCK14,
        LCK15,
        LCKK,
        RESERVED_0,
    };
};
template <> class moduleName<GPIO1_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crl;
    typedef    mcuRegister<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crh;
    typedef    mcuRegister<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_IDR_OFFSET, READ_ONLY, 0u, 32u> idr;
    typedef    mcuRegister<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_ODR_OFFSET, READ_WRITE, 0u, 32u> odr;
    typedef    mcuRegister<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> bsrr;
    typedef    mcuRegister<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> lckr;
};
typedef moduleName<GPIO1_BASE_ADDRESS>  gpio1;
/*template     Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio1::crl::reg;
template <>  Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio1::crl::reg;
template     Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio1::crh::reg;
template <>  Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio1::crh::reg;
template     Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio1::idr::reg;
template <>  Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio1::idr::reg;
template     Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio1::odr::reg;
template <>  Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio1::odr::reg;
template     Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio1::bsrr::reg;
template <>  Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio1::bsrr::reg;
template     Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio1::brr::reg;
template <>  Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio1::brr::reg;
template     Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio1::lckr::reg;
template <>  Tuple<unsigned int, GPIO1_BASE_ADDRESS, GPIO1_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio1::lckr::reg;*/
template <> class moduleName<GPIO2_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crl;
    typedef    mcuRegister<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crh;
    typedef    mcuRegister<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_IDR_OFFSET, READ_ONLY, 0u, 32u> idr;
    typedef    mcuRegister<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_ODR_OFFSET, READ_WRITE, 0u, 32u> odr;
    typedef    mcuRegister<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> bsrr;
    typedef    mcuRegister<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> lckr;
};
typedef moduleName<GPIO2_BASE_ADDRESS>  gpio2;
/*template     Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio2::crl::reg;
template <>  Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio2::crl::reg;
template     Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio2::crh::reg;
template <>  Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio2::crh::reg;
template     Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio2::idr::reg;
template <>  Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio2::idr::reg;
template     Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio2::odr::reg;
template <>  Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio2::odr::reg;
template     Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio2::bsrr::reg;
template <>  Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio2::bsrr::reg;
template     Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio2::brr::reg;
template <>  Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio2::brr::reg;
template     Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio2::lckr::reg;
template <>  Tuple<unsigned int, GPIO2_BASE_ADDRESS, GPIO2_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio2::lckr::reg;*/
template <> class moduleName<GPIO3_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crl;
    typedef    mcuRegister<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crh;
    typedef    mcuRegister<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_IDR_OFFSET, READ_ONLY, 0u, 32u> idr;
    typedef    mcuRegister<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_ODR_OFFSET, READ_WRITE, 0u, 32u> odr;
    typedef    mcuRegister<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> bsrr;
    typedef    mcuRegister<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> lckr;
};
typedef moduleName<GPIO3_BASE_ADDRESS>  gpio3;
/*template     Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio3::crl::reg;
template <>  Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio3::crl::reg;
template     Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio3::crh::reg;
template <>  Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio3::crh::reg;
template     Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio3::idr::reg;
template <>  Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio3::idr::reg;
template     Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio3::odr::reg;
template <>  Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio3::odr::reg;
template     Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio3::bsrr::reg;
template <>  Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio3::bsrr::reg;
template     Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio3::brr::reg;
template <>  Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio3::brr::reg;
template     Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio3::lckr::reg;
template <>  Tuple<unsigned int, GPIO3_BASE_ADDRESS, GPIO3_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio3::lckr::reg;*/
template <> class moduleName<GPIO4_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crl;
    typedef    mcuRegister<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crh;
    typedef    mcuRegister<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_IDR_OFFSET, READ_ONLY, 0u, 32u> idr;
    typedef    mcuRegister<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_ODR_OFFSET, READ_WRITE, 0u, 32u> odr;
    typedef    mcuRegister<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> bsrr;
    typedef    mcuRegister<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> lckr;
};
typedef moduleName<GPIO4_BASE_ADDRESS>  gpio4;
/*template     Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio4::crl::reg;
template <>  Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio4::crl::reg;
template     Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio4::crh::reg;
template <>  Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio4::crh::reg;
template     Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio4::idr::reg;
template <>  Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio4::idr::reg;
template     Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio4::odr::reg;
template <>  Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio4::odr::reg;
template     Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio4::bsrr::reg;
template <>  Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio4::bsrr::reg;
template     Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio4::brr::reg;
template <>  Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio4::brr::reg;
template     Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio4::lckr::reg;
template <>  Tuple<unsigned int, GPIO4_BASE_ADDRESS, GPIO4_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio4::lckr::reg;*/
template <> class moduleName<GPIO5_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crl;
    typedef    mcuRegister<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crh;
    typedef    mcuRegister<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_IDR_OFFSET, READ_ONLY, 0u, 32u> idr;
    typedef    mcuRegister<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_ODR_OFFSET, READ_WRITE, 0u, 32u> odr;
    typedef    mcuRegister<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> bsrr;
    typedef    mcuRegister<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> lckr;
};
typedef moduleName<GPIO5_BASE_ADDRESS>  gpio5;
/*template     Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio5::crl::reg;
template <>  Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio5::crl::reg;
template     Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio5::crh::reg;
template <>  Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio5::crh::reg;
template     Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio5::idr::reg;
template <>  Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio5::idr::reg;
template     Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio5::odr::reg;
template <>  Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio5::odr::reg;
template     Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio5::bsrr::reg;
template <>  Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio5::bsrr::reg;
template     Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio5::brr::reg;
template <>  Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio5::brr::reg;
template     Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio5::lckr::reg;
template <>  Tuple<unsigned int, GPIO5_BASE_ADDRESS, GPIO5_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio5::lckr::reg;*/
template <> class moduleName<GPIO6_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crl;
    typedef    mcuRegister<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crh;
    typedef    mcuRegister<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_IDR_OFFSET, READ_ONLY, 0u, 32u> idr;
    typedef    mcuRegister<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_ODR_OFFSET, READ_WRITE, 0u, 32u> odr;
    typedef    mcuRegister<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> bsrr;
    typedef    mcuRegister<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> lckr;
};
typedef moduleName<GPIO6_BASE_ADDRESS>  gpio6;
/*template     Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio6::crl::reg;
template <>  Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio6::crl::reg;
template     Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio6::crh::reg;
template <>  Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio6::crh::reg;
template     Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio6::idr::reg;
template <>  Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio6::idr::reg;
template     Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio6::odr::reg;
template <>  Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio6::odr::reg;
template     Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio6::bsrr::reg;
template <>  Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio6::bsrr::reg;
template     Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio6::brr::reg;
template <>  Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio6::brr::reg;
template     Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio6::lckr::reg;
template <>  Tuple<unsigned int, GPIO6_BASE_ADDRESS, GPIO6_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio6::lckr::reg;*/
template <> class moduleName<GPIO7_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crl;
    typedef    mcuRegister<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> crh;
    typedef    mcuRegister<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_IDR_OFFSET, READ_ONLY, 0u, 32u> idr;
    typedef    mcuRegister<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_ODR_OFFSET, READ_WRITE, 0u, 32u> odr;
    typedef    mcuRegister<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> bsrr;
    typedef    mcuRegister<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> brr;
    typedef    mcuRegister<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> lckr;
};
typedef moduleName<GPIO7_BASE_ADDRESS>  gpio7;
/*template     Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio7::crl::reg;
template <>  Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_CRL_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio7::crl::reg;
template     Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio7::crh::reg;
template <>  Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_CRH_OFFSET, READ_WRITE, 0u, 3u, READ_WRITE, 2u, 2u, READ_WRITE, 4u, 2u, READ_WRITE, 6u, 2u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 2u, READ_WRITE, 16u, 2u, READ_WRITE, 18u, 2u, READ_WRITE, 20u, 2u, READ_WRITE, 22u, 2u, READ_WRITE, 24u, 2u, READ_WRITE, 26u, 2u, READ_WRITE, 28u, 2u, READ_WRITE, 30u, 2u> gpio7::crh::reg;
template     Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio7::idr::reg;
template <>  Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_IDR_OFFSET, READ_ONLY, 0u, 32u> gpio7::idr::reg;
template     Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio7::odr::reg;
template <>  Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_ODR_OFFSET, READ_WRITE, 0u, 32u> gpio7::odr::reg;
template     Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio7::bsrr::reg;
template <>  Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_BSRR_OFFSET, WRITE_ONLY, 0u, 16u, WRITE_ONLY, 16u, 16u> gpio7::bsrr::reg;
template     Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio7::brr::reg;
template <>  Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_BRR_OFFSET, WRITE_ONLY, 0u, 16u, RESERVED, 16u, 16u> gpio7::brr::reg;
template     Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio7::lckr::reg;
template <>  Tuple<unsigned int, GPIO7_BASE_ADDRESS, GPIO7_LCKR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, READ_WRITE, 16u, 1u, RESERVED, 17u, 15u> gpio7::lckr::reg;*/
#endif

