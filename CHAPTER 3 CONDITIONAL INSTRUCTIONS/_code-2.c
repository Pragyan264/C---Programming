#include <stdio.h>
int main(){
    int P,C,M;
    printf("Enter the value of P,C,M");
    scanf("%d%d%d", &P,&C,&M);
    int total=P+C+M;
    int per=(total*100)/300;
    if(per>=40){
        if(P>=33 && C>=33 && M>=33){
            printf("Congratulation,You Passed the exam!");
        }
    }
    else{
        printf("Sorry better luck next time!");
    }
    return 0;
}