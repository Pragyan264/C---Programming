//Write a Program for Binary Search.
#include <stdio.h>
void search(int[], int);    // funtion prototype
void search(int a[], int n) // function definition
{
    int low = 0, high = n - 1, mid, key = 5;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            printf("element find at position %d\n", mid+1);
            break;
        }
        else if (a[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}
int main()
{
    int a[5] = {1, 5, 7, 9, 11}, n = 5;

    search(a, n);

    return 0;
}
