#include <stdio.h>
void strlen(int x, char string[x]); // function prototype
void strlen(int x, char string[x])  // function definiton
{
    int length = 0;
    for (int i = 0; string[x] != '\0'; i++)
    {
        length++;
    }
    printf("%d\n", length);
}

int main()
{
    char strg[8] = "pragyan";
    strlen(8, strg);
    return 0;
}
