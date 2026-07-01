#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter the value of p,r,t");
    scanf("%d%d%d",&p,&r,&t);
    int SIn=(p*r*t);
    float SI=SIn/100.0;
    printf("The simple interest of given input is %f ",SI);
    return 0;
}