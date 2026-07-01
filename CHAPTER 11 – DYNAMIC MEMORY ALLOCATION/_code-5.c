#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    int *ptr;
    int j=1;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i]=7*j;
        j++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }
    ptr = realloc(ptr, 15 * sizeof(int));
    for (int i = 10; i < 15; i++)
    {
        ptr[i]=7*j;
        j++;
    }
    for (int i = 10; i < 15; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    return 0;
}