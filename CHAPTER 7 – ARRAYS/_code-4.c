#include<stdio.h>

int main(){
    int table[10],n;
    printf("Enter n:\n");
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        table[i-1]=n*i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",table[i]);
    }
    
    return 0;
}