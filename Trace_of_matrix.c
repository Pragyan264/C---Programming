#include <stdio.h>
int main()
{
    int A[3][3], Trace=0;
    printf("Enter the First Array:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i==j){
                Trace=Trace+A[i][j];
            }
        }
        
    }
    
    printf("The Trace of Matrix is: %d\n",Trace);
    
    return 0;
}