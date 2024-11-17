#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
// Function declarations for getting computer's choice, determining the winner, and printing the choice
int getComputerChoice();
int getWinner(int playerChoice, int computerChoice);
void printChoice(int choice);

int main() {
    int playerChoice, computerChoice, result;

    // Display a welcome message and instructions
    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Choices: 0 - Rock, 1 - Paper, 2 - Scissors\n");

    // Get the player's choice
    printf("Enter your choice: ");
    scanf("%d", &playerChoice);

    // Validate the player's input
    if (playerChoice < 0 || playerChoice > 2) {
        printf("Invalid choice. Please choose 0, 1, or 2.\n");
        return 1; // Exit the program with an error code
    }

    // Get a random choice for the computer
    computerChoice = getComputerChoice();

    // Print both player's and computer's choices
    printf("You chose: ");
    printChoice(playerChoice);
    printf("Computer chose: ");
    printChoice(computerChoice);

    // Determine the winner
    result = getWinner(playerChoice, computerChoice);

    // Print the result of the game
    if (result == 0) {
        printf("It's a draw!\n");
    } else if (result == 1) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0; // Exit successfully
}

// Returns a random choice for the computer (0 - Rock, 1 - Paper, 2 - Scissors)
int getComputerChoice() {
    srand(time(0)); // Seed the random number generator
    return rand() % 3; // Generate a random number between 0 and 2
}

// Determines the winner of the game
// Returns: 0 = Draw, 1 = Player Wins, 2 = Computer Wins
int getWinner(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        return 0; // Draw
    }

    // Rock beats Scissors, Scissors beats Paper, Paper beats Rock
    if ((playerChoice == 0 && computerChoice == 2) || // Rock vs Scissors
        (playerChoice == 1 && computerChoice == 0) || // Paper vs Rock
        (playerChoice == 2 && computerChoice == 1)) { // Scissors vs Paper
        return 1; // Player Wins
    }

    return 2; // Computer Wins
}

// Prints the choice (0 - Rock, 1 - Paper, 2 - Scissors) as text
void printChoice(int choice) {
    switch (choice) {
        case 0: printf("Rock\n"); break;
        case 1: printf("Paper\n"); break;
        case 2: printf("Scissors\n"); break;
        default: printf("Unknown\n"); // Shouldn't happen
    }
}
