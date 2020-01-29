#include <stdio.h>
#include <string.h>

int main()
{
    char string[8] = "abcacba";
    int n = 7, flag = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (string[i] == string[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%s is a Palindrome", string);
    }
    else
    {
        printf("%s is not a palindrome", string);
    }
}