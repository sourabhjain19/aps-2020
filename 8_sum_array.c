#include<stdio.h>

int main()
{
    int i,arr[6]={3,4,2,5,1,6};
    int n=6,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("Sum = %d",sum);
}