#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("p5.txt", "r");
    if (ptr == NULL)
    {
        printf("THE FILE IS NOT EXIST\n");
    }
    else
    {

        int n;
        fscanf(ptr, "%d",&n);
        printf("%d\n", n);
        fclose(ptr);
    }
    return 0;
}