#include <stdio.h>

long long unsigned int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
int main()
{
    int n = 15;
    printf("Factorial = %llu", factorial(n));
}