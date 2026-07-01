#include <stdio.h>
void _strcpy(char array[], char array2[]); // function prototype
void _strcpy(char array[], char array2[])  // function definition
{
    int i = 0;
    for (i = 0; array2[i] != '\0'; i++)
    {
        array[i] = array2[i];
    }
    array[i] = '\0';
}
int main()
{
    char T[25];
    char S[25] = "PRAGYAN";
    _strcpy(T, S);
    printf("%s\n", T);
    return 0;
}