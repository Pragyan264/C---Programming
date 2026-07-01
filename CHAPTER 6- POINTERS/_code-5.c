#include <stdio.h>
float *sum(float *, float *);  // functioon prototype
float *sum(float *a, float *b) // functioon definition
{
    float sum = *a + *b;
    printf("the sum of x an y is %f\n", sum);
    float *ptr = &sum;
    return ptr;
}
float *avg(float *, float *);  // functioon prototype
float *avg(float *a, float *b) // functioon definition
{
    float avg = (*a + *b) / 2;
    printf("the sum of x an y is %f\n", sum);
    float *ptr = &avg;
    return ptr;
}
int main()
{
    float x = 10.0, y = 15.0;
    float *ptr1;
    float *ptr2;
    ptr1 = sum((&x), (&y));
    ptr2 = avg((&x), (&y));
    printf("The address of sum is %u and average is %u",ptr1,ptr2);
    return 0;
}