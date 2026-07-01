#include <stdio.h>
int main()
{
    int fact = 1, i = 1, n;
    printf("Enter the number");
    scanf("%d", &n);
    while (i <= n)
    {

        fact *= i;
        i++;
    }

    printf("%d", fact);
    return 0;
}