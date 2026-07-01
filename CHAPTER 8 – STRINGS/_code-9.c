#include <stdio.h>
#include <string.h>
int main()
{
    char c = 'c';
    char present[10] = "occurence";
    int count = 0;
    for (int i = 0; present[i] != '\0'; i++)
    {
        if (present[i] == c)
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        printf("Present\n");
    }
    else
    {
        printf("Absent\n");
    }
    return 0;
}