#ifndef __H_PAL_H__
#define __H_PAL_H__
//#include "dma_driver.h"
#include "uart_comms.h"
#include "i2c_comms.h"
#include "spi_comms.h"
#include "clock.h"
typedef unsigned int boardType;

#define BOARD_TYPE  (0u)
#define UART_COMMS_TYPE  (INTERRUPT)

template <boardType type> class pal;

template <> class pal<BOARD_TYPE>
{
public:
    typedef uart_comms<UART_COMMS_TYPE> uart;
    typedef i2c_comms<POLLING, 100000u, ADDR_7BIT>  i2c;
    typedef clock<CLK_SRC_PLL, PLL_SRC_HSI, 8000000u> clk1;
    typedef clock<CLK_SRC_PLL, PLL_SRC_HSI, 16000000u> clk2;
    typedef clock<CLK_SRC_PLL, PLL_SRC_HSI, 24000000u> clk3;
    typedef clock<CLK_SRC_PLL, PLL_SRC_HSI, 32000000u> clk4;
    typedef spi_comms<SPI1, SPI_MASTER, INTERRUPT> spi1;
    //typedef spi_comms<SPI3, SPI_SLAVE, POLLING> spi3;
};

typedef pal<BOARD_TYPE>  peripheral;
#endif
