#include <stdio.h>
int main()
{
    int marks, i=0;
    printf("Enter the number");
    scanf("%d", &marks);
    if (marks > 90 && 100 >= marks)
    {
         i = 1;
    }
    else if (marks > 80 && 90 >= marks)
    {
         i = 2;
    }
    else if (marks > 70 && 80 >= marks)
    {
         i = 3;
    }
    else if (marks > 60 && 70 >= marks)
    {
         i = 4;
    }
    else if (marks > 50 && 60 >= marks)
    {
         i = 5;
    }
    else if (marks < 50)
    {
         i = 6;
    }
    switch (i)
    {
    case 1:
        printf("Grade-A");
        break;
    case 2:
        printf("Grade-B");
        break;
    case 3:
        printf("Grade-C");
        break;
    case 4:
        printf("Grade-D");
        break;
    case 5:
        printf("Grade-E");
        break;
    case 6:
        printf("Grade-F");
        break;
    default:
        printf("wrong no");
    }
    return 0;
}