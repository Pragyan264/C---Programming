#include <stdio.h>

int main()
{
    char c[8];
    char s[8];
    printf("Enter the c string ");
    for (int i = 0; i < 7; i++)
    {
        scanf(" %c", &c[i]);
        fflush(stdin);
    }
    c[8] = 0;

    printf("%s\n", c);
    printf("Enter the s string \n");
    scanf("%s", &s);
    printf("%s\n", s);
    return 0;
}