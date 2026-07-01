#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random;

    // randomtialize random seed
    srand(time(0));

    // Generate random number between 1 and 100
    random = (rand() % 100) + 1;

    // printf("Random Number: %d", random);
    int guesses,no_of_guesses=0;
    do{
        printf("Guess the number\n");
        scanf("%d",&guesses);
        if(guesses>random){
            printf("Lower number please\n");
        }
        else if(guesses<random){
            printf("Higher number please\n");
        }
        else{
            printf("Congratulation!\n");
        }
        no_of_guesses++;
    }while(guesses!=random);
            printf("You guess the number in %d guesses",no_of_guesses);
    return 0;
}
