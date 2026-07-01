//both are correct

// #include <stdio.h>

// int main()
// {
//     int arr[3][2], i, j;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             printf("enter the array");
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 2; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }




#include<stdio.h>

int main(){
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 2; j++)
        {
            printf("Enter the arrat[%d][%d]  \n ",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" the array[%d][%d] at this index value is %d\n",i,j,arr[i][j]);
            
        }
        
    }
    
    
    return 0;
}