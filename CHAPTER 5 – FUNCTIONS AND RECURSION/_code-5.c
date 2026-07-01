#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d%d%d", a, ++a, a++); // always run from right to left
    return 0;
}