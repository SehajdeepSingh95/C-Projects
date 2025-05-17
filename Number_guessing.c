#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess;
    int no_of_guesses_left=6;
    srand(time(NULL));

    int randomNumber = rand() % 100;
    printf("Number of lives at the beginning of the game=%d\n",no_of_guesses_left);
    while (no_of_guesses_left>0){
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (randomNumber == guess) {
            printf("\nYou guessed right!!\nBingo!!\n");
        
            printf("Thanks for playing!!\n");
            printf("Developed by SehajdeepSingh95");
            break;  // 
        } 
        else if (randomNumber > guess) {
            printf("You guessed wrong!!\nThe number is greater.\n");
            no_of_guesses_left--;
            printf("Number of lives left=%d\n",no_of_guesses_left);
        } 
        else {
            printf("You guessed wrong!!\nThe number is smaller.\n");
            no_of_guesses_left--;
            printf("Number of lives left=%d\n",no_of_guesses_left);
        }
    }

    if (no_of_guesses_left == 0){
        printf("You have lost all your lives!!\nThe correct number was %d\nGAME OVER\n",randomNumber);
        printf("Thanks for playing!!\n");
        printf("Developed by SehajdeepSingh95\n");
    }

    return 0;
}
