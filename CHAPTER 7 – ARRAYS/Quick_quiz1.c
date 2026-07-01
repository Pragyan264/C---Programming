// both are correct



// #include <stdio.h>

// int main()
// {
//     int array[5], i;
//     for (i = 0; i < 5; i++)
//     {
//         printf("Enter the marks");
//         scanf("%d", &array[i]);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", array[i]);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Marks[%d]\n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The marks at index value [%d] is %d\n", i, marks[i]);
    }
    return 0;
}