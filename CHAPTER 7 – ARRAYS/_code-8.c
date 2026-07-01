#include <stdio.h>

int main()
{
    int table[3][10];
    int l, m, n;
    printf("enter l\n");
    scanf("%d", &l);
    printf("enter m\n");
    scanf("%d", &m);
    printf("enter n\n");
    scanf("%d", &n);

    for (int j = 0; j < 10; j++)
    {
        table[0][j] = l * (j + 1);
        table[1][j] = m * (j + 1);
        table[2][j] = n * (j + 1);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
