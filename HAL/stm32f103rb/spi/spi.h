#ifndef __H_SPI_H__
#define __H_SPI_H__
#include "Tuple.h"

#define          SPI1_BASE_ADDRESS                0x40013000
#define          SPI2_BASE_ADDRESS                0x40003800
#define          SPI3_BASE_ADDRESS                0x40003C00
#define     SPI1_CR1_OFFSET    0x00000000
#define     SPI2_CR1_OFFSET    0x00000000
#define     SPI3_CR1_OFFSET    0x00000000
#define     SPI1_CR2_OFFSET    0x00000004
#define     SPI2_CR2_OFFSET    0x00000004
#define     SPI3_CR2_OFFSET    0x00000004
#define     SPI1_SR_OFFSET    0x00000008
#define     SPI2_SR_OFFSET    0x00000008
#define     SPI3_SR_OFFSET    0x00000008
#define     SPI1_DR_OFFSET    0x0000000C
#define     SPI2_DR_OFFSET    0x0000000C
#define     SPI3_DR_OFFSET    0x0000000C
#define     SPI1_CRCPR_OFFSET    0x00000010
#define     SPI2_CRCPR_OFFSET    0x00000010
#define     SPI3_CRCPR_OFFSET    0x00000010
#define     SPI1_RXCRCR_OFFSET    0x00000014
#define     SPI2_RXCRCR_OFFSET    0x00000014
#define     SPI3_RXCRCR_OFFSET    0x00000014
#define     SPI1_TXCRCR_OFFSET    0x00000018
#define     SPI2_TXCRCR_OFFSET    0x00000018
#define     SPI3_TXCRCR_OFFSET    0x00000018
#define     SPI1_I2SCFGR_OFFSET    0x0000001C
#define     SPI2_I2SCFGR_OFFSET    0x0000001C
#define     SPI3_I2SCFGR_OFFSET    0x0000001C
#define     SPI1_I2SPR_OFFSET    0x00000020
#define     SPI2_I2SPR_OFFSET    0x00000020
#define     SPI3_I2SPR_OFFSET    0x00000020
template <> class xEnum<SPI1_BASE_ADDRESS, SPI1_CR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        CPHA,
        CPOL,
        MSTR,
        BR,
        SPE,
        LSBFIRST,
        SSI,
        SSM,
        RXONLY,
        DFF,
        CRCNEXT,
        CRCEN,
        BIDIOE,
        BIDIMODE,
        RESERVED_0,
    };
};
template <> class xEnum<SPI2_BASE_ADDRESS, SPI2_CR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        CPHA,
        CPOL,
        MSTR,
        BR,
        SPE,
        LSBFIRST,
        SSI,
        SSM,
        RXONLY,
        DFF,
        CRCNEXT,
        CRCEN,
        BIDIOE,
        BIDIMODE,
        RESERVED_0,
    };
};
template <> class xEnum<SPI3_BASE_ADDRESS, SPI3_CR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        CPHA,
        CPOL,
        MSTR,
        BR,
        SPE,
        LSBFIRST,
        SSI,
        SSM,
        RXONLY,
        DFF,
        CRCNEXT,
        CRCEN,
        BIDIOE,
        BIDIMODE,
        RESERVED_0,
    };
};
template <> class xEnum<SPI1_BASE_ADDRESS, SPI1_CR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        RXDMAEN,
        TXDMAEN,
        SSOE,
        RESERVED_0,
        RESERVED_1,
        ERRIE,
        RXNEIE,
        TXEIE,
        RESERVED_2,
    };
};
template <> class xEnum<SPI2_BASE_ADDRESS, SPI2_CR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        RXDMAEN,
        TXDMAEN,
        SSOE,
        RESERVED_0,
        RESERVED_1,
        ERRIE,
        RXNEIE,
        TXEIE,
        RESERVED_2,
    };
};
template <> class xEnum<SPI3_BASE_ADDRESS, SPI3_CR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        RXDMAEN,
        TXDMAEN,
        SSOE,
        RESERVED_0,
        RESERVED_1,
        ERRIE,
        RXNEIE,
        TXEIE,
        RESERVED_2,
    };
};
template <> class xEnum<SPI1_BASE_ADDRESS, SPI1_SR_OFFSET>
{
public:
    enum val:unsigned int
    {
        RXNE,
        TXE,
        CHSIDE,
        UDR,
        CRCERR,
        MODF,
        OVR,
        BSY,
        RESERVED_0,
    };
};
template <> class xEnum<SPI2_BASE_ADDRESS, SPI2_SR_OFFSET>
{
public:
    enum val:unsigned int
    {
        RXNE,
        TXE,
        CHSIDE,
        UDR,
        CRCERR,
        MODF,
        OVR,
        BSY,
        RESERVED_0,
    };
};
template <> class xEnum<SPI3_BASE_ADDRESS, SPI3_SR_OFFSET>
{
public:
    enum val:unsigned int
    {
        RXNE,
        TXE,
        CHSIDE,
        UDR,
        CRCERR,
        MODF,
        OVR,
        BSY,
        RESERVED_0,
    };
};
template <> class xEnum<SPI1_BASE_ADDRESS, SPI1_DR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DR,
        RESERVED_0,
    };
};
template <> class xEnum<SPI2_BASE_ADDRESS, SPI2_DR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DR,
        RESERVED_0,
    };
};
template <> class xEnum<SPI3_BASE_ADDRESS, SPI3_DR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DR,
        RESERVED_0,
    };
};
template <> class xEnum<SPI1_BASE_ADDRESS, SPI1_CRCPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        CRCPOLY,
        RESERVED_0,
    };
};
template <> class xEnum<SPI2_BASE_ADDRESS, SPI2_CRCPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        CRCPOLY,
        RESERVED_0,
    };
};
template <> class xEnum<SPI3_BASE_ADDRESS, SPI3_CRCPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        CRCPOLY,
        RESERVED_0,
    };
};
template <> class xEnum<SPI1_BASE_ADDRESS, SPI1_RXCRCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        RXCRC,
        RESERVED_0,
    };
};
template <> class xEnum<SPI2_BASE_ADDRESS, SPI2_RXCRCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        RXCRC,
        RESERVED_0,
    };
};
template <> class xEnum<SPI3_BASE_ADDRESS, SPI3_RXCRCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        RXCRC,
        RESERVED_0,
    };
};
template <> class xEnum<SPI1_BASE_ADDRESS, SPI1_TXCRCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        TXCRC,
        RESERVED_0,
    };
};
template <> class xEnum<SPI2_BASE_ADDRESS, SPI2_TXCRCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        TXCRC,
        RESERVED_0,
    };
};
template <> class xEnum<SPI3_BASE_ADDRESS, SPI3_TXCRCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        TXCRC,
        RESERVED_0,
    };
};
template <> class xEnum<SPI1_BASE_ADDRESS, SPI1_I2SCFGR_OFFSET>
{
public:
    enum val:unsigned int
    {
        CHLEN,
        DATLEN,
        CKPOL,
        I2SSTD,
        RESERVED_0,
        PCMSYNC,
        I2SCFG,
        I2SE,
        I2SMOD,
        RESERVED_1,
    };
};
template <> class xEnum<SPI2_BASE_ADDRESS, SPI2_I2SCFGR_OFFSET>
{
public:
    enum val:unsigned int
    {
        CHLEN,
        DATLEN,
        CKPOL,
        I2SSTD,
        RESERVED_0,
        PCMSYNC,
        I2SCFG,
        I2SE,
        I2SMOD,
        RESERVED_1,
    };
};
template <> class xEnum<SPI3_BASE_ADDRESS, SPI3_I2SCFGR_OFFSET>
{
public:
    enum val:unsigned int
    {
        CHLEN,
        DATLEN,
        CKPOL,
        I2SSTD,
        RESERVED_0,
        PCMSYNC,
        I2SCFG,
        I2SE,
        I2SMOD,
        RESERVED_1,
    };
};
template <> class xEnum<SPI1_BASE_ADDRESS, SPI1_I2SPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        I2SDIV,
        ODD,
        MKCOE,
        RESERVED_0,
    };
};
template <> class xEnum<SPI2_BASE_ADDRESS, SPI2_I2SPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        I2SDIV,
        ODD,
        MKCOE,
        RESERVED_0,
    };
};
template <> class xEnum<SPI3_BASE_ADDRESS, SPI3_I2SPR_OFFSET>
{
public:
    enum val:unsigned int
    {
        I2SDIV,
        ODD,
        MKCOE,
        RESERVED_0,
    };
};
template <> class moduleName<SPI1_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, SPI1_BASE_ADDRESS, SPI1_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 3u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> cr1;
    typedef    mcuRegister<unsigned int, SPI1_BASE_ADDRESS, SPI1_CR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, RESERVED, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> cr2;
    typedef    mcuRegister<unsigned int, SPI1_BASE_ADDRESS, SPI1_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_WRITE, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, RESERVED, 8u, 24u> sr;
    typedef    mcuRegister<unsigned int, SPI1_BASE_ADDRESS, SPI1_DR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dr;
    typedef    mcuRegister<unsigned int, SPI1_BASE_ADDRESS, SPI1_CRCPR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> crcpr;
    typedef    mcuRegister<unsigned int, SPI1_BASE_ADDRESS, SPI1_RXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> rxcrcr;
    typedef    mcuRegister<unsigned int, SPI1_BASE_ADDRESS, SPI1_TXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> txcrcr;
    typedef    mcuRegister<unsigned int, SPI1_BASE_ADDRESS, SPI1_I2SCFGR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 2u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, RESERVED, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, RESERVED, 12u, 20u> i2scfgr;
    typedef    mcuRegister<unsigned int, SPI1_BASE_ADDRESS, SPI1_I2SPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> i2spr;
};
typedef moduleName<SPI1_BASE_ADDRESS>  spi1;
template     Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 3u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> spi1::cr1::reg;
template <>  Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 3u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> spi1::cr1::reg;
template     Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_CR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, RESERVED, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> spi1::cr2::reg;
template <>  Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_CR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, RESERVED, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> spi1::cr2::reg;
template     Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_WRITE, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, RESERVED, 8u, 24u> spi1::sr::reg;
template <>  Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_WRITE, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, RESERVED, 8u, 24u> spi1::sr::reg;
template     Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_DR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi1::dr::reg;
template <>  Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_DR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi1::dr::reg;
template     Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_CRCPR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi1::crcpr::reg;
template <>  Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_CRCPR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi1::crcpr::reg;
template     Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_RXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi1::rxcrcr::reg;
template <>  Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_RXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi1::rxcrcr::reg;
template     Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_TXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi1::txcrcr::reg;
template <>  Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_TXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi1::txcrcr::reg;
template     Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_I2SCFGR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 2u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, RESERVED, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, RESERVED, 12u, 20u> spi1::i2scfgr::reg;
template <>  Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_I2SCFGR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 2u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, RESERVED, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, RESERVED, 12u, 20u> spi1::i2scfgr::reg;
template     Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_I2SPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> spi1::i2spr::reg;
template <>  Tuple<unsigned int, SPI1_BASE_ADDRESS, SPI1_I2SPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> spi1::i2spr::reg;
template <> class moduleName<SPI2_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, SPI2_BASE_ADDRESS, SPI2_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 3u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> cr1;
    typedef    mcuRegister<unsigned int, SPI2_BASE_ADDRESS, SPI2_CR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, RESERVED, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> cr2;
    typedef    mcuRegister<unsigned int, SPI2_BASE_ADDRESS, SPI2_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_WRITE, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, RESERVED, 8u, 24u> sr;
    typedef    mcuRegister<unsigned int, SPI2_BASE_ADDRESS, SPI2_DR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dr;
    typedef    mcuRegister<unsigned int, SPI2_BASE_ADDRESS, SPI2_CRCPR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> crcpr;
    typedef    mcuRegister<unsigned int, SPI2_BASE_ADDRESS, SPI2_RXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> rxcrcr;
    typedef    mcuRegister<unsigned int, SPI2_BASE_ADDRESS, SPI2_TXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> txcrcr;
    typedef    mcuRegister<unsigned int, SPI2_BASE_ADDRESS, SPI2_I2SCFGR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 2u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, RESERVED, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, RESERVED, 12u, 20u> i2scfgr;
    typedef    mcuRegister<unsigned int, SPI2_BASE_ADDRESS, SPI2_I2SPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> i2spr;
};
typedef moduleName<SPI2_BASE_ADDRESS>  spi2;
template     Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 3u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> spi2::cr1::reg;
template <>  Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 3u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> spi2::cr1::reg;
template     Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_CR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, RESERVED, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> spi2::cr2::reg;
template <>  Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_CR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, RESERVED, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> spi2::cr2::reg;
template     Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_WRITE, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, RESERVED, 8u, 24u> spi2::sr::reg;
template <>  Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_WRITE, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, RESERVED, 8u, 24u> spi2::sr::reg;
template     Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_DR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi2::dr::reg;
template <>  Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_DR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi2::dr::reg;
template     Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_CRCPR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi2::crcpr::reg;
template <>  Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_CRCPR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi2::crcpr::reg;
template     Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_RXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi2::rxcrcr::reg;
template <>  Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_RXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi2::rxcrcr::reg;
template     Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_TXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi2::txcrcr::reg;
template <>  Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_TXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi2::txcrcr::reg;
template     Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_I2SCFGR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 2u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, RESERVED, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, RESERVED, 12u, 20u> spi2::i2scfgr::reg;
template <>  Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_I2SCFGR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 2u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, RESERVED, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, RESERVED, 12u, 20u> spi2::i2scfgr::reg;
template     Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_I2SPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> spi2::i2spr::reg;
template <>  Tuple<unsigned int, SPI2_BASE_ADDRESS, SPI2_I2SPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> spi2::i2spr::reg;
template <> class moduleName<SPI3_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, SPI3_BASE_ADDRESS, SPI3_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 3u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> cr1;
    typedef    mcuRegister<unsigned int, SPI3_BASE_ADDRESS, SPI3_CR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, RESERVED, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> cr2;
    typedef    mcuRegister<unsigned int, SPI3_BASE_ADDRESS, SPI3_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_WRITE, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, RESERVED, 8u, 24u> sr;
    typedef    mcuRegister<unsigned int, SPI3_BASE_ADDRESS, SPI3_DR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dr;
    typedef    mcuRegister<unsigned int, SPI3_BASE_ADDRESS, SPI3_CRCPR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> crcpr;
    typedef    mcuRegister<unsigned int, SPI3_BASE_ADDRESS, SPI3_RXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> rxcrcr;
    typedef    mcuRegister<unsigned int, SPI3_BASE_ADDRESS, SPI3_TXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> txcrcr;
    typedef    mcuRegister<unsigned int, SPI3_BASE_ADDRESS, SPI3_I2SCFGR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 2u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, RESERVED, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, RESERVED, 12u, 20u> i2scfgr;
    typedef    mcuRegister<unsigned int, SPI3_BASE_ADDRESS, SPI3_I2SPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> i2spr;
};
typedef moduleName<SPI3_BASE_ADDRESS>  spi3;
template     Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 3u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> spi3::cr1::reg;
template <>  Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 3u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> spi3::cr1::reg;
template     Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_CR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, RESERVED, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> spi3::cr2::reg;
template <>  Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_CR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, RESERVED, 3u, 1u, RESERVED, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, RESERVED, 8u, 24u> spi3::cr2::reg;
template     Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_WRITE, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, RESERVED, 8u, 24u> spi3::sr::reg;
template <>  Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_SR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_WRITE, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, RESERVED, 8u, 24u> spi3::sr::reg;
template     Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_DR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi3::dr::reg;
template <>  Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_DR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi3::dr::reg;
template     Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_CRCPR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi3::crcpr::reg;
template <>  Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_CRCPR_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> spi3::crcpr::reg;
template     Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_RXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi3::rxcrcr::reg;
template <>  Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_RXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi3::rxcrcr::reg;
template     Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_TXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi3::txcrcr::reg;
template <>  Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_TXCRCR_OFFSET, READ_ONLY, 0u, 16u, RESERVED, 16u, 16u> spi3::txcrcr::reg;
template     Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_I2SCFGR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 2u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, RESERVED, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, RESERVED, 12u, 20u> spi3::i2scfgr::reg;
template <>  Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_I2SCFGR_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 2u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 2u, RESERVED, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, RESERVED, 12u, 20u> spi3::i2scfgr::reg;
template     Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_I2SPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> spi3::i2spr::reg;
template <>  Tuple<unsigned int, SPI3_BASE_ADDRESS, SPI3_I2SPR_OFFSET, READ_WRITE, 0u, 8u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, RESERVED, 10u, 22u> spi3::i2spr::reg;
#endif

