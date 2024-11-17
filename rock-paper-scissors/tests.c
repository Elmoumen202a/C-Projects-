#include <stdio.h>
#include "main.c" // Include the main game logic for testing

// Function prototypes for test cases
void testWinner();

int main() {
    // Run tests for the game's logic
    testWinner();
    return 0; // Exit successfully
}

// Test the getWinner function to ensure it works correctly
void testWinner() {
    printf("Running tests for getWinner...\n");

    // Test cases: Each array contains [playerChoice, computerChoice, expectedResult]
    int tests[][3] = {
        {0, 0, 0}, // Rock vs Rock -> Draw
        {0, 1, 2}, // Rock vs Paper -> Computer Wins
        {0, 2, 1}, // Rock vs Scissors -> Player Wins
        {1, 0, 1}, // Paper vs Rock -> Player Wins
        {1, 1, 0}, // Paper vs Paper -> Draw
        {1, 2, 2}, // Paper vs Scissors -> Computer Wins
        {2, 0, 2}, // Scissors vs Rock -> Computer Wins
        {2, 1, 1}, // Scissors vs Paper -> Player Wins
        {2, 2, 0}, // Scissors vs Scissors -> Draw
    };

    // Loop through each test case and validate the result
    for (int i = 0; i < 9; i++) {
        int player = tests[i][0];
        int computer = tests[i][1];
        int expected = tests[i][2];

        // Call the getWinner function and compare its result with the expected value
        int result = getWinner(player, computer);
        if (result == expected) {
            printf("Test %d passed!\n", i + 1); // Test passed
        } else {
            // Test failed: Show details of the failure
            printf("Test %d failed! (Player: %d, Computer: %d, Expected: %d, Got: %d)\n",
                i + 1, player, computer, expected, result);
        }
    }
}
