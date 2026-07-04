// Write a Program for Selection sort.
#include <stdio.h>

int main()
{
    int a[50], n, temp;
    printf("enter the number of element in list \n");
    scanf("%d", &n);
    printf("enter the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the element a[i]\n");
        scanf("%d", &a[i]);
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}