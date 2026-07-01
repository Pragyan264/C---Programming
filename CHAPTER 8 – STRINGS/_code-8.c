#include <stdio.h>
#include<string.h>
int main()
{
    char occurence = 'a';
    char a[8] = "pragyan";
    int count = 0;
    for (int i = 0; i<strlen(a); i++)
    {
        if (a[i] == occurence)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}