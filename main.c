#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {

    int play , play_again=1 , user_guess , secret_number , attempts;

    printf("\t WELCOME TO MY GAME\n");

    printf("> Press 1 to play\n> Press 0 to exit\n   --> ");
    scanf("%d", &play);

    while ( play!=0 && play!=1 ) {
      
        printf("> Press 1 to play\n> Press 0 to exit\n   --> ");
        scanf("%d", &play);
    
    }

    if ( play==0 ) {
    
        printf("GoodBye. Exiting...");
    
    }
    
    else {
    
        char name[50];
        printf("Enter your name: ");
        fgetc(stdin);   
        fgets(name, 50, stdin);
        name[strlen(name)-1]=0 ;
        printf("Nice to meet you %s, I am Youness SBAI. Let's Play !!\n", name);
    
        printf("CONCEPT OF THE GAME: Try to guess the secret number between 1 and 100 with the least attempts.\n");
    
        while (play_again==1) {
    
            srand(time(0));
            secret_number=rand()%100 + 1 ;
            attempts=0 ;
    
            do {
    
                printf("Enter your guess: ");
                scanf("%d", &user_guess);
                attempts++ ;
    
                if (user_guess>secret_number) {
    
                    printf("Too High !! Try again.\n");
    
                }
    
                else {
    
                    if ( user_guess<secret_number ) {
    
                        printf("Too Low !! Try again.\n");
    
                    }
    
                    else {
    
                        printf("Great ! You guessed the secret number in %d attempts.\n\n", attempts);
    
                    }
    
                }
    
            } while ( user_guess!=secret_number);
    
            printf("> Press 1 to play again\n> Press 0 to exit the game\n  --> ");
            scanf("%d", &play_again);
    
        }
    
        printf("GoodBye. Exiting");   
    
    }

}