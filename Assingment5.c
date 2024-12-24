//way to make a hangman game
#include <stdio.h>
#include <string.h>

int main()
{
    char word[] = "masterpiece";  // The word to guess
    int wordLength = strlen(word);
    int guessed[wordLength];  // Array to track guessed letters
    memset(guessed, 0, sizeof(guessed));  // Initialize guessed array to 0

    int chances = 3;
    char guess;

    printf("This is  Hangman game\n");
    printf("Guess the word(all lower case). You have %d chances.\n", chances);

    while (chances > 0) {
        // Display the current state of the word
        for (int i = 0; i < wordLength; i++) {
            if (guessed[i]) {
                printf("%c ", word[i]);
            } else {
                printf("_");
            }
        }
        printf("\n");

        // Prompt the player to enter a guess
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        // Check if the guess is in the word
        int correct = 0;
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = 1;
                correct = 1;
            }
        }

        // If the guess was incorrect, reduce chances
        if (!correct) {
            chances--;
            printf("Incorrect guess! You have %d chances left.\n", chances);
        }

        // Check if the word is fully guessed
        int wordGuessed = 1;
        for (int i = 0; i < wordLength; i++) {
            if (!guessed[i]) {
                wordGuessed = 0;
                break;
            }
        }

        if (wordGuessed) {
            printf("Congratulations! You've guessed the word: %s\n", word);
            return 0;
        }
    }

    // If out of chances, the game is lost
    printf("You've run out of chances! The man gets hanged.\n");
    printf("The word was: %s\n", word);

    return 0;
}