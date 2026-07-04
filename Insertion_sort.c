//Write a Program for Insertion sort.
#include <stdio.h>

int main()
{
    int a[50], n, key,j;
    printf("enter the number of element in list \n");
    scanf("%d", &n);
    printf("enter the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the element a[i]\n");
        scanf("%d", &a[i]);
        printf("\n");
    }
    for (int i = 1; i <n; i++)
    {
        key=a[i];
        j=i-1;
        while (j>= 0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;

    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}