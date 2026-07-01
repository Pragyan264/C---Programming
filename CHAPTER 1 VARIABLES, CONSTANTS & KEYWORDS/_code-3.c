#include<stdio.h>
int main(){
    int c; 
    printf("Enter the value of celcius");
    scanf("%d",&c);
    float f=(9*c)/5+32;
    printf("The Temprature in fahrenheit is %f",f);
    return 0;
}