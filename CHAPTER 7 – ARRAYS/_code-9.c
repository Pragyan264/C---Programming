#include <stdio.h>

int main()
{
    int three_dimensional[3][3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {

                printf("enter array[%d][%d[%d]]\n", i, j, k);
                scanf("%d", &three_dimensional[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%u ", &three_dimensional[i][j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}
