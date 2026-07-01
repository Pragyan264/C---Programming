#include <stdio.h>
int main(){
   int year;
   printf("Enter the Year");
   scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100!=0){
        printf("The Year is Leap Year");
    }
    else{
        printf("The Year is not Leap Year");
    }
    return 0;
}