// Wirte a program to check a number is Armstrong 
#include <stdio.h>
void armstrong(int);  // function prototype
void armstrong(int a) // function definition
{
    int d, sum = 0, x;
    x = a;
    while (a > 0)
    {
        d = a % 10;
        sum = sum + d * d * d;
        a = a / 10;
    }
    if(sum==x){
        printf("Armstrong\n");
    }
    else{
        printf("Not Armstrong\n");
    }
}
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    armstrong(a);
    return 0;
}