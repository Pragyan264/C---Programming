#include <stdio.h>
int address(int *);   // function prototype
int address(int *ptr) // funnction definition
{
    printf("The address of i in function is %u", ptr);
}
int main()
{
    int i = 19;
    int *ptr = &i;
    printf("The address of i in main function is %u\n", ptr);
    address(ptr);
    return 0;
}