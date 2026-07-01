#include <stdio.h>
int ten_times(int a); // function prototype
int ten_times(int a)  // function definitioon
{
    a = a * 10;
    return a;
}
int main()
{
    int x = 10;
    printf("the value of varianle without using function is %d\n", x);
    x=ten_times(x);// when value is passes always declare
    printf("the value of varianle with using function is %d", x);
    return 0;
}