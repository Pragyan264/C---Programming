#include <stdio.h>
int main()
{
    int i = 1;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    printf("the value of i is %d", **ptr2);
    return 0;
}