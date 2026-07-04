// Wirte a Program to find Average of number using Array.
#include <stdio.h>

int main()
{
    int a[10],sum=0;
    float avg=0;
    printf("Enter the Array \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum+=a[i];
    }
    avg=sum/10.0;
    printf("%f\n",avg);
    return 0;
}
