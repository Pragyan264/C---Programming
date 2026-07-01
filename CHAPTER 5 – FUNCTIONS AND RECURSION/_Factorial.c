#include <stdio.h>
// Function Prototype
int factorial(int n);
// Function Definition
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d", &n);
    int Factorial=factorial(n);//function call
    printf("%d", Factorial);
    return 0;
}
