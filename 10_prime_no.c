#include<stdio.h>

int main()
{
    int i,flag=0,num=129;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is not Prime");
    }
    
}