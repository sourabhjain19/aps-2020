#include <stdio.h>

int main()
{
    int i, arr[6] = {3, 4, 2, 5, 1, 6};
    int n = 6, esum = 0, osum=0;
    for (i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            esum += arr[i];
        }
        else
        {
            osum += arr[i];
        }
        
    }
    printf("Even Index Sum = %d\n", esum);
    printf("Odd Index Sum = %d", osum);
}