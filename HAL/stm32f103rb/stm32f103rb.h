#ifndef __H_STM32F103RB_H__
#define __H_STM32F103RB_H__
#include "interrupt.h"
#include "rcc.h"
#include "i2c.h"
//#include "dma.h"
#include "gpio.h"
//#include "afio.h"
#include "uart.h"
#include "spi.h"
class stm32f103rb
{
public:
    typedef moduleIntCtrl<STM32F103RB>         iCtl;  
    typedef moduleName<RCC_BASE_ADDRESS>       rcc;
    typedef moduleName<I2C1_BASE_ADDRESS>      i2c1;
    //typedef moduleName<I2C2_BASE_ADDRESS>      i2c2;
    typedef moduleName<UART1_BASE_ADDRESS>     uart1;
    /*typedef moduleName<UART2_BASE_ADDRESS>     uart2;
    typedef moduleName<UART3_BASE_ADDRESS>     uart3;
    typedef moduleName<UART4_BASE_ADDRESS>     uart4;
    typedef moduleName<UART5_BASE_ADDRESS>     uart5;
    typedef moduleName<DMA1_BASE_ADDRESS>      dma1;
    typedef moduleName<DMA2_BASE_ADDRESS>      dma2;*/
    typedef moduleName<GPIO1_BASE_ADDRESS>     gpio1;
    typedef moduleName<GPIO2_BASE_ADDRESS>     gpio2;
    typedef moduleName<GPIO3_BASE_ADDRESS>     gpio3;
    //typedef moduleName<GPIO4_BASE_ADDRESS>     gpio4;
    //typedef moduleName<GPIO5_BASE_ADDRESS>     gpio5;
    //typedef moduleName<GPIO6_BASE_ADDRESS>     gpio6;
    //typedef moduleName<GPIO7_BASE_ADDRESS>     gpio7;
    //typedef moduleName<AFIO_BASE_ADDRESS>      afio;
    typedef moduleName<SPI1_BASE_ADDRESS>        spi1;
    typedef moduleName<SPI2_BASE_ADDRESS>        spi2;
    typedef moduleName<SPI3_BASE_ADDRESS>        spi3; 
};

#endif

