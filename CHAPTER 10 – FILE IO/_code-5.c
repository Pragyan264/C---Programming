#include<stdio.h>

int main(){
    int num;
    FILE *ptr;
    ptr=fopen("code-5.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr=fopen("code-5.txt","w");
    fprintf(ptr,"%d",2*num);
    return 0;
}