#include <stdio.h>

int main()
{
    int b;
    printf("Enter b \n");
    scanf("%d", &b);

    FILE *ptr;
    ptr = fopen("code-2.txt", "w");
    
    for (int i = 1; i <= 10; i++)
    {
        int a = b * i;
        fprintf(ptr, "%dX%d=%d\n", b, i, a);
    }
    fclose(ptr);
    return 0;
}