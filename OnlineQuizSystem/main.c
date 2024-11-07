#include <stdio.h>
#include "quiz.h"

int main() {
    // Initialize variables
    int score = 0;

    // Load questions from the file
    if (load_questions("questions.txt") == 0) {
        printf("Welcome to the Online Quiz System!\n");

        // Start the quiz and store the score
        score = start_quiz();

        // Display the final score
        printf("Your final score: %d\n", score);
    } else {
        printf("Error loading questions. Please check questions.txt file.\n");
    }

    return 0;
}
