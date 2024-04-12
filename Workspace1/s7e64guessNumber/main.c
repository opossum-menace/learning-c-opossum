#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	srand(time(NULL));
	
    unsigned int guessed_number = 0,  lives = 5;
	unsigned int answer_number = rand() %21;

    while(lives > 0) {

        printf("Please guess a number from 0-20: ");
        scanf("%u", &guessed_number);

        if(guessed_number < 0 || guessed_number > 20) {
            printf("Numbers cant be less than 0 or greater than 20! \n");
            continue;
        }
        if(guessed_number >= 0 && guessed_number <= 20) {

            if(guessed_number == answer_number) {
                printf("Congrats! You won!\n");
                break;
            } else if(guessed_number != answer_number) {
                lives--;
                printf("Sorry, Try again! Remaining lives: %d \n", lives);

                if(guessed_number < 7)
                    printf("Tip: Your guess is lower than the answer!\n");
                if(guessed_number > 7)
                    printf("Tip: Your guess is higher than the answer!\n");
            }
        }

        if(lives == 0)
            printf("Sorry, you're out of lives!\n");
    }

    return 0;
}
