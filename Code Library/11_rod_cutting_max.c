#include <stdio.h>

int max(int a,int b,int c)
{
    int max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    return max;
}
long long int rod_cutting(int n)
{
    int i, j, result[n + 1];
    result[0] = 0;
    result[1] = 0;
    for (i = 2; i <= n; i++)
    {
        result[i] = 0;
        for (j = 1; j <= i / 2; j++)
        {
            result[i]=max(result[i],j*(i-j),j*result[i-j]);
        }
    }
    return result[n];
}
int main()
{
    int n = 7;
    printf("%lld",rod_cutting(n));
}
