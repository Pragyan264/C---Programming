// #include <stdio.h>
// int fibonacci(int n); // function prototype
// int fibonacci(int n)  // functiom definition
// {
//     if (n == 1)
//     {
//         return 0;
//     }
//     else if (n == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main()
// {
//     int n;
//     printf("Enter the which position element want know!");
//     scanf("%d", &n);
//     int F = fibonacci(n);
//     printf("The element at this %d  position in Fibonacci sreies is %d", n, F);
//     return 0;
// }
#include <stdio.h>
int fib(int);  // function prototype
int fib(int x) // function definition
{
    if (x == 1)
    {
        return 0;
    }
    else if (x == 2)
    {
        return 1;
    }
    else
    {
        return fib(x - 1) + fib(x - 2);
    }
}
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        printf("%d\t\n", fib(i));
    }
    return 0;
}