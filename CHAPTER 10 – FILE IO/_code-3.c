#include <stdio.h>

int main()
{
    char c;
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("code-3_1.txt", "r");
    ptr2 = fopen("code-3_2.txt", "w");
    while (2)
    {
        c = fgetc(ptr1);
        if (c == EOF)
        {
            break;
        }
        else
        {

            fprintf(ptr2, "%c", c);
            fprintf(ptr2, "%c", c);
        }
    }

    return 0;
}