#include<stdio.h>
int main()
{
    char alpha='a';
    alpha = alpha & ~32;
    printf("%c\n",alpha);
}
