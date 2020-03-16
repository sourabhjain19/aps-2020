#include<stdio.h>

int main(){
    int n=16,i=0,j;
    int rem[100];

    while(n){
        rem[i]=n%2;
        n=n/2;
        i++;
    }

    for(j=0;j<i;j++){
        printf("%d ",rem[(i-1)-j]);
    }
    
    return 0;
}