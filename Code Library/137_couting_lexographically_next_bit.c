//if N is 3 and the bit pattern is 00010011, the next patterns would be 00010101, 00010110, 00011001,00011010, 00011100, 00100011,
//and so forth.
#include<stdio.h>

int main()
{
    unsigned int v=17; // current permutation of bits 
    unsigned int w; // next permutation of bits

    unsigned int t = (v | (v - 1)) + 1;
    w = t | ((((t & -t) / (v & -v)) >> 1) - 1);

    printf("%u",w);
    return 0;
}