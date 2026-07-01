// both are correct
#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr1 = &array[0];
    int *ptr2 = &array[1];
    // Addition of a number to a pointer
    printf("%u\n", ptr1);
    printf("%u\n", ptr2);
    int *ptr3 = ptr1 + 2;
    printf("%u\n", ptr3);
    // Subtraction of number from pointer
    int *ptr4 = ptr2 - 1;
    printf("%u\n", ptr4);
    //Subtraction of one pointer from another
    int prt5=ptr2-ptr1;
    printf("%u\n",prt5);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int oper[4] = {1, 2, 3, 4};
//     int *ptr = &oper[0];
//     int *ptr1 = &oper[1];
//     printf("%u\n", ptr);
//     ptr++; // addition of a number
//     printf("%u\n", ptr);
//     ptr--; // subtraction of a number
//     printf("%u\n", ptr);
//     ptr1 - ptr;//subtraction of one pointer to another 
//     printf("%u\n", ptr1 - ptr);

//     return 0;
// }