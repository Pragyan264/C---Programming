#include <stdio.h>
int main(){
   int a,b,c,d;
   printf("Enter the a,b,c,d");
   scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c  && a>d){
        printf("The a is greatest of four number");
    }
    else if(b>a && b>c  && b>d){
        printf("The b is greatest of four number");
    }
    else if(c>a && c>b  && c>d){
        printf("The c is greatest of four number");
    }
    else if(d>a && d>c  && d>b){
        printf("The d is greatest of four number");
    }
    return 0;
}