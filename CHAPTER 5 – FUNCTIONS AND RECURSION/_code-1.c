#include <stdio.h>
float avg(int a, int b, int c); // function prototype
float avg(int a, int b, int c)  // function definition
{
    return (a + b + c) / 3.0; // 3.0 use for int divide int does not come in float thats why i use 3.0 in place of 3
}
int main()
{
    int a, b, c;
    printf("enter the value of a,b,c");
    scanf("%d%d%d", &a, &b, &c);
    float result = avg(a, b, c);
    printf("%f", result);
    return 0;
}