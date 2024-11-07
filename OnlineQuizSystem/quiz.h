#ifndef QUIZ_H
#define QUIZ_H

#define MAX_QUESTIONS 50
#define MAX_LENGTH 256

typedef struct {
    char question[MAX_LENGTH];
    char options[4][MAX_LENGTH];
    int correct_answer;
} Question;

// Function prototypes ,load_questions() and start_quiz() declare functions for loading questions and running the quiz.
int load_questions(const char *filename);
int start_quiz();

#endif // QUIZ_H
