#ifndef __H_I2C_H__
#define __H_I2C_H__
#include "Tuple.h"

#define          I2C1_BASE_ADDRESS                0x40005400
#define          I2C2_BASE_ADDRESS                0x40005800
#define     I2C1_CR1_OFFSET    0x00000000
#define     I2C2_CR1_OFFSET    0x00000000
#define     I2C1_CR2_OFFSET    0x00000004
#define     I2C2_CR2_OFFSET    0x00000004
#define     I2C1_OAR1_OFFSET    0x00000008
#define     I2C2_OAR1_OFFSET    0x00000008
#define     I2C1_OAR2_OFFSET    0x0000000C
#define     I2C2_OAR2_OFFSET    0x0000000C
#define     I2C1_DR_OFFSET    0x00000010
#define     I2C2_DR_OFFSET    0x00000010
#define     I2C1_SR1_OFFSET    0x00000014
#define     I2C2_SR1_OFFSET    0x00000014
#define     I2C1_SR2_OFFSET    0x00000018
#define     I2C2_SR2_OFFSET    0x00000018
#define     I2C1_CCR_OFFSET    0x0000001C
#define     I2C2_CCR_OFFSET    0x0000001C
#define     I2C1_TRISE_OFFSET    0x00000020
#define     I2C2_TRISE_OFFSET    0x00000020
template <> class xEnum<I2C1_BASE_ADDRESS, I2C1_CR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        PE,
        SMBUS,
        RESERVED_0,
        SMBTYPE,
        ENARP,
        ENPEC,
        ENGC,
        NOSTRETCH,
        START,
        STOP,
        ACK,
        POS,
        PEC,
        ALERT,
        RESERVED_1,
        SWRST,
        RESERVED_2,
    };
};
template <> class xEnum<I2C2_BASE_ADDRESS, I2C2_CR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        PE,
        SMBUS,
        RESERVED_0,
        SMBTYPE,
        ENARP,
        ENPEC,
        ENGC,
        NOSTRETCH,
        START,
        STOP,
        ACK,
        POS,
        PEC,
        ALERT,
        RESERVED_1,
        SWRST,
        RESERVED_2,
    };
};
template <> class xEnum<I2C1_BASE_ADDRESS, I2C1_CR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        FREQ,
        RESERVED_0,
        ITERREN,
        ITEVTEN,
        ITBUFEN,
        DMAEN,
        LAST,
        RESERVED_1,
    };
};
template <> class xEnum<I2C2_BASE_ADDRESS, I2C2_CR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        FREQ,
        RESERVED_0,
        ITERREN,
        ITEVTEN,
        ITBUFEN,
        DMAEN,
        LAST,
        RESERVED_1,
    };
};
template <> class xEnum<I2C1_BASE_ADDRESS, I2C1_OAR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        ADD0,
        ADD71,
        ADD,
        RESERVED_0,
        ADDMODE,
        RESERVED_1,
    };
};
template <> class xEnum<I2C2_BASE_ADDRESS, I2C2_OAR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        ADD0,
        ADD71,
        ADD,
        RESERVED_0,
        ADDMODE,
        RESERVED_1,
    };
};
template <> class xEnum<I2C1_BASE_ADDRESS, I2C1_OAR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        ENDUAL,
        ADD2,
        RESERVED_0,
    };
};
template <> class xEnum<I2C2_BASE_ADDRESS, I2C2_OAR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        ENDUAL,
        ADD2,
        RESERVED_0,
    };
};
template <> class xEnum<I2C1_BASE_ADDRESS, I2C1_DR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DR,
        RESERVED_0,
    };
};
template <> class xEnum<I2C2_BASE_ADDRESS, I2C2_DR_OFFSET>
{
public:
    enum val:unsigned int
    {
        DR,
        RESERVED_0,
    };
};
template <> class xEnum<I2C1_BASE_ADDRESS, I2C1_SR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        SB,
        ADDR,
        BTF,
        ADD10,
        STOPF,
        RESERVED_0,
        RXNE,
        TXE,
        BERR,
        ARLO,
        AF,
        OVR,
        PECERR,
        RESERVED_1,
        TIMEOUT,
        SMBALERT,
        RESERVED_2,
    };
};
template <> class xEnum<I2C2_BASE_ADDRESS, I2C2_SR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        SB,
        ADDR,
        BTF,
        ADD10,
        STOPF,
        RESERVED_0,
        RXNE,
        TXE,
        BERR,
        ARLO,
        AF,
        OVR,
        PECERR,
        RESERVED_1,
        TIMEOUT,
        SMBALERT,
        RESERVED_2,
    };
};
template <> class xEnum<I2C1_BASE_ADDRESS, I2C1_SR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        MSL,
        BUSY,
        TRA,
        RESERVED_0,
        GENCALL,
        SMBDEFAULT,
        SMBHOST,
        DUALF,
        PEC,
        RESERVED_1,
    };
};
template <> class xEnum<I2C2_BASE_ADDRESS, I2C2_SR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        MSL,
        BUSY,
        TRA,
        RESERVED_0,
        GENCALL,
        SMBDEFAULT,
        SMBHOST,
        DUALF,
        PEC,
        RESERVED_1,
    };
};
template <> class xEnum<I2C1_BASE_ADDRESS, I2C1_CCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        CCR,
        RESERVED_0,
        DUTY,
        F_S,
        RESERVED_1,
    };
};
template <> class xEnum<I2C2_BASE_ADDRESS, I2C2_CCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        CCR,
        RESERVED_0,
        DUTY,
        F_S,
        RESERVED_1,
    };
};
template <> class xEnum<I2C1_BASE_ADDRESS, I2C1_TRISE_OFFSET>
{
public:
    enum val:unsigned int
    {
        TRISE,
        RESERVED_0,
    };
};
template <> class xEnum<I2C2_BASE_ADDRESS, I2C2_TRISE_OFFSET>
{
public:
    enum val:unsigned int
    {
        TRISE,
        RESERVED_0,
    };
};
template <> class moduleName<I2C1_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, I2C1_BASE_ADDRESS, I2C1_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> cr1;
    typedef    mcuRegister<unsigned int, I2C1_BASE_ADDRESS, I2C1_CR2_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 2u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 19u> cr2;
    typedef    mcuRegister<unsigned int, I2C1_BASE_ADDRESS, I2C1_OAR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 5u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> oar1;
    typedef    mcuRegister<unsigned int, I2C1_BASE_ADDRESS, I2C1_OAR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, RESERVED, 8u, 24u> oar2;
    typedef    mcuRegister<unsigned int, I2C1_BASE_ADDRESS, I2C1_DR_OFFSET, READ_WRITE, 0u, 8u, RESERVED, 8u, 24u> dr;
    typedef    mcuRegister<unsigned int, I2C1_BASE_ADDRESS, I2C1_SR1_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, RESERVED, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> sr1;
    typedef    mcuRegister<unsigned int, I2C1_BASE_ADDRESS, I2C1_SR2_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 8u, RESERVED, 16u, 16u> sr2;
    typedef    mcuRegister<unsigned int, I2C1_BASE_ADDRESS, I2C1_CCR_OFFSET, READ_WRITE, 0u, 12u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> ccr;
    typedef    mcuRegister<unsigned int, I2C1_BASE_ADDRESS, I2C1_TRISE_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 26u> trise;
};
typedef moduleName<I2C1_BASE_ADDRESS>  i2c1;
template     Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c1::cr1::reg;
template <>  Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c1::cr1::reg;
template     Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_CR2_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 2u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 19u> i2c1::cr2::reg;
template <>  Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_CR2_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 2u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 19u> i2c1::cr2::reg;
template     Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_OAR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 5u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c1::oar1::reg;
template <>  Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_OAR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 5u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c1::oar1::reg;
template     Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_OAR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, RESERVED, 8u, 24u> i2c1::oar2::reg;
template <>  Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_OAR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, RESERVED, 8u, 24u> i2c1::oar2::reg;
template     Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_DR_OFFSET, READ_WRITE, 0u, 8u, RESERVED, 8u, 24u> i2c1::dr::reg;
template <>  Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_DR_OFFSET, READ_WRITE, 0u, 8u, RESERVED, 8u, 24u> i2c1::dr::reg;
template     Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_SR1_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, RESERVED, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c1::sr1::reg;
template <>  Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_SR1_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, RESERVED, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c1::sr1::reg;
template     Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_SR2_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 8u, RESERVED, 16u, 16u> i2c1::sr2::reg;
template <>  Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_SR2_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 8u, RESERVED, 16u, 16u> i2c1::sr2::reg;
template     Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_CCR_OFFSET, READ_WRITE, 0u, 12u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c1::ccr::reg;
template <>  Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_CCR_OFFSET, READ_WRITE, 0u, 12u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c1::ccr::reg;
template     Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_TRISE_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 26u> i2c1::trise::reg;
template <>  Tuple<unsigned int, I2C1_BASE_ADDRESS, I2C1_TRISE_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 26u> i2c1::trise::reg;
template <> class moduleName<I2C2_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, I2C2_BASE_ADDRESS, I2C2_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> cr1;
    typedef    mcuRegister<unsigned int, I2C2_BASE_ADDRESS, I2C2_CR2_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 2u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 19u> cr2;
    typedef    mcuRegister<unsigned int, I2C2_BASE_ADDRESS, I2C2_OAR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, READ_WRITE, 8u, 2u, RESERVED, 10u, 5u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> oar1;
    typedef    mcuRegister<unsigned int, I2C2_BASE_ADDRESS, I2C2_OAR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, RESERVED, 8u, 24u> oar2;
    typedef    mcuRegister<unsigned int, I2C2_BASE_ADDRESS, I2C2_DR_OFFSET, READ_WRITE, 0u, 8u, RESERVED, 8u, 24u> dr;
    typedef    mcuRegister<unsigned int, I2C2_BASE_ADDRESS, I2C2_SR1_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, RESERVED, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> sr1;
    typedef    mcuRegister<unsigned int, I2C2_BASE_ADDRESS, I2C2_SR2_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 8u, RESERVED, 16u, 16u> sr2;
    typedef    mcuRegister<unsigned int, I2C2_BASE_ADDRESS, I2C2_CCR_OFFSET, READ_WRITE, 0u, 12u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> ccr;
    typedef    mcuRegister<unsigned int, I2C2_BASE_ADDRESS, I2C2_TRISE_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 26u> trise;
};
typedef moduleName<I2C2_BASE_ADDRESS>  i2c2;
template     Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c2::cr1::reg;
template <>  Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_CR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, READ_WRITE, 13u, 1u, RESERVED, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c2::cr1::reg;
template     Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_CR2_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 2u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 19u> i2c2::cr2::reg;
template <>  Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_CR2_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 2u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 19u> i2c2::cr2::reg;
template     Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_OAR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, READ_WRITE, 8u, 2u, RESERVED, 10u, 5u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c2::oar1::reg;
template <>  Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_OAR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, READ_WRITE, 8u, 2u, RESERVED, 10u, 5u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c2::oar1::reg;
template     Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_OAR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, RESERVED, 8u, 24u> i2c2::oar2::reg;
template <>  Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_OAR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 7u, RESERVED, 8u, 24u> i2c2::oar2::reg;
template     Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_DR_OFFSET, READ_WRITE, 0u, 8u, RESERVED, 8u, 24u> i2c2::dr::reg;
template <>  Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_DR_OFFSET, READ_WRITE, 0u, 8u, RESERVED, 8u, 24u> i2c2::dr::reg;
template     Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_SR1_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, RESERVED, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c2::sr1::reg;
template <>  Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_SR1_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, RESERVED, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_WRITE, 8u, 1u, READ_WRITE, 9u, 1u, READ_WRITE, 10u, 1u, READ_WRITE, 11u, 1u, READ_WRITE, 12u, 1u, RESERVED, 13u, 1u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c2::sr1::reg;
template     Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_SR2_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 8u, RESERVED, 16u, 16u> i2c2::sr2::reg;
template <>  Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_SR2_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 8u, RESERVED, 16u, 16u> i2c2::sr2::reg;
template     Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_CCR_OFFSET, READ_WRITE, 0u, 12u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c2::ccr::reg;
template <>  Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_CCR_OFFSET, READ_WRITE, 0u, 12u, RESERVED, 12u, 2u, READ_WRITE, 14u, 1u, READ_WRITE, 15u, 1u, RESERVED, 16u, 16u> i2c2::ccr::reg;
template     Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_TRISE_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 26u> i2c2::trise::reg;
template <>  Tuple<unsigned int, I2C2_BASE_ADDRESS, I2C2_TRISE_OFFSET, READ_WRITE, 0u, 6u, RESERVED, 6u, 26u> i2c2::trise::reg;
#endif

