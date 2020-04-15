#include "LiquidCrystal_I2C.h"
#include "esp8266.h"
#include "peripheral.h"
#include "mem.h"
/**********************************************************************************************************************
Startup code
**********************************************************************************************************************/
#define COMMS_TYPE      (INTERRUPT)
void startupCall( void );

inline void delay1US()
{
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
}

void delayMicroseconds( int delay )
{
    volatile int counter = 0u;
    while( counter < delay )
    {
        delay1US();
        counter++;
    }
}
void delay( int delay )
{
    delayMicroseconds( delay * 1000 );
}
#define UART_TEST
#ifdef LCD_TEST
__attribute__((section(".startup"))) void startupCall( void )
{
    volatile unsigned int y = 0u;

    LiquidCrystal_I2C dis( 0x27u, 16, 2, 0 );

    dis.begin();
    dis.clear();
    dis.setCursor(0,0);
    dis.printstr("Interview Sample",16u);
    dis.setCursor(0,1);
    dis.printstr("...---...+++---$$$---", 21u );
    for( y = 0; y < 1000000; y++)
    {
        delay(200);
        dis.scrollDisplayLeft();

    }
    while(1);
}
#endif

#ifdef UART_TEST
__attribute__((section(".startup"))) void startupCall( void )
{
    volatile unsigned int y = 0u;
    volatile unsigned int * intReg;
    unsigned char testMsg1[] = "Uart Test .... 1\n\r";
    unsigned char testMsg2[] = "Uart another test\n\r";
    unsigned char testMsg3[] = "Uart test message\n\r";
    asm("cpsid i");

    intReg = reinterpret_cast<unsigned int *>(0xE000E104u);

    *intReg = 0xFFFFFFFFu;
    intReg = reinterpret_cast<unsigned int *>(0x40022030u);
    *intReg |= 0x00000002u;
    peripheral::clk4::open();
    asm("cpsie i");

    peripheral::uart::open( 38400u );

    while( y < 10000u )
    {
        peripheral::uart::write( &testMsg1[0], 18u );
        delay( 20u );
        peripheral::uart::write( &testMsg2[0], 19u );
        delay( 20u );
        peripheral::uart::write( &testMsg3[0], 19u );
        delay( 20u );
        y++;
    }

    while(1);
}
#endif
