#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void lcs(int n1, int n2, char s1[], char s2[])
{
    int i, j, res[n1 + 1][n2 + 1], maxi = 0;
    for (i = 0; i < n2; i++)
    {
        res[0][i] = 0;
    }
    for (i = 0; i < n1; i++)
    {
        res[i][0] = 0;
    }
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            res[i][j] = 0;
            if (s1[i - 1] == s2[j - 1])
            {
                res[i][j] = res[i - 1][j - 1] + 1;
                maxi = max(maxi, res[i][j]);
            }
        }
    }
    printf("%d", maxi);
}

int main()
{
    int n1 = 5, n2 = 6;
    char s1[6] = "abcbd", s2[7] = "abcbad";
    lcs(n1, n2, s1, s2);
}