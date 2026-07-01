#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 6;
    int *ptr;
    ptr = (int *)malloc(a * sizeof(int));
    printf("Enter the array\n");
    for (int i = 0; i < 6; i++)
    {
        printf("enter the array ptr[%d]\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}