#include<stdio.h>

int main(){
    char strg1[6]="Sujal";
    char strg2[6];
    int i=0;
    for ( i = 0; strg1[i] !='\0'; i++)
    {
        strg2[i]=strg1[i];
    }
    strg2[i]='\0';
    printf("%s\n",strg1);
    printf("%s\n",strg2);
    return 0;
}