#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    float *ptr;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    ptr=(float*)malloc(n*sizeof (float));
    ptr[0]=2.0125;
    printf("%f\n",ptr[0]);
    return 0;
}