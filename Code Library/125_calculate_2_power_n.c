#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("2 power %d is %d",n,2 <<(n-1));
    return 0;
}
