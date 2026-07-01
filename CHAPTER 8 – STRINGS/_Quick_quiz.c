#include <stdio.h>

int main()
{
    char string[8] = "PRAGYAN";
    printf("%s\n", string);
    for (int i = 0; i < 7; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}