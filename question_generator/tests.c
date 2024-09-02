#include <stdio.h>
#include "questions.h"

// Function to test the random question generator
void test_random_question() {
    printf("Testing random question generator...\n");

    // Run the test 5 times to see different random questions
    for (int i = 0; i < 5; i++) {
        // Print the result of each test
        printf("Random Question %d: %s\n", i + 1, get_random_question());
    }
}

// Main function to execute the test
int main() {
    test_random_question();  // Call the test function
    return 0;  // Return 0 to indicate the test ran successfully
}
