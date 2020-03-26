//compute the next highest power of 2 of 32-bit v

#include <stdio.h>

int main()
{
    unsigned int v=35; 

    v--;
    v |= v >> 1;
    v |= v >> 2;
    v |= v >> 4;
    v |= v >> 8;
    v |= v >> 16;
    v++;

    printf("%u",v);

    return 0;
}