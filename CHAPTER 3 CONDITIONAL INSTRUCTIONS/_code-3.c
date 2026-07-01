#include <stdio.h>
int main(){
   float income;
   printf("Enter the income(in lakh)");
   scanf("%f",&income);
    if(income<2.5){
        printf("There is no tax below 2.5L Income");
    }
    else if(income>=2.5 && 5.0>income){
        printf("The Tax is 5 percentage of income is %f rupess",income*100000/100*5);
    }
    else if(income>=5.0 && 10.00>income){
        printf("The Tax is 20 percentage of income is %f rupess",income*100000/100*20);
    }
    else if(income>=10.00 ){
        printf("The Tax is 30 percentage of income is %f rupess",income*100000/100*30);
    }
    return 0;
}