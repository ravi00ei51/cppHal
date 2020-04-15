#include<mem.h>
void memcpy(void *dest, void *src, int n)
{
   // Typecast src and dest addresses to (char *)
   char *csrc = (char *)src;
   char *cdest = (char *)dest;

   // Copy contents of src[] to dest[]
   for (int i=0; i<n; i++)
       cdest[i] = csrc[i];
}

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
