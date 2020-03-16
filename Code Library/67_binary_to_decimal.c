#include<stdio.h>
#include<math.h>

int main(){

    char c[100]="1111";
    int i,sum=0;
    int n=4;
    for(i=n-1;i>=0;i--){
        sum+=(c[(n-1)-i]-48)*pow(2,i);
    }
    printf("%d",sum);
    return 0;
}