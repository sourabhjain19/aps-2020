#include <stdio.h>

int main()
{
    int i,j, arr[6] = {6, 4, 2, 5, 3, 1};
    int n = 6,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted Array = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}