#include<iostream>

using namespace std;

unsigned char memcmp( unsigned char * p1, unsigned char * p2, unsigned int len )
{
    unsigned int i;
    unsigned char retVal = 0u;
    for( i = 0; i < len; i++ )
    {
        if( p1[i] != p2[i] )
        {
            retVal = 1u;
            i = len;
        }
    }
    return retVal;
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
                 cout<<" matched at "<<i<<endl;
                 break;
             }
        }
        return matched;
    }

int main()
{
    unsigned char x[] = "Here I am ready. Are you";
    unsigned char y[] = "ready";

    cout<<"======"<<checkResponse( x, y, 5u, 24u )<<"============="<<endl;

}