// #include<stdio.h>
// int main(){
//     int M;
//     printf("Enter the Marks");
//     scanf("%d",&M);
//     switch(M){
//     case 90>=M:
//     printf("Grade - A");
//     case (80>=M) && (70<=M):
//     printf("Grade - B");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int M;
    printf("Enter the Marks");
    scanf("%d",&M);
    if(90<=M){
        printf("Cogratulation you got GRADE - A");
    }
    else if(90>=M && 80<=M){
        printf("Cogratulation you got GRADE - B");
    }
    else if(80>=M && 70<=M){
        printf("Cogratulation you got GRADE - C");
    }
    else if(70>=M && 60<=M){
        printf("Cogratulation you got GRADE - D");
    }
    else if(60>=M && 50<=M){
        printf("Cogratulation you got GRADE - E");
    }
    else{
        printf("you got failed,GRADE-F");
    }
    return 0;
}