#include<stdio.h>
int main()
{
    char alpha='a';
    int n;
    scanf("%d",&n);
    alpha = alpha & ~32;
    printf("%c\n",alpha);
}
