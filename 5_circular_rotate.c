#include<stdio.h>

int main()
{
    int i,arr[6]={1,2,3,4,5,6};
    int n=6,temp;
    int k=4;
    while(k--)
    {
        temp = arr[n - 1];
        for (i = n - 2; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}