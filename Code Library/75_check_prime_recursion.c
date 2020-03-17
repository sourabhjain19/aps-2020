#include<stdio.h>

int i;

int isprime(int n){
    if(i==1)
        return 1;
    if(n%i==0)
        return 0;
    if(n%i!=0){
        i--;
        isprime(n);
    }
}

int main(){
    int n=139;
    i=n/2;
    int res=isprime(n);

    if (res==1)
        printf("It is a Prime No");
    else
        printf("It is not a prime No");
    
    return 0;
}