#include <stdio.h>
#include <string.h>
#include "quiz.h"

// Array to hold questions
Question questions[MAX_QUESTIONS];
int question_count = 0;

// Function to load questions from a file
int load_questions(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 1; // Error if file doesn't open
    }

    while (fscanf(file, " %[^\n], %[^\n], %[^\n], %[^\n], %[^\n], %d", 
                  questions[question_count].question, 
                  questions[question_count].options[0], 
                  questions[question_count].options[1], 
                  questions[question_count].options[2], 
                  questions[question_count].options[3], 
                  &questions[question_count].correct_answer) == 6) {
        question_count++;
        if (question_count >= MAX_QUESTIONS) break; // Stop if max reached
    }
    fclose(file);
    return 0; // Success
}

// Function to start the quiz
int start_quiz() {
    int score = 0;
    int answer;

    for (int i = 0; i < question_count; i++) {
        printf("%s\n", questions[i].question);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n", j + 1, questions[i].options[j]);
        }
        printf("Your answer: ");
        scanf("%d", &answer);

        // Check if the answer is correct
        if (answer == questions[i].correct_answer) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %d.\n", questions[i].correct_answer);
        }
        printf("\n");
    }
    return score;
}
