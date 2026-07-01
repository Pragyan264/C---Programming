#include <stdio.h>
void positve(int array[], int n);
void positve(int array[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            count++;
        }
    }
    printf("%d", count);
}
int main()
{
    int array[7] = {1, 5, 9, 5, 1, 5, -1};
    positve(array, 7);
    return 0;
}