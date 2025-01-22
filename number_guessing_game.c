#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int random, gusse;
    int no_of_gusse = 0; 
    srand(time(NULL));

    printf("Welcome to the world of Gusseing number\n");
    random = rand() % 100 + 1;

    printf("\nGuessed Number is %d",random);
    do
    {
        printf("\nPlease enter your Guess between(1 to 100):");
        scanf("%d",&gusse);
        no_of_gusse++;

        if (gusse < random){
            printf("Guess a larger number\n");
        }else if (gusse > random){
            printf("Guess a smaller number\n");
        }else{
            printf("Congratulation !!You have successfully guessed the number %d attempsts\n",no_of_gusse);
        }
    } while (gusse != random);
    
        printf("\nBye Bye,Thanks for playing\n");
        printf("Devlope by: Mehta Deven\n");
}