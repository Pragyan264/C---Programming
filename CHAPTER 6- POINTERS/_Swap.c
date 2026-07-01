#include <stdio.h>
int swap(int *, int *);  // function prototype
int swap(int *a, int *b) // function definition
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int temp;
    int x = 2, y = 1;
    swap(&x, &y);
    printf("the value of x and y is %d,%d respectively", x, y);
    return 0;
}