#include<stdio.h>

int main(){
    char name1[35],name2[35];
    int salary1,salary2;
    FILE *ptr;
    ptr=fopen("code-4.txt","w");

    printf("Enter the name of Enploye 1\n");
    scanf("%s",&name1);
    
    printf("Enter the name of Enploye 2\n");
    scanf("%s",&name2);

    printf("Enter the salary of Enploye 1\n");
    scanf("%d",&salary1);

    printf("Enter the salary of Enploye 2\n");
    scanf("%d",&salary2);

    fprintf(ptr,"%s",name1);
    fprintf(ptr,",");
    fprintf(ptr,"%d",salary1);
    fprintf(ptr,"\n");
    fprintf(ptr,"%s",name2);
    fprintf(ptr,",");
    fprintf(ptr,"%d",salary2);
    return 0;
}