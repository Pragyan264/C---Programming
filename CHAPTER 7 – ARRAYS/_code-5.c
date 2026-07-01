#include <stdio.h>
void print(int array[], int n); // function prototype
void print(int array[], int n)  // function definition
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void reverse(int array[], int n); // function prototype
void reverse(int array[], int n)  // function definition
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}
int main()
{
    int R[7] = {1, 2, 3, 4, 5, 6, 7};
    print(R, 7);
    reverse(R, 7);
    print(R, 7);
    return 0;
}