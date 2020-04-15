#ifndef __H_COMMS_UART_H__
#define __H_COMMS_UART_H__
#include "types.h"
#include "iopin.h"
#include "clock.h"
#include "stm32f103rb.h"
#include "circular_buffer.h"
#define UART_DEFINE (4u)


extern void delay( int );
template <commsType type> class uart_comms;

template <> class uart_comms<POLLING>
{
private:

public:
    static void open( unsigned int baudrate )
    {
        unsigned int val1, val2, val3;
        unsigned int baud =  __clk__::read(PCLK1_CLK);

        val3 = baudrate << 4u;
        val1 = baud/val3;
        val2 = ( baud - ( val1*val3 ) )/baudrate;

        //Enable USART1 and port A in rcc modules's apb2enr register
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::IOPAEN>();
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::USART1EN>();
        stm32f103rb::rcc::apb2enr ::set<stm32f103rb::rcc::apb2enr::IOPAEN>(1u);
        stm32f103rb::rcc::apb2enr ::set<stm32f103rb::rcc::apb2enr::USART1EN>(1u);

        //Enable Pin9 as output and Pin10 as input of port A
        iopin<PORTA, PIN9 >::open( 2u, 3u );
        iopin<PORTA, PIN10>::open( 1u, 0u );

        //Set baud rate
        stm32f103rb::uart1::brr::set<stm32f103rb::uart1::brr::DIV_MANTISSA>(val1);
        stm32f103rb::uart1::brr::set<stm32f103rb::uart1::brr::DIV_FRACTION>(val2);

        //Enable USART1 module with transmit enable and receive enable
        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::UE>(1u);
    }
    static void write( unsigned char * data, unsigned int data_size )
    {
        volatile unsigned int x = 0u;
        unsigned int i;
        /* Enable transmit for UART1 */
        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::TE>(1u);

        for( i = 0u; i < data_size; i++ )
        {
            stm32f103rb::uart1::dr::set<stm32f103rb::uart1::dr::DR>( data[i] );

            x = 0u;

            /* Wait until data is transferred on the bus */
            while( x == 0u )
            {
                x = stm32f103rb::uart1::sr::get<stm32f103rb::uart1::sr::TXE>();
            }
        }
        x = 0u;

        /* Wait until UART has finished processing */
        while( x == 0u )
        {
            x = stm32f103rb::uart1::sr::get<stm32f103rb::uart1::sr::TC>();
        }

        /* Disable transmit for UART1 */
        stm32f103rb::uart1::cr1::clr<stm32f103rb::uart1::cr1::TE>();

    }
    static void read( unsigned char * data, unsigned int data_size )
    {
        volatile unsigned int x = 0u;
        unsigned int i = 0u;

        /* Enable receive for UART1 */
        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::RE>(1u);

        for( i = 0u; i < data_size; i++ )
        {
            /* Check if data is available to read */
            while( x == 0 )
            {
                x = stm32f103rb::uart1::sr::get<stm32f103rb::uart1::sr::RXNE>();
            }

            /* read data from DR register */
            data[i] = static_cast<unsigned char>(stm32f103rb::uart1::dr::get<stm32f103rb::uart1::dr::DR>());
            x = 0u;
        }

        /* Disable receive for UART1 */
        stm32f103rb::uart1::cr1::clr<stm32f103rb::uart1::cr1::RE>();
    }

    static void close( void )
    {
        //Disable USART1 module with transmit disable and receive disable
        stm32f103rb::uart1::cr1::clr<stm32f103rb::uart1::cr1::RE>();
        stm32f103rb::uart1::cr1::clr<stm32f103rb::uart1::cr1::TE>();
        stm32f103rb::uart1::cr1::clr<stm32f103rb::uart1::cr1::UE>();

        //Disable USART1 and port A in rcc modules's apb2enr register
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::IOPAEN>();
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::USART1EN>();

        //Disable Pin9 as output and Pin10 as input of port A
        iopin<PORTA, PIN9 >::open( 0u, 0u );
        iopin<PORTA, PIN10>::open( 0u, 0u );
    }
};

template <> class uart_comms<DMA>
{
private:

public:
    static void open( unsigned int baudrate )
    {
        unsigned int val1, val2, val3;
        unsigned int baud = 16000000u;// __clk__::read(PCLK1_CLK);

        val3 = baudrate << 4u;
        val1 = baud/val3;
        val2 = ( baud - ( val1*val3 ) )/baudrate;

        //Enable USART1 and port A in rcc modules's apb2enr register
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::IOPAEN>();
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::USART1EN>();
        stm32f103rb::rcc::apb2enr ::set<stm32f103rb::rcc::apb2enr::IOPAEN>(1u);
        stm32f103rb::rcc::apb2enr ::set<stm32f103rb::rcc::apb2enr::USART1EN>(1u);

        //Enable Pin9 as output and Pin10 as input of port A
        iopin<PORTA, PIN9 >::open( 2u, 3u );
        iopin<PORTA, PIN10>::open( 1u, 0u );

        //Set baud rate
        stm32f103rb::uart1::brr::set<stm32f103rb::uart1::brr::DIV_MANTISSA>(val1);
        stm32f103rb::uart1::brr::set<stm32f103rb::uart1::brr::DIV_FRACTION>(val2);

        //Enable USART1 module with transmit enable and receive enable
        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::UE>(1u);
    }
    static void write( unsigned char * data, unsigned int data_size )
    {
         (void)data;
         (void)data_size;
    }
    static void read( unsigned char * data, unsigned int data_size )
    {
         (void)data;
         (void)data_size;
    }
    static void close()
    {
        //Disable USART1 module with transmit disable and receive disable
        stm32f103rb::uart1::cr1::clr<stm32f103rb::uart1::cr1::RE>();
        stm32f103rb::uart1::cr1::clr<stm32f103rb::uart1::cr1::TE>();
        stm32f103rb::uart1::cr1::clr<stm32f103rb::uart1::cr1::UE>();

        //Disable USART1 and port A in rcc modules's apb2enr register
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::IOPAEN>();
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::USART1EN>();

        //Disable Pin9 as output and Pin10 as input of port A
        iopin<PORTA, PIN9 >::open( 0u, 0u );
        iopin<PORTA, PIN10>::open( 0u, 0u );
    }
};
enum uartEventType
{
   UART_EVENT_RX_BUFFER_FULL,
   UART_EVENT_RX_CHAR_RECEIVED,
   UART_EVENT_TX_BUFFER_EMPTY,
   UART_EVENT_BUS_IDLE,
   UART_EVENT_BUS_ORE,
   UART_EVENT_BUS_PE,
   UART_EVENT_MAX
};
//#if 0

template <> class uart_comms<INTERRUPT>
{
private:
   // rx_buffer[], tx_buffer[]

   static circularBuffer rxBuffer;
   static circularBuffer txBuffer;
   static unsigned char rx_buffer[0xFFu];
   static unsigned char tx_buffer[0xFFu];
   static fptr events[UART_EVENT_MAX];
   static void eventsNotification( void )
   {
       unsigned char c;
       volatile unsigned int x = 0;

       x = stm32f103rb::uart1::sr::get<stm32f103rb::uart1::sr::RXNE>();
       stm32f103rb::uart1::sr::clr<stm32f103rb::uart1::sr::RXNE>();
       if( x == 1u )
       {
           c = static_cast<unsigned char>( stm32f103rb::uart1::dr::get<stm32f103rb::uart1::dr::DR>() );
           rxBuffer.put(c);
           if( events[UART_EVENT_RX_CHAR_RECEIVED] != NULL_FUNCTION_PTR )
           {
               events[UART_EVENT_RX_CHAR_RECEIVED]();
           }
           if( ( events[UART_EVENT_RX_BUFFER_FULL] != NULL_FUNCTION_PTR ) && ( rxBuffer.isFull() == 1u ) )
           {
               events[UART_EVENT_RX_BUFFER_FULL]();
           }

       }
       x = stm32f103rb::uart1::sr::get<stm32f103rb::uart1::sr::IDLE>();
       if( ( x == 1u )  )
       {
           x = stm32f103rb::uart1::sr::get<stm32f103rb::uart1::sr::IDLE>();
           x = stm32f103rb::uart1::dr::get<stm32f103rb::uart1::dr::DR>();
           if( events[UART_EVENT_BUS_IDLE] != NULL_FUNCTION_PTR )
               events[UART_EVENT_BUS_IDLE]();
       }
       x = stm32f103rb::uart1::sr::get<stm32f103rb::uart1::sr::ORE>();
       if( ( x == 1u )  && ( events[UART_EVENT_BUS_ORE] != NULL_FUNCTION_PTR ) )
       {
           events[UART_EVENT_BUS_ORE]();
       }
       x = stm32f103rb::uart1::sr::get<stm32f103rb::uart1::sr::PE>();
       if( ( x == 1u )  && ( events[UART_EVENT_BUS_PE] != NULL_FUNCTION_PTR ) )
       {
           events[UART_EVENT_BUS_PE]();
       }
       x = stm32f103rb::uart1::sr::get<stm32f103rb::uart1::sr::TXE>();
       if( x == 1u )
       {
           if( txBuffer.isEmpty() == 0u )
           {
               c = txBuffer.get();
               stm32f103rb::uart1::dr::set<stm32f103rb::uart1::dr::DR>(c);
           }
           else
           {
               stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::TXIE >(0u);
               if( events[UART_EVENT_TX_BUFFER_EMPTY] != NULL_FUNCTION_PTR )
               {
                   events[UART_EVENT_TX_BUFFER_EMPTY]();
               }
           }
       }
   }
public:
    static void open( unsigned int baudrate )
    {
        unsigned int val1, val2, val3;
        unsigned int i;
        volatile unsigned int baud = __clk__::read(PCLK1_CLK);

        val3 = baudrate << 4u;
        val1 = baud/val3;
        val2 = ( baud - ( val1*val3 ) )/baudrate;

        //Enable USART1 and port A in rcc modules's apb2enr register
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::IOPAEN>();
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::USART1EN>();
        stm32f103rb::rcc::apb2enr ::set<stm32f103rb::rcc::apb2enr::IOPAEN>(1u);
        stm32f103rb::rcc::apb2enr ::set<stm32f103rb::rcc::apb2enr::USART1EN>(1u);

        //Enable Pin9 as output and Pin10 as input of port A
        iopin<PORTA, PIN9 >::open( 2u, 3u );
        iopin<PORTA, PIN10>::open( 1u, 0u );

        //Set baud rate
        stm32f103rb::uart1::brr::set<stm32f103rb::uart1::brr::DIV_MANTISSA>(val1);
        stm32f103rb::uart1::brr::set<stm32f103rb::uart1::brr::DIV_FRACTION>(val2);

        //Enable USART1 module with transmit enable and receive enable
        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::UE>(1u);
        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::TE>(1u);
        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::RE>(1u);

        stm32f103rb::uart1::dr::set<stm32f103rb::uart1::dr::DR>(0);

//        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::TXIE >(1u);
        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::RXNEIE>(1u);
        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::PEIE  >(1u);
        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::IDLEIE  >(1u);

        stm32f103rb::iCtl::intCtrl::set<stm32f103rb::iCtl::intCtrl::INT_VECTOR_USART1>(uart_comms<INTERRUPT>::eventsNotification);
        for( i = 0; i < static_cast<unsigned int>(UART_EVENT_MAX); i++ )
        {
            uart_comms<INTERRUPT>::events[i] = NULL_FUNCTION_PTR;
        }

        rxBuffer.init(rx_buffer,0xFFu);
        txBuffer.init(tx_buffer,0xFFu);
    }

    static void read( unsigned char * pBuffer, unsigned int data_size )
    {
        unsigned int i;
        unsigned int temp;

        temp = rxBuffer.currentNumberOfElements();

        if( temp < data_size )
            data_size = temp;
        for( i = 0; i < data_size; i++ )
        {
            pBuffer[i] = rxBuffer.get();
        }
        //stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::RXNEIE>(1u);
    }

    static void write( unsigned char * pBuffer, unsigned int data_size )
    {
        unsigned int i;
        unsigned int temp;
        temp =  txBuffer.currentNumberOfElements();
        temp = 0xFFu - temp;
        if( data_size > temp )
        {

        }
        else
        {
            for( i = 1; i < data_size; i++ )
            {
                txBuffer.put(pBuffer[i]);
            }
        }

        if( txBuffer.currentNumberOfElements() != 0u )
            stm32f103rb::uart1::dr::set<stm32f103rb::uart1::dr::DR>(pBuffer[0]);
        stm32f103rb::uart1::cr1::set<stm32f103rb::uart1::cr1::TXIE >(1u);

    }

    static void close( void )
    {
        //Disable USART1 module with transmit disable and receive disable
        stm32f103rb::uart1::cr1::clr<stm32f103rb::uart1::cr1::RE>();
        stm32f103rb::uart1::cr1::clr<stm32f103rb::uart1::cr1::TE>();
        stm32f103rb::uart1::cr1::clr<stm32f103rb::uart1::cr1::UE>();

        //Disable USART1 and port A in rcc modules's apb2enr register
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::IOPAEN>();
        stm32f103rb::rcc::apb2enr ::clr<stm32f103rb::rcc::apb2enr::USART1EN>();

        //Disable Pin9 as output and Pin10 as input of port A
        iopin<PORTA, PIN9 >::open( 0u, 0u );
        iopin<PORTA, PIN10>::open( 0u, 0u );
    }

    static void ioctl( uartEventType eventIndex, fptr functionX )
    {
        if( functionX != NULL_FUNCTION_PTR )
        {
            events[eventIndex] = functionX;
        }
        else
        {
            /* Do Nothing */
        }
    }
};
/*#ifndef __UART_INT__
#define __UART_INT__
circularBuffer    uart_comms<INTERRUPT>::rxBuffer;
circularBuffer    uart_comms<INTERRUPT>::txBuffer;
unsigned char     uart_comms<INTERRUPT>::rx_buffer[255u];
unsigned char     uart_comms<INTERRUPT>::tx_buffer[255u];
fptr              uart_comms<INTERRUPT>::events[UART_EVENT_MAX];
#endif*/
#endif // __H_COMMS_UART_H__
