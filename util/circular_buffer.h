#ifndef __H_CIRCULAR_BUFFER_H__
#define __H_CIRCULAR_BUFFER_H__

enum circular_buffer_status_et
{
    CIRCULAR_BUFFER_INVALID,
    CIRCULAR_BUFFER_VALID,
    CIRCULAR_BUFFER_EMPTY,
    CIRCULAR_BUFFER_FILLED,
    CIRCULAR_BUFFER_FULL
};
class circularBuffer
{
private:
    unsigned char * pBuffer;
    unsigned int    start;
    unsigned int    finish;
    unsigned int    maxSize;
    circular_buffer_status_et status;
    void increaseStartLocation( void )
    {
        if( start < ( maxSize ) )
        {
            start++;
        }
        else
        {
            start = 0u;
        }

        if( start == finish )
        {
            status = CIRCULAR_BUFFER_EMPTY;
        }
        else
        {
            status = CIRCULAR_BUFFER_FILLED;
        }
    }
    void increaseEndLocation( void )
    {
        unsigned int temp = 0u;
        if( finish < ( maxSize ) )
        {
            finish++;
        }
        else
        {
            finish = 0u;
        }

        if( finish ==  start )
        {
            if( start < maxSize )
            {
                start++;
            }
            else
            {
                start = 0u;
            }
        }

        if( finish > start )
        {
            temp = finish - start + 1u;
        }
        else if( finish < start )
        {
            temp = finish + ( maxSize -start ) + 1u;
        }


        if( temp == maxSize )
        {
            status = CIRCULAR_BUFFER_FULL;
        }
        else
        {
            status = CIRCULAR_BUFFER_FILLED;
        }
    }
public:
    void init( unsigned char * pBuf, unsigned int dataSize )
    {
        pBuffer = pBuf;
        maxSize = dataSize;
        start   = 0u;
        finish  = 0u;
        status  = CIRCULAR_BUFFER_VALID;
    }

    void put( unsigned char val )
    {
        pBuffer[finish] = val;
        increaseEndLocation();
    }
    unsigned char get( void )
    {
        unsigned char val;

        val = pBuffer[start];
        pBuffer[start] = 0u;
        increaseStartLocation();
        return val;
    }
    unsigned int currentNumberOfElements( void )
    {
        unsigned int temp;

        if( finish > start )
        {
            temp = finish - start;
        }
        else if( finish < start )
        {
            temp = finish + ( maxSize -start ) + 1u;
        }
        else
        {
            temp = 0u;
        }

        return temp;
    }
    void deInit( void )
    {
        unsigned int i;
        for( i = 0; i < maxSize; i++ )
        {
             pBuffer[i] = 0xFFu;
        }
        start   = 0u;
        finish     = 0u;
        maxSize = 0u;
        status  = CIRCULAR_BUFFER_INVALID;
    }
    circular_buffer_status_et circular_buffer_status( void )
    {
        return status;
    }
    unsigned int isFull(void)
    {
        unsigned int retVal = 0u;
        if( currentNumberOfElements() == maxSize )
        {
            retVal = 1u;
        }
        else
        {
            retVal = 0u;
        }
        return retVal;
    }
    unsigned int isEmpty(void)
    {
        unsigned int retVal = 0u;
        if( currentNumberOfElements() == 0u )
        {
            retVal = 1u;
        }
        else
        {
            retVal = 0u;
        }
        return retVal;
    }
};

#endif
