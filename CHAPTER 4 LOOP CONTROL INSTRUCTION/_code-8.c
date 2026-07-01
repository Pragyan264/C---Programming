#include <stdio.h>
int main()
{
    int fact = 1, i, n;
    printf("Enter the number");
    scanf("%d", &n);
    for (i = 1; i <= n;)
    {
        fact *= i;
        i++;
    }
    printf("%d", fact);
    return 0;
}