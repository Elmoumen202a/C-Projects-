#include <stdlib.h>
#include "questions.h"

// Define the number of questions available
#define NUM_QUESTIONS 5

// Array of German questions
char* questions[NUM_QUESTIONS] = {
    "Wie heißt du?",           
    "Wo wohnst du?",            
    "Was machst du beruflich?", 
    "Was sind deine Hobbys?",   
    "Wie spät ist es?"          
};

// Function to return a random question from the array
char* get_random_question() {
    // Generate a random index between 0 and NUM_QUESTIONS-1
    int index = rand() % NUM_QUESTIONS;

    // Return the question at the random index
    return questions[index];
}
