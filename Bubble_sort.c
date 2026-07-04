//Write a Program for Bubble sort.
#include<stdio.h>

int main(){
    int a[50],n,temp;
    printf("enter the number of element in list \n");
    scanf("%d",&n);
    printf("enter the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the element a[i]\n");
        scanf("%d",&a[i]);
        printf("\n");
    }
    for (int i = 0; i <n-1; i++)
    {
        for (int  j = 0; j< n-1-i; j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}