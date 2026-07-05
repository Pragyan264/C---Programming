#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = {"Sky is blue"};
    int length = strlen(str);
    char temp[length + 1] ;
    int j = 0;
    for (int i = length - 1; i >= 0; i--, j++)
    {
        temp[j] = str[i];
    }
    for (int i = 0; i < length; i++)
    {
        str[i] = temp[i];
    }
    temp[j]='\0';
    printf("%s", temp);
    return 0;
}   
