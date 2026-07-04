#include <stdio.h>

int main()
{
    char strg1[20] = "Pragyan ";
    char strg2[10] = "Kasaudhan";
    int j;
    int i;
    for (i = 8, j = 0; strg2[j] != '\0'; i++, j++)
    {

        strg1[i] = strg2[j];
    }
    strg1[i] = '\0';
    printf("%s\n", strg1);
    return 0;
}