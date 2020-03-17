#include <stdio.h>

int i = 0;
char revstring[100];
void reverse(char *str)
{
    if (*str)
    {
        reverse(str + 1);
        revstring[i] = *str;
        i++;
    }
}

int main()
{
    reverse("Hello");
    printf("%s", revstring);
    return 0;
}