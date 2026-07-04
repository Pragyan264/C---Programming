// Write a Program for Find largest number in Array.
#include<stdio.h>
int largest(int[] ,int );//function prototype
int largest(int a[],int n)//function definition
{
    int max=a[0];
    for (int i = 0; i < n; i++)
    {
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
int main(){
    int a[50], n;
    printf("enter the number of element in list \n");
    scanf("%d", &n);
    printf("enter the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the element a[i]\n");
        scanf("%d", &a[i]);
        printf("\n");
    }
    printf("largest element in array is %d\n",largest(a,n));
    return 0;
}