#ifndef __H_TYPES_H__
#define __H_TYPES_H__
typedef void (*fptr)();
enum commsType
{
    POLLING,
    INTERRUPT,
    DMA,
};

typedef unsigned char  uint8_t;
typedef unsigned short uint16_t;
typedef  short int16_t;
typedef unsigned int   uint32_t;

#define NULL_FUNCTION_PTR (reinterpret_cast<fptr>(0))

#endif
