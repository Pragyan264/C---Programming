#include<stdio.h>
int main(){
    int a ;// error 
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("if a%97 is number is divisble by 97. And if it return non zero number it means it is not divisible by 91 \n");
    printf("The value of a%97 is %d",a%97);
    return 0;
}
