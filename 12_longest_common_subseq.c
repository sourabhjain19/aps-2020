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
int longest_common_subsequence(char s1[], char s2[], int n1, int n2)
{
    int i, j, lcs[n1 + 1][n2 + 1];
    for (i = 0; i < n2; i++)
    {
        lcs[0][i] = 0;
    }
    for (i = 0; i < n1; i++)
    {
        lcs[i][0] = 0;
    }
    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            }
            else
            {
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }
    printf("%d", lcs[n1][n2]);
}
int main()
{
    int n1 = 5, n2 = 6;
    char s1[6] = "abcda", s2[7] = "bdabac";
    longest_common_subsequence(s1, s2, n1, n2);
    return 0;
}