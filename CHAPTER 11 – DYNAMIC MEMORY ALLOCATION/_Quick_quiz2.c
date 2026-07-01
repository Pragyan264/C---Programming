#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *ptr;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof (int));
    ptr[0]=5;
    printf("%d\n",ptr[0]);
    return 0;
}