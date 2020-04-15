#ifndef __H_DMA_H__
#define __H_DMA_H__
#include "Tuple.h"

#define          DMA1_BASE_ADDRESS                0x40020000
#define          DMA2_BASE_ADDRESS                0x40020400
#define     DMA1_ISR_OFFSET    0x00000000
#define     DMA2_ISR_OFFSET    0x00000000
#define     DMA1_IFCR_OFFSET    0x00000004
#define     DMA2_IFCR_OFFSET    0x00000004
#define     DMA1_CCR1_OFFSET    0x00000008
#define     DMA1_CCR2_OFFSET    0x00000d28
#define     DMA1_CCR3_OFFSET    0x00001a48
#define     DMA1_CCR4_OFFSET    0x00002768
#define     DMA1_CCR5_OFFSET    0x00003488
#define     DMA1_CCR6_OFFSET    0x000041a8
#define     DMA1_CCR7_OFFSET    0x00004ec8
#define     DMA2_CCR1_OFFSET    0x00000008
#define     DMA2_CCR2_OFFSET    0x00000d28
#define     DMA2_CCR3_OFFSET    0x00001a48
#define     DMA2_CCR4_OFFSET    0x00002768
#define     DMA2_CCR5_OFFSET    0x00003488
#define     DMA2_CCR6_OFFSET    0x000041a8
#define     DMA2_CCR7_OFFSET    0x00004ec8
#define     DMA1_CNDTR1_OFFSET    0x0000000c
#define     DMA1_CNDTR2_OFFSET    0x00000d2c
#define     DMA1_CNDTR3_OFFSET    0x00001a4c
#define     DMA1_CNDTR4_OFFSET    0x0000276c
#define     DMA1_CNDTR5_OFFSET    0x0000348c
#define     DMA1_CNDTR6_OFFSET    0x000041ac
#define     DMA1_CNDTR7_OFFSET    0x00004ecc
#define     DMA2_CNDTR1_OFFSET    0x0000000c
#define     DMA2_CNDTR2_OFFSET    0x00000d2c
#define     DMA2_CNDTR3_OFFSET    0x00001a4c
#define     DMA2_CNDTR4_OFFSET    0x0000276c
#define     DMA2_CNDTR5_OFFSET    0x0000348c
#define     DMA2_CNDTR6_OFFSET    0x000041ac
#define     DMA2_CNDTR7_OFFSET    0x00004ecc
#define     DMA1_CPAR1_OFFSET    0x00000010
#define     DMA1_CPAR2_OFFSET    0x00000d30
#define     DMA1_CPAR3_OFFSET    0x00001a50
#define     DMA1_CPAR4_OFFSET    0x00002770
#define     DMA1_CPAR5_OFFSET    0x00003490
#define     DMA1_CPAR6_OFFSET    0x000041b0
#define     DMA1_CPAR7_OFFSET    0x00004ed0
#define     DMA2_CPAR1_OFFSET    0x00000010
#define     DMA2_CPAR2_OFFSET    0x00000d30
#define     DMA2_CPAR3_OFFSET    0x00001a50
#define     DMA2_CPAR4_OFFSET    0x00002770
#define     DMA2_CPAR5_OFFSET    0x00003490
#define     DMA2_CPAR6_OFFSET    0x000041b0
#define     DMA2_CPAR7_OFFSET    0x00004ed0
#define     DMA1_CMAR1_OFFSET    0x00000014
#define     DMA1_CMAR2_OFFSET    0x00000d34
#define     DMA1_CMAR3_OFFSET    0x00001a54
#define     DMA1_CMAR4_OFFSET    0x00002774
#define     DMA1_CMAR5_OFFSET    0x00003494
#define     DMA1_CMAR6_OFFSET    0x000041b4
#define     DMA1_CMAR7_OFFSET    0x00004ed4
#define     DMA2_CMAR1_OFFSET    0x00000014
#define     DMA2_CMAR2_OFFSET    0x00000d34
#define     DMA2_CMAR3_OFFSET    0x00001a54
#define     DMA2_CMAR4_OFFSET    0x00002774
#define     DMA2_CMAR5_OFFSET    0x00003494
#define     DMA2_CMAR6_OFFSET    0x000041b4
#define     DMA2_CMAR7_OFFSET    0x00004ed4
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_ISR_OFFSET>
{
public:
    enum val:unsigned int
    {
        GIF1,
        TCIF1,
        HTIF1,
        TEIF1,
        GIF2,
        TCIF2,
        HTIF2,
        TEIF2,
        GIF3,
        TCIF3,
        HTIF3,
        TEIF3,
        GIF4,
        TCIF4,
        HTIF4,
        TEIF4,
        GIF5,
        TCIF5,
        HTIF5,
        TEIF5,
        GIF6,
        TCIF6,
        HTIF6,
        TEIF6,
        GIF7,
        TCIF7,
        HTIF7,
        TEIF7,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_ISR_OFFSET>
{
public:
    enum val:unsigned int
    {
        GIF1,
        TCIF1,
        HTIF1,
        TEIF1,
        GIF2,
        TCIF2,
        HTIF2,
        TEIF2,
        GIF3,
        TCIF3,
        HTIF3,
        TEIF3,
        GIF4,
        TCIF4,
        HTIF4,
        TEIF4,
        GIF5,
        TCIF5,
        HTIF5,
        TEIF5,
        GIF6,
        TCIF6,
        HTIF6,
        TEIF6,
        GIF7,
        TCIF7,
        HTIF7,
        TEIF7,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_IFCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        CGIF1,
        CTCIF1,
        CHTIF1,
        CTEIF1,
        CGIF2,
        CTCIF2,
        CHTIF2,
        CTEIF2,
        CGIF3,
        CTCIF3,
        CHTIF3,
        CTEIF3,
        CGIF4,
        CTCIF4,
        CHTIF4,
        CTEIF4,
        CGIF5,
        CTCIF5,
        CHTIF5,
        CTEIF5,
        CGIF6,
        CTCIF6,
        CHTIF6,
        CTEIF6,
        CGIF7,
        CTCIF7,
        CHTIF7,
        CTEIF7,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_IFCR_OFFSET>
{
public:
    enum val:unsigned int
    {
        CGIF1,
        CTCIF1,
        CHTIF1,
        CTEIF1,
        CGIF2,
        CTCIF2,
        CHTIF2,
        CTEIF2,
        CGIF3,
        CTCIF3,
        CHTIF3,
        CTEIF3,
        CGIF4,
        CTCIF4,
        CHTIF4,
        CTEIF4,
        CGIF5,
        CTCIF5,
        CHTIF5,
        CTEIF5,
        CGIF6,
        CTCIF6,
        CHTIF6,
        CTEIF6,
        CGIF7,
        CTCIF7,
        CHTIF7,
        CTEIF7,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CCR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CCR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CCR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CCR4_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CCR5_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CCR6_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CCR7_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CCR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CCR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CCR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CCR4_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CCR5_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CCR6_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CCR7_OFFSET>
{
public:
    enum val:unsigned int
    {
        EN,
        TCIE,
        HTIE,
        TEIE,
        DIR,
        CIRC,
        PINC,
        MINC,
        PSIZE,
        MSIZE,
        PL,
        MEM2MEM,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CNDTR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CNDTR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CNDTR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CNDTR4_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CNDTR5_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CNDTR6_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CNDTR7_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CNDTR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CNDTR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CNDTR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CNDTR4_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CNDTR5_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CNDTR6_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CNDTR7_OFFSET>
{
public:
    enum val:unsigned int
    {
        NDT,
        RESERVED_0,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CPAR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CPAR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CPAR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CPAR4_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CPAR5_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CPAR6_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CPAR7_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CPAR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CPAR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CPAR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CPAR4_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CPAR5_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CPAR6_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CPAR7_OFFSET>
{
public:
    enum val:unsigned int
    {
        PA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CMAR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CMAR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CMAR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CMAR4_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CMAR5_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CMAR6_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA1_BASE_ADDRESS, DMA1_CMAR7_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CMAR1_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CMAR2_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CMAR3_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CMAR4_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CMAR5_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CMAR6_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class xEnum<DMA2_BASE_ADDRESS, DMA2_CMAR7_OFFSET>
{
public:
    enum val:unsigned int
    {
        MA,
    };
};
template <> class moduleName<DMA1_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_ISR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 1u, READ_ONLY, 9u, 1u, READ_ONLY, 10u, 1u, READ_ONLY, 11u, 1u, READ_ONLY, 12u, 1u, READ_ONLY, 13u, 1u, READ_ONLY, 14u, 1u, READ_ONLY, 15u, 1u, READ_ONLY, 16u, 1u, READ_ONLY, 17u, 1u, READ_ONLY, 18u, 1u, READ_ONLY, 19u, 1u, READ_ONLY, 20u, 1u, READ_ONLY, 21u, 1u, READ_ONLY, 22u, 1u, READ_ONLY, 23u, 1u, READ_ONLY, 24u, 1u, READ_ONLY, 25u, 1u, READ_ONLY, 26u, 1u, READ_ONLY, 27u, 1u, RESERVED, 28u, 4u> isr;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_IFCR_OFFSET, WRITE_ONLY, 0u, 1u, WRITE_ONLY, 1u, 1u, WRITE_ONLY, 2u, 1u, WRITE_ONLY, 3u, 1u, WRITE_ONLY, 4u, 1u, WRITE_ONLY, 5u, 1u, WRITE_ONLY, 6u, 1u, WRITE_ONLY, 7u, 1u, WRITE_ONLY, 8u, 1u, WRITE_ONLY, 9u, 1u, WRITE_ONLY, 10u, 1u, WRITE_ONLY, 11u, 1u, WRITE_ONLY, 12u, 1u, WRITE_ONLY, 13u, 1u, WRITE_ONLY, 14u, 1u, WRITE_ONLY, 15u, 1u, WRITE_ONLY, 16u, 1u, WRITE_ONLY, 17u, 1u, WRITE_ONLY, 18u, 1u, WRITE_ONLY, 19u, 1u, WRITE_ONLY, 20u, 1u, WRITE_ONLY, 21u, 1u, WRITE_ONLY, 22u, 1u, WRITE_ONLY, 23u, 1u, WRITE_ONLY, 24u, 1u, WRITE_ONLY, 25u, 1u, WRITE_ONLY, 26u, 1u, WRITE_ONLY, 27u, 1u, RESERVED, 28u, 4u> ifcr;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr1;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr2;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr3;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR4_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr4;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR5_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr5;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR6_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr6;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR7_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr7;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR1_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr1;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR2_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr2;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR3_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr3;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR4_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr4;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR5_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr5;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR6_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr6;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR7_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr7;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR1_OFFSET, READ_WRITE, 0u, 32u> cpar1;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR2_OFFSET, READ_WRITE, 0u, 32u> cpar2;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR3_OFFSET, READ_WRITE, 0u, 32u> cpar3;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR4_OFFSET, READ_WRITE, 0u, 32u> cpar4;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR5_OFFSET, READ_WRITE, 0u, 32u> cpar5;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR6_OFFSET, READ_WRITE, 0u, 32u> cpar6;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR7_OFFSET, READ_WRITE, 0u, 32u> cpar7;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR1_OFFSET, READ_WRITE, 0u, 32u> cmar1;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR2_OFFSET, READ_WRITE, 0u, 32u> cmar2;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR3_OFFSET, READ_WRITE, 0u, 32u> cmar3;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR4_OFFSET, READ_WRITE, 0u, 32u> cmar4;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR5_OFFSET, READ_WRITE, 0u, 32u> cmar5;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR6_OFFSET, READ_WRITE, 0u, 32u> cmar6;
    typedef    mcuRegister<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR7_OFFSET, READ_WRITE, 0u, 32u> cmar7;
};
typedef moduleName<DMA1_BASE_ADDRESS>  dma1;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_ISR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 1u, READ_ONLY, 9u, 1u, READ_ONLY, 10u, 1u, READ_ONLY, 11u, 1u, READ_ONLY, 12u, 1u, READ_ONLY, 13u, 1u, READ_ONLY, 14u, 1u, READ_ONLY, 15u, 1u, READ_ONLY, 16u, 1u, READ_ONLY, 17u, 1u, READ_ONLY, 18u, 1u, READ_ONLY, 19u, 1u, READ_ONLY, 20u, 1u, READ_ONLY, 21u, 1u, READ_ONLY, 22u, 1u, READ_ONLY, 23u, 1u, READ_ONLY, 24u, 1u, READ_ONLY, 25u, 1u, READ_ONLY, 26u, 1u, READ_ONLY, 27u, 1u, RESERVED, 28u, 4u> dma1::isr::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_ISR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 1u, READ_ONLY, 9u, 1u, READ_ONLY, 10u, 1u, READ_ONLY, 11u, 1u, READ_ONLY, 12u, 1u, READ_ONLY, 13u, 1u, READ_ONLY, 14u, 1u, READ_ONLY, 15u, 1u, READ_ONLY, 16u, 1u, READ_ONLY, 17u, 1u, READ_ONLY, 18u, 1u, READ_ONLY, 19u, 1u, READ_ONLY, 20u, 1u, READ_ONLY, 21u, 1u, READ_ONLY, 22u, 1u, READ_ONLY, 23u, 1u, READ_ONLY, 24u, 1u, READ_ONLY, 25u, 1u, READ_ONLY, 26u, 1u, READ_ONLY, 27u, 1u, RESERVED, 28u, 4u> dma1::isr::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_IFCR_OFFSET, WRITE_ONLY, 0u, 1u, WRITE_ONLY, 1u, 1u, WRITE_ONLY, 2u, 1u, WRITE_ONLY, 3u, 1u, WRITE_ONLY, 4u, 1u, WRITE_ONLY, 5u, 1u, WRITE_ONLY, 6u, 1u, WRITE_ONLY, 7u, 1u, WRITE_ONLY, 8u, 1u, WRITE_ONLY, 9u, 1u, WRITE_ONLY, 10u, 1u, WRITE_ONLY, 11u, 1u, WRITE_ONLY, 12u, 1u, WRITE_ONLY, 13u, 1u, WRITE_ONLY, 14u, 1u, WRITE_ONLY, 15u, 1u, WRITE_ONLY, 16u, 1u, WRITE_ONLY, 17u, 1u, WRITE_ONLY, 18u, 1u, WRITE_ONLY, 19u, 1u, WRITE_ONLY, 20u, 1u, WRITE_ONLY, 21u, 1u, WRITE_ONLY, 22u, 1u, WRITE_ONLY, 23u, 1u, WRITE_ONLY, 24u, 1u, WRITE_ONLY, 25u, 1u, WRITE_ONLY, 26u, 1u, WRITE_ONLY, 27u, 1u, RESERVED, 28u, 4u> dma1::ifcr::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_IFCR_OFFSET, WRITE_ONLY, 0u, 1u, WRITE_ONLY, 1u, 1u, WRITE_ONLY, 2u, 1u, WRITE_ONLY, 3u, 1u, WRITE_ONLY, 4u, 1u, WRITE_ONLY, 5u, 1u, WRITE_ONLY, 6u, 1u, WRITE_ONLY, 7u, 1u, WRITE_ONLY, 8u, 1u, WRITE_ONLY, 9u, 1u, WRITE_ONLY, 10u, 1u, WRITE_ONLY, 11u, 1u, WRITE_ONLY, 12u, 1u, WRITE_ONLY, 13u, 1u, WRITE_ONLY, 14u, 1u, WRITE_ONLY, 15u, 1u, WRITE_ONLY, 16u, 1u, WRITE_ONLY, 17u, 1u, WRITE_ONLY, 18u, 1u, WRITE_ONLY, 19u, 1u, WRITE_ONLY, 20u, 1u, WRITE_ONLY, 21u, 1u, WRITE_ONLY, 22u, 1u, WRITE_ONLY, 23u, 1u, WRITE_ONLY, 24u, 1u, WRITE_ONLY, 25u, 1u, WRITE_ONLY, 26u, 1u, WRITE_ONLY, 27u, 1u, RESERVED, 28u, 4u> dma1::ifcr::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr1::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr1::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr2::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr2::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr3::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr3::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR4_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr4::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR4_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr4::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR5_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr5::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR5_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr5::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR6_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr6::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR6_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr6::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR7_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr7::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CCR7_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma1::ccr7::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR1_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr1::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR1_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr1::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR2_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr2::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR2_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr2::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR3_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr3::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR3_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr3::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR4_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr4::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR4_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr4::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR5_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr5::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR5_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr5::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR6_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr6::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR6_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr6::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR7_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr7::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CNDTR7_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma1::cndtr7::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR1_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar1::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR1_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar1::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR2_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar2::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR2_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar2::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR3_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar3::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR3_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar3::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR4_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar4::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR4_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar4::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR5_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar5::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR5_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar5::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR6_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar6::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR6_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar6::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR7_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar7::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CPAR7_OFFSET, READ_WRITE, 0u, 32u> dma1::cpar7::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR1_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar1::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR1_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar1::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR2_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar2::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR2_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar2::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR3_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar3::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR3_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar3::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR4_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar4::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR4_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar4::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR5_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar5::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR5_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar5::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR6_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar6::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR6_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar6::reg;
template     Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR7_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar7::reg;
template <>  Tuple<unsigned int, DMA1_BASE_ADDRESS, DMA1_CMAR7_OFFSET, READ_WRITE, 0u, 32u> dma1::cmar7::reg;
template <> class moduleName<DMA2_BASE_ADDRESS>
{
public:
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_ISR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 1u, READ_ONLY, 9u, 1u, READ_ONLY, 10u, 1u, READ_ONLY, 11u, 1u, READ_ONLY, 12u, 1u, READ_ONLY, 13u, 1u, READ_ONLY, 14u, 1u, READ_ONLY, 15u, 1u, READ_ONLY, 16u, 1u, READ_ONLY, 17u, 1u, READ_ONLY, 18u, 1u, READ_ONLY, 19u, 1u, READ_ONLY, 20u, 1u, READ_ONLY, 21u, 1u, READ_ONLY, 22u, 1u, READ_ONLY, 23u, 1u, READ_ONLY, 24u, 1u, READ_ONLY, 25u, 1u, READ_ONLY, 26u, 1u, READ_ONLY, 27u, 1u, RESERVED, 28u, 4u> isr;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_IFCR_OFFSET, WRITE_ONLY, 0u, 1u, WRITE_ONLY, 1u, 1u, WRITE_ONLY, 2u, 1u, WRITE_ONLY, 3u, 1u, WRITE_ONLY, 4u, 1u, WRITE_ONLY, 5u, 1u, WRITE_ONLY, 6u, 1u, WRITE_ONLY, 7u, 1u, WRITE_ONLY, 8u, 1u, WRITE_ONLY, 9u, 1u, WRITE_ONLY, 10u, 1u, WRITE_ONLY, 11u, 1u, WRITE_ONLY, 12u, 1u, WRITE_ONLY, 13u, 1u, WRITE_ONLY, 14u, 1u, WRITE_ONLY, 15u, 1u, WRITE_ONLY, 16u, 1u, WRITE_ONLY, 17u, 1u, WRITE_ONLY, 18u, 1u, WRITE_ONLY, 19u, 1u, WRITE_ONLY, 20u, 1u, WRITE_ONLY, 21u, 1u, WRITE_ONLY, 22u, 1u, WRITE_ONLY, 23u, 1u, WRITE_ONLY, 24u, 1u, WRITE_ONLY, 25u, 1u, WRITE_ONLY, 26u, 1u, WRITE_ONLY, 27u, 1u, RESERVED, 28u, 4u> ifcr;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr1;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr2;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr3;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR4_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr4;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR5_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr5;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR6_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr6;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR7_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> ccr7;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR1_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr1;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR2_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr2;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR3_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr3;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR4_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr4;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR5_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr5;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR6_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr6;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR7_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> cndtr7;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR1_OFFSET, READ_WRITE, 0u, 32u> cpar1;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR2_OFFSET, READ_WRITE, 0u, 32u> cpar2;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR3_OFFSET, READ_WRITE, 0u, 32u> cpar3;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR4_OFFSET, READ_WRITE, 0u, 32u> cpar4;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR5_OFFSET, READ_WRITE, 0u, 32u> cpar5;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR6_OFFSET, READ_WRITE, 0u, 32u> cpar6;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR7_OFFSET, READ_WRITE, 0u, 32u> cpar7;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR1_OFFSET, READ_WRITE, 0u, 32u> cmar1;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR2_OFFSET, READ_WRITE, 0u, 32u> cmar2;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR3_OFFSET, READ_WRITE, 0u, 32u> cmar3;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR4_OFFSET, READ_WRITE, 0u, 32u> cmar4;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR5_OFFSET, READ_WRITE, 0u, 32u> cmar5;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR6_OFFSET, READ_WRITE, 0u, 32u> cmar6;
    typedef    mcuRegister<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR7_OFFSET, READ_WRITE, 0u, 32u> cmar7;
};
typedef moduleName<DMA2_BASE_ADDRESS>  dma2;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_ISR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 1u, READ_ONLY, 9u, 1u, READ_ONLY, 10u, 1u, READ_ONLY, 11u, 1u, READ_ONLY, 12u, 1u, READ_ONLY, 13u, 1u, READ_ONLY, 14u, 1u, READ_ONLY, 15u, 1u, READ_ONLY, 16u, 1u, READ_ONLY, 17u, 1u, READ_ONLY, 18u, 1u, READ_ONLY, 19u, 1u, READ_ONLY, 20u, 1u, READ_ONLY, 21u, 1u, READ_ONLY, 22u, 1u, READ_ONLY, 23u, 1u, READ_ONLY, 24u, 1u, READ_ONLY, 25u, 1u, READ_ONLY, 26u, 1u, READ_ONLY, 27u, 1u, RESERVED, 28u, 4u> dma2::isr::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_ISR_OFFSET, READ_ONLY, 0u, 1u, READ_ONLY, 1u, 1u, READ_ONLY, 2u, 1u, READ_ONLY, 3u, 1u, READ_ONLY, 4u, 1u, READ_ONLY, 5u, 1u, READ_ONLY, 6u, 1u, READ_ONLY, 7u, 1u, READ_ONLY, 8u, 1u, READ_ONLY, 9u, 1u, READ_ONLY, 10u, 1u, READ_ONLY, 11u, 1u, READ_ONLY, 12u, 1u, READ_ONLY, 13u, 1u, READ_ONLY, 14u, 1u, READ_ONLY, 15u, 1u, READ_ONLY, 16u, 1u, READ_ONLY, 17u, 1u, READ_ONLY, 18u, 1u, READ_ONLY, 19u, 1u, READ_ONLY, 20u, 1u, READ_ONLY, 21u, 1u, READ_ONLY, 22u, 1u, READ_ONLY, 23u, 1u, READ_ONLY, 24u, 1u, READ_ONLY, 25u, 1u, READ_ONLY, 26u, 1u, READ_ONLY, 27u, 1u, RESERVED, 28u, 4u> dma2::isr::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_IFCR_OFFSET, WRITE_ONLY, 0u, 1u, WRITE_ONLY, 1u, 1u, WRITE_ONLY, 2u, 1u, WRITE_ONLY, 3u, 1u, WRITE_ONLY, 4u, 1u, WRITE_ONLY, 5u, 1u, WRITE_ONLY, 6u, 1u, WRITE_ONLY, 7u, 1u, WRITE_ONLY, 8u, 1u, WRITE_ONLY, 9u, 1u, WRITE_ONLY, 10u, 1u, WRITE_ONLY, 11u, 1u, WRITE_ONLY, 12u, 1u, WRITE_ONLY, 13u, 1u, WRITE_ONLY, 14u, 1u, WRITE_ONLY, 15u, 1u, WRITE_ONLY, 16u, 1u, WRITE_ONLY, 17u, 1u, WRITE_ONLY, 18u, 1u, WRITE_ONLY, 19u, 1u, WRITE_ONLY, 20u, 1u, WRITE_ONLY, 21u, 1u, WRITE_ONLY, 22u, 1u, WRITE_ONLY, 23u, 1u, WRITE_ONLY, 24u, 1u, WRITE_ONLY, 25u, 1u, WRITE_ONLY, 26u, 1u, WRITE_ONLY, 27u, 1u, RESERVED, 28u, 4u> dma2::ifcr::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_IFCR_OFFSET, WRITE_ONLY, 0u, 1u, WRITE_ONLY, 1u, 1u, WRITE_ONLY, 2u, 1u, WRITE_ONLY, 3u, 1u, WRITE_ONLY, 4u, 1u, WRITE_ONLY, 5u, 1u, WRITE_ONLY, 6u, 1u, WRITE_ONLY, 7u, 1u, WRITE_ONLY, 8u, 1u, WRITE_ONLY, 9u, 1u, WRITE_ONLY, 10u, 1u, WRITE_ONLY, 11u, 1u, WRITE_ONLY, 12u, 1u, WRITE_ONLY, 13u, 1u, WRITE_ONLY, 14u, 1u, WRITE_ONLY, 15u, 1u, WRITE_ONLY, 16u, 1u, WRITE_ONLY, 17u, 1u, WRITE_ONLY, 18u, 1u, WRITE_ONLY, 19u, 1u, WRITE_ONLY, 20u, 1u, WRITE_ONLY, 21u, 1u, WRITE_ONLY, 22u, 1u, WRITE_ONLY, 23u, 1u, WRITE_ONLY, 24u, 1u, WRITE_ONLY, 25u, 1u, WRITE_ONLY, 26u, 1u, WRITE_ONLY, 27u, 1u, RESERVED, 28u, 4u> dma2::ifcr::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr1::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR1_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr1::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr2::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR2_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr2::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr3::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR3_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr3::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR4_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr4::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR4_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr4::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR5_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr5::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR5_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr5::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR6_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr6::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR6_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr6::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR7_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr7::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CCR7_OFFSET, READ_WRITE, 0u, 1u, READ_WRITE, 1u, 1u, READ_WRITE, 2u, 1u, READ_WRITE, 3u, 1u, READ_WRITE, 4u, 1u, READ_WRITE, 5u, 1u, READ_WRITE, 6u, 1u, READ_WRITE, 7u, 1u, READ_WRITE, 8u, 2u, READ_WRITE, 10u, 2u, READ_WRITE, 12u, 2u, READ_WRITE, 14u, 1u, RESERVED, 15u, 17u> dma2::ccr7::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR1_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr1::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR1_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr1::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR2_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr2::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR2_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr2::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR3_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr3::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR3_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr3::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR4_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr4::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR4_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr4::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR5_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr5::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR5_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr5::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR6_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr6::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR6_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr6::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR7_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr7::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CNDTR7_OFFSET, READ_WRITE, 0u, 16u, RESERVED, 16u, 16u> dma2::cndtr7::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR1_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar1::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR1_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar1::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR2_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar2::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR2_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar2::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR3_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar3::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR3_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar3::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR4_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar4::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR4_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar4::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR5_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar5::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR5_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar5::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR6_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar6::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR6_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar6::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR7_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar7::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CPAR7_OFFSET, READ_WRITE, 0u, 32u> dma2::cpar7::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR1_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar1::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR1_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar1::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR2_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar2::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR2_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar2::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR3_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar3::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR3_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar3::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR4_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar4::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR4_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar4::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR5_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar5::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR5_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar5::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR6_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar6::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR6_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar6::reg;
template     Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR7_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar7::reg;
template <>  Tuple<unsigned int, DMA2_BASE_ADDRESS, DMA2_CMAR7_OFFSET, READ_WRITE, 0u, 32u> dma2::cmar7::reg;
#endif

