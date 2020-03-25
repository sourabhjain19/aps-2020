#include<stdio.h>

#define print(msg) #msg
#define concat(msg1,msg2) msg1##msg2

int main(){

    printf(print(Hello world1));
    printf("\n");
    printf(print(Hello world2));
    printf("\n");
    printf("%d", concat(100,5000));

    return 0;
}