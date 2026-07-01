#include <stdio.h>
int sum(int n); // function prototype
int sum(int n)  // functiom definition
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int main()
{
    int n;
    printf("Enter the number ,want to sum of number till n");
    scanf("%d", &n);
    int S = sum(n);
    printf("The sum of natural number %d is %d", n, S);
    return 0;
}