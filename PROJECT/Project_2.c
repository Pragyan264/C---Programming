#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int computer,player;

    // randomtialize random seed
    srand(time(0));

    // Generate random number between 1 and 100
    computer = (rand() % 3) ;
    /*
     0==snake;
     1==water;
     2==gun;
    */
     
    printf("enter the number between 0 to 2\n");
    scanf("%d",&player);
    
    printf("%d\n",computer);
    if (player==0 && computer==0)
    {
        printf("its draw\n");
    }
    else if (player==0 && computer==1)
    {
        printf("you won\n");
    }
    else if (player==0 && computer==2)
    {
        printf("you lose\n");
    }else if (player==1 && computer==0)
    {
        printf("you lose\n");
    }else if (player==1 && computer==1)
    {
         printf("its draw\n");
    }else if (player==1 && computer==2)
    {
        printf("you won\n");
    }else if (player==2 && computer==0)
    {
        printf("you won\n");
    }else if (player==2 && computer==1)
    {
        printf("you lose\n");
    }else if (player==2 && computer==2)
    {
         printf("its draw\n");
    }
    
    return 0;
}
