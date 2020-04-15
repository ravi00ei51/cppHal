#ifndef __H_SHELL_H__
#define __H_SHELL_H__

class shell
{
private:
    enum shellStatus
    {
        SHELL_STATUS_INIT,
        SHELL_STATUS_WAITING_FOR_HEADER,
        SHELL_STATUS_WAITING_FOR_COMMAND,
        SHELL_STATUS_WAITING_FOR_DATA,
        SHELL_STATUS_WAITING_FOR_FOOTER
        SHELL_STATUS_MAX
    };
    static shellStatus status;
    static unsigned char command;
    static unsigned char data[256];
    static unsigned char dataIndex;
    static unsigned char exprectedDataLength;
public:
    static void shellInit( void )
    {
        status = SHELL_STATUS_WAITING_FOR_HEADER;
    }
    static void shellProcess( void )
    {
        unsigned char c;
        unsigned char length;
        peripheral::uart::read( &c, 1 );
        switch(status)
        {
            case SHELL_STATUS_INIT:
                status = SHELL_STATUS_WAITING_FOR_HEADER;
            break;
            case SHELL_STATUS_WAITING_FOR_HEADER:
                if( c == SHELL_HEADER_VAL )
                {
                    status = SHELL_STATUS_WAITING_FOR_COMMAND;
                }
                else
                {
                    /* Do nothing */
                }
            break;
            case SHELL_STATUS_WAITING_FOR_COMMAND:
                if( shellCheckCommandValidity( c, &length ) == 1u )
                {
                    command            = c;
                    dataIndex          = 0u;
                    expectedDataLength = length;
                    status             = SHELL_STATUS_WAITING_FOR_DATA;
                }
                else
                {
                    status = SHELL_STATUS_WAITING_FOR_HEADER;
                }
            break;
            case SHELL_STATUS_WAITING_FOR_DATA:
                if( dataIndex <  expectedDataLength )
                {
                    data[dataIndex] = c;
                    dataIndex++;
                    if( dataIndex == expecteDataLength )
                    {
                        status = SHELL_STATUS_WAITING_FOR_FOOTER;
                    }
                }
                else
                {
                    status = SHELL_STATUS_WAITING_FOR_HEADER;
                }
            break;
            case SHELL_STATUS_WAITING_FOR_FOOTER:
                status = SHELL_STATUS_WAITING_FOR_HEADER;
            break;
            default:
                status = SHELL_STATUS_WAITING_FOR_HEADER;
            break;

        }
    }
    static void shellDeinit( void )
    {
        status = SHELL_STATUS_MAX;
    }
};
#endif // __H_SHELL_H__
