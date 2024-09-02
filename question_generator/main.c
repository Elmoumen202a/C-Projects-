#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "questions.h"

// The main function where the program execution begins
int main() {
    // Seed the random number generator with the current time
    srand(time(0));  

    // Print a header message
    printf("Random German Question:\n");

    // Generate and print a random question
    printf("%s\n", get_random_question());

    return 0;  // Return 0 to indicate the program ended successfully
}
