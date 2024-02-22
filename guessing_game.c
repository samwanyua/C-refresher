#include <stdio.h>
#include <stdlib.h>

int main(){
    // Guessing game
    int secretNumber = 5;
    int guess = 0;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf(" %d", &guess);
            guessCount ++;
        }
        else{
            outOfGuesses = 1; // out of guesses
        }
        
    }
    if(outOfGuesses == 1){
        printf("Out of guesses");
    }
    else{
    printf("Hey! You win!\n");
    }
    return 0;
}