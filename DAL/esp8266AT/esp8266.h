#ifndef __H_ESP8266_AT_H__
#define __H_ESP8266_AT_H__
#include "peripheral.h"
#include "mem.h"
extern void delay(int);
using namespace std;
struct commands
{
    unsigned char request[20];
    unsigned int  requestLength;
    unsigned char response[20];
    unsigned int  responseLength;
};

enum esp8266ServiceType
{
    ECHO,
    RESET,
    CONNECT_WIFI,
    DISCONNECT_WIFI,
    LINK_TO_WEB,
    UNLINK_FROM_WEB,
    SEND_DATA_TO_WEB,
    RECEIVE_DATA_FROM_WEB
};

class esp8266Comms
{
public:
    static void open( void )
    {
        peripheral::uart::open( 115200u );
    }
    static void write( unsigned char * pBuffer, unsigned int len )
    {
        peripheral::uart::write( pBuffer, len );
    }
    static void read( unsigned char * pBuffer, unsigned int len )
    {
        peripheral::uart::read( pBuffer, len );
    }
    static void close( void )
    {
        peripheral::uart::close();
    }
    static unsigned char checkResponse( unsigned char * actualResponse, unsigned char * expectedResponse, unsigned int len, unsigned int length )
    {
        unsigned int i = 0u;
        unsigned char matched = 1u;
        for( i = 0u; i < length - len; i++ )
        {
             if( memcmp( &actualResponse[i], &expectedResponse[0], len ) == 0u )
             {
                 matched = 0u;
                 break;
             }
        }
        return matched;
    }

};
template <esp8266ServiceType service> class esp8266Service;

template <> class esp8266Service<RESET>:public esp8266Comms
{
private:
public:
    static unsigned char invoke( void )
    {
        unsigned char request[]          = "AT+RST\r\n";
        unsigned char expectedResponse[] = "ready";
        unsigned char actualResponse[500u] = {0};
        write( static_cast<unsigned char *>( &request[0] ), 8u );
        delay(5000u);
        read( &actualResponse[0], 254u );
        return checkResponse( actualResponse, expectedResponse, 5u, 254u );
    }
};

template <> class esp8266Service<ECHO>:public esp8266Comms
{
public:
    static unsigned char invoke( void )
    {
        unsigned char request[]          = "AT\r\n";
        unsigned char expectedResponse[] = "OK";
        unsigned char actualResponse[20u];
        write( request, 4u );
        delay(200u);
        read( actualResponse, 20u );
        return checkResponse( actualResponse, expectedResponse, 2u, 20u );
    }
};
template <> class esp8266Service<CONNECT_WIFI>:public esp8266Comms
{
private:

public:

    static unsigned char invoke( unsigned char * pSsid, unsigned char * pPassword, unsigned int ssidLen, unsigned int passwordLen )
    {
    static constexpr unsigned char expectedResponse[]      = "OK";

    static constexpr unsigned char requestPart1[] = "AT+CWJAP=\"";
    static constexpr unsigned char requestPart2[] = "\",\"";
    static constexpr unsigned char requestPart3[] = "\"\r\n";
        unsigned int index = 0u;
        unsigned char actualResponse[100u]={0};
        unsigned char finalRequest[50] = {0};

        memcpy( (void *)&finalRequest[index], (void *)&requestPart1[0], 10u );
        index += 10u;
        memcpy( (void *)&finalRequest[index], (void *)pSsid, ssidLen );
        index += ssidLen;
        memcpy( (void *)&finalRequest[index], (void *)&requestPart2[0], 3u );
        index += 3u;
        memcpy( (void *)&finalRequest[index], (void *)pPassword, passwordLen );
        index += passwordLen;
        memcpy( (void *)&finalRequest[index], (void *)&requestPart3[0], 3u );
        index += 3u;
        write( finalRequest, index );
        delay(3000u);
        read( actualResponse, 100u );
        return checkResponse( (unsigned char *)actualResponse, (unsigned char *)expectedResponse, 2u, 100u );
    }
};

template <> class esp8266Service<LINK_TO_WEB>:public esp8266Comms
{
private:
public:
    static unsigned char invoke( unsigned char * pWebAddress, unsigned int len )
    {
    static constexpr unsigned char firstRequest[]       = "AT+CIPMUX=1\r\n";
    static constexpr unsigned char secondRequestPart1[] = "AT+CIPSTART=0,\"TCP\",\"";
    static constexpr unsigned char secondRequestPart2[] = "\",80\r\n";
    static constexpr unsigned char expectedResponse[]   = "OK";

        volatile unsigned int index = 0u;
        unsigned char actualResponse[254]={0};
        unsigned char finalRequest[200]={0};
        unsigned char retVal;

        write( (unsigned char *)firstRequest, 13u );
        delay(400u);
        read( actualResponse, 20u );
        if( checkResponse( actualResponse, (unsigned char *)expectedResponse, 2u, 20u ) == 0u )
        {
            memcpy( (void *)&finalRequest[index], (void *)secondRequestPart1, 21u );
            index += 21u;
            memcpy( (void *)&finalRequest[index], (void *)pWebAddress, len );
            index += len;
            memcpy( (void *)&finalRequest[index], (void *)secondRequestPart2, 6u );
            index += 6u;
            write( (unsigned char *)&finalRequest[0], index );
            delay(400u);
            read( actualResponse, 254u );
            retVal = checkResponse( actualResponse, (unsigned char *)expectedResponse, 2u, 254u );
        }
        else
        {
            retVal = 1u;
        }
        return retVal;
    }

};

template <> class esp8266Service<UNLINK_FROM_WEB>:public esp8266Comms
{
private:
    static constexpr unsigned char request[]          = "AT+CIPCLOSE=0\r\n";
    static constexpr unsigned char expectedResponse[] = "OK";
public:
    static unsigned char invoke( void )
    {
        unsigned char actualResponse[20]={0};
        write( (unsigned char *)request, 15u );
        delay(200u);
        read( actualResponse, 20u );
        return checkResponse( actualResponse, (unsigned char *)expectedResponse, 2u, 20u );
    }
};


template <> class esp8266Service<SEND_DATA_TO_WEB>:public esp8266Comms
{
private:

public:
    static unsigned char invoke( unsigned char * pWebAddress, unsigned char * pFileName, unsigned char * pData, unsigned int webAddressLen, unsigned int fileLen, unsigned int dataLen )
    {
    static constexpr unsigned char firstRequestPart1[]  = "AT+CIPSEND=0,";
    static constexpr unsigned char firstRequestPart2[]  = "\r\n";
    static constexpr unsigned char secondRequestPart1[] = "POST /";
    static constexpr unsigned char secondRequestPart3[] = " HTTP/1.1\r\nHost: ";
    static constexpr unsigned char secondRequestPart5[] = "\r\nConnection: keep-alive\r\nContent-Type: application/x-www-form-urlencoded\r\nContent-Length: ";
    static constexpr unsigned char secondRequestPart7[] = "\r\n\r\n";
    static constexpr unsigned char secondRequestPart9[] = "\r\n\r\n";
    static constexpr unsigned char expectedResponse[]   = "OK";
        unsigned char finalRequest[200]={0};
        unsigned char firstRequest[200]={0};
        unsigned char actualResponse[254]={0};
        unsigned char dataSizeStr[20]="17";
        unsigned char retVal     = 0u;
        unsigned int  dataStrLen = 2u;
        volatile unsigned int  index      = 0u;
        volatile unsigned int  firstRequestIndex = 0u;

        memcpy( (void *)&finalRequest[index], (void *)secondRequestPart1, 6u );
        index += 6u;
        memcpy( (void *)&finalRequest[index], (void *)pFileName, fileLen );
        index += fileLen;
        memcpy( (void *)&finalRequest[index], (void *)secondRequestPart3, 17u );
        index += 17u;
        memcpy( (void *)&finalRequest[index], (void *)pWebAddress, webAddressLen );
        index += webAddressLen;
        memcpy( (void *)&finalRequest[index], (void *)secondRequestPart5, 91u );
        index += 91u;
        memcpy( (void *)&finalRequest[index], (void *)dataSizeStr, dataStrLen );
        index += dataStrLen;
        memcpy( (void *)&finalRequest[index], (void *)secondRequestPart7, 4u );
        index += 4u;
        memcpy( (void *)&finalRequest[index], (void *)pData, dataLen );
        index += dataLen;
        memcpy( (void *)&finalRequest[index], (void *)secondRequestPart9, 4u );
        index += 4u;

        memcpy( (void *)&firstRequest[0], (void *)firstRequestPart1, 13u );
        firstRequestIndex += 13u;

        if( index < 100 )
        {
            firstRequest[firstRequestIndex+1u] = (unsigned char)(index%10+48u);
            firstRequest[firstRequestIndex] = (unsigned char)(index/10+48u);
            firstRequestIndex += 2u;
        }
        else
        {
            firstRequest[firstRequestIndex + 2u] = (unsigned char)(index%10+48u);
            firstRequest[firstRequestIndex + 1u] = (unsigned char)(((index%100)/10)+48u);
            firstRequest[firstRequestIndex] = (unsigned char)(index/100+48u);
            firstRequestIndex += 3u;
        }
        memcpy( (void *)&firstRequest[firstRequestIndex], (void *)firstRequestPart2, 2u );
        firstRequestIndex += 2u;
        write( (unsigned char *)firstRequest, firstRequestIndex );
        delay(500u);
        read( actualResponse, 254u );
        if( checkResponse( actualResponse, (unsigned char *)expectedResponse, 1u, 254u ) == 0u )
        {
            write( finalRequest, index );
            delay(500u);
            read( actualResponse, 254u );
            retVal = checkResponse( actualResponse, (unsigned char *)expectedResponse, 2u, 254u );
        }
        else
        {
            retVal = 1u;
        }
        return retVal;
    }

};
#endif
