#include <stdio.h>
void length(char array[], int n); // function prototype
void length(char array[], int n)  // function definition
{
    int count = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);
}
int main()
{
    char a[8] = "PRAGYAN";
    length(a, 8);
    return 0;
}