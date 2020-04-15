#ifndef __H_SPI_COMMS_H__
#define __H_SPI_COMMS_H__
#include "types.h"
#include "iopin.h"
#include "clock.h"
#include "stm32f103rb.h"
#include "circular_buffer.h"

enum devIdSeqType
{
    SPI1,
    SPI2,
    SPI3
};

enum devType
{
    SPI_MASTER,
    SPI_SLAVE
};
template <devIdSeqType seq, devType type, commsType> class spi_comms;

template <devIdSeqType seq, devType type> class spi_comms<seq, type, POLLING>
{
public:
    static void open( void )
    {
        //Enable SPI device
        if( seq == SPI1 )
        {
            stm32f103rb::rcc::apb2enr::set<stm32f103rb::rcc::apb2enr::IOPAEN>(1u);
            stm32f103rb::rcc::apb2enr::set<stm32f103rb::rcc::apb2enr:: SPI1EN>(1u);
            iopin<PORTA, PIN4>::open( 0u, 3u );
            iopin<PORTA, PIN5>::open( 2u, 3u );
            iopin<PORTA, PIN6>::open( 2u, 3u );
            iopin<PORTA, PIN7>::open( 2u, 3u );
        }
        else if( seq == SPI2 )
        {
            stm32f103rb::rcc::apb2enr::set<stm32f103rb::rcc::apb2enr::IOPAEN>(1u);
            stm32f103rb::rcc::apb1enr::set<stm32f103rb::rcc::apb1enr:: SPI2EN>(1u);
            iopin<PORTA, PIN4>::open( 0u, 3u);
            iopin<PORTA, PIN5>::open( 2u, 3u );
            iopin<PORTA, PIN6>::open( 2u, 3u );
            iopin<PORTA, PIN7>::open( 2u, 3u );
        }
        else if( seq == SPI3 )
        {
            stm32f103rb::rcc::apb2enr::set<stm32f103rb::rcc::apb2enr::IOPAEN>(1u);
            stm32f103rb::rcc::apb2enr::set<stm32f103rb::rcc::apb2enr::IOPBEN>(1u);
            stm32f103rb::rcc::apb1enr::set<stm32f103rb::rcc::apb1enr:: SPI3EN>(1u);
            iopin<PORTA, PIN15>::open( 0u, 3u);
            iopin<PORTB, PIN3>::open( 2u, 3u );
            iopin<PORTB, PIN4>::open( 2u, 3u );
            iopin<PORTB, PIN5>::open( 2u, 3u );
        }
        else
        {

        }
        if( type == SPI_SLAVE )
        {
            //Enable SPI Pins

            // Slave mode
            // Set DFF bit to set data to 8 bit ot 16 bit
            // Set CPOL and CPHA bit to 1 or 0 as per the data arrival
            // Set LSBFIRST bit to 0 or 1 as per the device
            // Set SSM and clear SSI bit
            // Clear MTSR bit and Set SPE bit
            if( seq == SPI1 )
            {
                stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1:: SSM>(1u);
                stm32f103rb::spi1::cr1::clr<stm32f103rb::spi1::cr1:: SSI>();
                stm32f103rb::spi1::cr1::clr<stm32f103rb::spi1::cr1::MSTR>();
                stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1:: SPE>(1u);
            }
            else if( seq == SPI2 )
            {
                stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1:: SSM>(1u);
                stm32f103rb::spi2::cr1::clr<stm32f103rb::spi2::cr1:: SSI>();
                stm32f103rb::spi2::cr1::clr<stm32f103rb::spi2::cr1::MSTR>();
                stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1:: SPE>(1u);
            }
            else if( seq == SPI3 )
            {
                stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1:: SSM>(1u);
                stm32f103rb::spi3::cr1::clr<stm32f103rb::spi3::cr1:: SSI>();
                stm32f103rb::spi3::cr1::clr<stm32f103rb::spi3::cr1::MSTR>();
                stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1:: SPE>(1u);
            }
            else
            {
            }

        }
        else if( type == SPI_MASTER )
        {
            // master mode
            // Select BR bits to define baud rate
            // Set CPOL and CPHA bits accordingly
            // Set DFF bit to set data to 8 bit ot 16 bit
            // Set LSBFIRST bit to 0 or 1 as per the device
            // Set SSM and SSI bit
            // Set MTSR and SPE bits
            if( seq == SPI1 )
            {
                stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1::  BR>(3u);
                stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1:: SSM>(1u);
                stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1:: SSI>(1u);
                stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1::MSTR>(1u);
                stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1:: SPE>(1u);
            }
            else if( seq == SPI2 )
            {
                stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1::  BR>(3u);
                stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1:: SSM>(1u);
                stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1:: SSI>(1u);
                stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1::MSTR>(1u);
                stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1:: SPE>(1u);
            }
            else if( seq == SPI3 )
            {
                stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1::  BR>(3u);
                stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1:: SSM>(1u);
                stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1:: SSI>(1u);
                stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1::MSTR>(1u);
                stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1:: SPE>(1u);
            }
            else
            {
            }
        }
        else
        {
        }
    }

    static void read( unsigned char * pBuf )
    {
        volatile unsigned int val = 0u;
        //if RXNE flag is set then read DR register
        while( val == 0u )
        {
            val = stm32f103rb::spi1::sr::get<stm32f103rb::spi1::sr::RXNE>();
        }
        if( val == 1u )
        {
            pBuf[0] = stm32f103rb::spi1::dr::get<stm32f103rb::spi1::dr::DR>();

            val = 1u;
            while( val == 1u )
            {
                val = stm32f103rb::spi1::sr::get<stm32f103rb::spi1::sr::RXNE>();
            }
            val = 1u;
            while( val == 1u )
            {
                val = stm32f103rb::spi1::sr::get<stm32f103rb::spi1::sr::BSY>();
            }
        }
    }

    static void write( unsigned char * pBuf )
    {
        volatile unsigned int val = 0u;

        while( val == 0u )
        {
            val = stm32f103rb::spi1::sr::get<stm32f103rb::spi1::sr::TXE>();
        }

        //Put data in DR register and wait until TXE flag is cleared
        stm32f103rb::spi1::dr::set<stm32f103rb::spi1::dr::DR>( pBuf[0] );

        val = 1u;
        while( val == 1u )
        {
            val = stm32f103rb::spi1::sr::get<stm32f103rb::spi1::sr::BSY>();
        }

    }

    static void close()
    {
        if( seq == SPI1 )
        {
            stm32f103rb::rcc::apb2enr::set<stm32f103rb::rcc::apb2enr:: SPI1EN>(0u);
        }
        else if( seq == SPI2 )
        {
            stm32f103rb::rcc::apb1enr::set<stm32f103rb::rcc::apb1enr:: SPI2EN>(0u);
        }
        else if( seq == SPI3 )
        {
            stm32f103rb::rcc::apb1enr::set<stm32f103rb::rcc::apb1enr:: SPI3EN>(0u);
        }
        else
        {

        }
    }
};

enum spiEventType
{
   SPI_EVENT_RX_BUFFER_FULL,
   SPI_EVENT_RX_CHAR_RECEIVED,
   SPI_EVENT_TX_BUFFER_EMPTY,
   SPI_EVENT_MAX
};

template <devIdSeqType seq, devType type> class spi_comms<seq, type, INTERRUPT>
{
private:
   // rx_buffer[], tx_buffer[]

   static circularBuffer rxBuffer;
   static circularBuffer txBuffer;
   static unsigned char  rx_buffer[0xFFu];
   static unsigned char  tx_buffer[0xFFu];
   static fptr events[SPI_EVENT_MAX];

   static void eventsNotification( void )
   {
       unsigned char         c;
       volatile unsigned int x = 0;

       x = stm32f103rb::spi1::sr::get<stm32f103rb::spi1::sr::RXNE>();

       if( x == 1u )
       {
           c = static_cast<unsigned char>( stm32f103rb::spi1::dr::get<stm32f103rb::spi1::dr::DR>() );
           rxBuffer.put(c);
           if( events[SPI_EVENT_RX_CHAR_RECEIVED] != NULL_FUNCTION_PTR )
           {
               events[SPI_EVENT_RX_CHAR_RECEIVED]();
           }
           if( ( events[SPI_EVENT_RX_BUFFER_FULL] != NULL_FUNCTION_PTR ) && ( rxBuffer.isFull() == 1u ) )
           {
               events[SPI_EVENT_RX_BUFFER_FULL]();
           }
       }

       x = stm32f103rb::spi1::sr::get<stm32f103rb::spi1::sr::TXE>();
       if( x == 1u )
       {
           if( txBuffer.isEmpty() == 0u )
           {
               c = txBuffer.get();
               stm32f103rb::spi1::dr::set<stm32f103rb::spi1::dr::DR>(c);
           }
           else
           {
               stm32f103rb::spi1::cr2::set<stm32f103rb::spi1::cr2::TXEIE >(0u);
               if( events[SPI_EVENT_TX_BUFFER_EMPTY] != NULL_FUNCTION_PTR )
               {
                   events[SPI_EVENT_TX_BUFFER_EMPTY]();
               }
           }
       }
   }
public:
    static void open()
    {
        //Enable SPI device
        if( seq == SPI1 )
        {
            stm32f103rb::rcc::apb2enr::set<stm32f103rb::rcc::apb2enr::IOPAEN>(1u);
            stm32f103rb::rcc::apb2enr::set<stm32f103rb::rcc::apb2enr:: SPI1EN>(1u);
            iopin<PORTA, PIN4>::open( 3u, 0u );
            iopin<PORTA, PIN5>::open( 3u, 2u );
            iopin<PORTA, PIN6>::open( 3u, 2u );
        }
        else if( seq == SPI2 )
        {
            stm32f103rb::rcc::apb2enr::set<stm32f103rb::rcc::apb2enr::IOPAEN>(1u);
            stm32f103rb::rcc::apb1enr::set<stm32f103rb::rcc::apb1enr:: SPI2EN>(1u);
            iopin<PORTA, PIN4>::open( 3u, 0u );
            iopin<PORTA, PIN5>::open( 3u, 2u );
            iopin<PORTA, PIN6>::open( 3u, 2u );
        }
        else if( seq == SPI3 )
        {
            stm32f103rb::rcc::apb2enr::set<stm32f103rb::rcc::apb2enr::IOPAEN>(1u);
            stm32f103rb::rcc::apb1enr::set<stm32f103rb::rcc::apb1enr:: SPI3EN>(1u);
            iopin<PORTA, PIN4>::open( 3u, 0u );
            iopin<PORTA, PIN5>::open( 3u, 2u );
            iopin<PORTA, PIN6>::open( 3u, 2u );
        }
        else
        {

        }
        if( seq == SPI1 )
        {
            stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1::   BR>(3u);
            stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1::  SSM>(1u);
            stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1::  SSI>(1u);
            stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1:: MSTR>(1u);
            stm32f103rb::spi1::cr2::set<stm32f103rb::spi1::cr2::RXNEIE>(1u);
            stm32f103rb::spi1::cr2::set<stm32f103rb::spi1::cr2::TXEIE>(1u);
            stm32f103rb::spi1::cr2::set<stm32f103rb::spi1::cr2::ERRIE>(1u);
            stm32f103rb::iCtl::intCtrl::set<stm32f103rb::iCtl::intCtrl::INT_VECTOR_SPI1>(eventsNotification);
            stm32f103rb::spi1::cr1::set<stm32f103rb::spi1::cr1::  SPE>(1u);
        }
        else if( seq == SPI2 )
        {
            stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1::   BR>(3u);
            stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1::  SSM>(1u);
            stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1::  SSI>(1u);
            stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1:: MSTR>(1u);
            stm32f103rb::spi2::cr2::set<stm32f103rb::spi2::cr2::RXNEIE>(1u);
            stm32f103rb::spi2::cr2::set<stm32f103rb::spi2::cr2::TXEIE>(1u);
            stm32f103rb::spi2::cr2::set<stm32f103rb::spi2::cr2::ERRIE>(1u);
            stm32f103rb::iCtl::intCtrl::set<stm32f103rb::iCtl::intCtrl::INT_VECTOR_SPI2>(eventsNotification);
            stm32f103rb::spi2::cr1::set<stm32f103rb::spi2::cr1::  SPE>(1u);
        }
        else if( seq == SPI3 )
        {
            stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1::   BR>(3u);
            stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1::  SSM>(1u);
            stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1::  SSI>(1u);
            stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1:: MSTR>(1u);
            stm32f103rb::spi3::cr2::set<stm32f103rb::spi3::cr2::RXNEIE>(1u);
            stm32f103rb::spi3::cr2::set<stm32f103rb::spi3::cr2::TXEIE>(1u);
            stm32f103rb::spi3::cr2::set<stm32f103rb::spi3::cr2::ERRIE>(1u);
            stm32f103rb::iCtl::intCtrl::set<stm32f103rb::iCtl::intCtrl::INT_VECTOR_SPI3>(eventsNotification);
            stm32f103rb::spi3::cr1::set<stm32f103rb::spi3::cr1::  SPE>(1u);
        }
        else
        {
        }
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
        stm32f103rb::spi1::cr2::set<stm32f103rb::spi1::cr2::RXNEIE>(1u);
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
            stm32f103rb::spi1::dr::set<stm32f103rb::spi1::dr::DR>(pBuffer[0]);
        stm32f103rb::spi1::cr2::set<stm32f103rb::spi1::cr2::TXEIE >(1u);
    }

    static void close()
    {
        if( seq == SPI1 )
        {
            stm32f103rb::rcc::apb2enr::set<stm32f103rb::rcc::apb2enr:: SPI1EN>(0u);
        }
        else if( seq == SPI2 )
        {
            stm32f103rb::rcc::apb1enr::set<stm32f103rb::rcc::apb1enr:: SPI2EN>(0u);
        }
        else if( seq == SPI3 )
        {
            stm32f103rb::rcc::apb1enr::set<stm32f103rb::rcc::apb1enr:: SPI3EN>(0u);
        }
        else
        {

        }
    }
};
#if 0
template <DMA> class spi_comms
{
public:

    void open()
    {

    }
    void read()
    {

    }

    void write()
    {

    }

    void close()
    {

    }
};
#endif

#endif
