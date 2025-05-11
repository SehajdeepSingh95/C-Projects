#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int randomNumber = rand() % 100;
    int a;

    while (1) {
        printf("Guess the number: ");
        scanf("%d", &a);

        if (randomNumber == a) {
            printf("You guessed right!!\nBingo!!\n");
            break;  // 
        } 
        else if (randomNumber > a) {
            printf("You guessed wrong!!\nThe number is greater, Try again.\n");
        } 
        else {
            printf("You guessed wrong!!\nThe number is smaller, Try again.\n");
        }
    }

    return 0;
}
