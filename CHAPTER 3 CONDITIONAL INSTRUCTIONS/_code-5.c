#include <stdio.h>
int main()
{
    char ch;
    printf(" Enter the character\n");
    scanf("%c", &ch);
    printf("The ASCII value of character is %d\n", ch);
    if (ch >= 65 && 90 >= ch)
    {
        printf("The character is Uppercase\n");
    }
    else if (ch >= 97 && 122 >= ch)
    {
        printf("The character is Lowercase\n");
    }
    else if (ch >= 49 && 57 >= ch)
    {
        printf("The character is Number\n");
    }
    else
    {
        printf("The character is not uppercase or lowercase nor number\n ");
    }
    return 0;
}