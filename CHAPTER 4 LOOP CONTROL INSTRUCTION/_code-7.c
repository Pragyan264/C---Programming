#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    for (i = 1; 10 >= i; i++)
    {
        sum += 8 * i;
    }
    printf("%d", sum);
    return 0;
}