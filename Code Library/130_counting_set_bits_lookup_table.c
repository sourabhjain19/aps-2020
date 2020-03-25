#include <stdio.h>

#define B2(n) n, n + 1, n + 1, n + 2
#define B4(n) B2(n), B2(n + 1), B2(n + 1), B2(n + 2)
#define B6(n) B4(n), B4(n + 1), B4(n + 1), B4(n + 2)

int main()
{
    static unsigned char BitsSetTable256[256] =
        {
            B6(0), B6(1), B6(1), B6(2)};

    unsigned int v = 1550;

    int c = BitsSetTable256[v & 0xff] +
            BitsSetTable256[(v >> 8) & 0xff] +
            BitsSetTable256[(v >> 16) & 0xff] +
            BitsSetTable256[v >> 24];

    printf("%d", c);
}
