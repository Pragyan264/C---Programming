#include <stdio.h>
int main()
{
    int i = 2, n, remainder = 1; // assumed it is prime number
    printf("Enter the number");
    scanf("%d", &n);
    while (i < n)
    {

        if (n % i == 0)
        {
            remainder = 0;
            break;
        }

        i++;
    }

    if (remainder == 0)
    {
        printf("The Number is not Prime");
    }
    else
    {
        printf("The Number is  Prime");
    }

    return 0;
}