// Write a Program to find occurence of letter.
#include<stdio.h>

int main(){
    char a[50];
    int count = 0;
    printf("Enter string : ");
    gets(a);
    
    int i=0;
    while (a[i]!='\0')
    {
        if (a[i]=='e')
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    
    return 0;
}