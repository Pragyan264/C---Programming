#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("enter the array ptr[%d]\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 5; i < 10; i++)
    {
        printf("enter the array ptr[%d]\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 5; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    return 0;
}