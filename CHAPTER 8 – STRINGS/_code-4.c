#include <stdio.h>
void slice(char array[], int m, int n)   ;   // function prototype
    void slice(char array[], int m, int n) // function definition
{
    int j=0;
    for (int i = m; i < n; i++)
    {

        array[j] = array[i];
        j++;
    }
    array[j] = '\0';
}
int main()
{
    char SLICE[8] = "PRAGYAN";
    slice(SLICE, 1, 7);
    printf("%s\n",SLICE);
    return 0;
}