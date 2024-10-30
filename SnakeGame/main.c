#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

// Game settings
int width = 20, height = 20;  // Width and height of the game field
int gameOver;                 // Flag to track if the game is over
int score;                    // Player's score
int x, y, fruitX, fruitY;     // Coordinates for the snake's head and the fruit
int tailX[100], tailY[100];   // Arrays to store the snake's tail coordinates
int tailLength;               // Length of the snake's tail
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN }; // Directions the snake can move
enum eDirection dir;          // Variable to store the current direction of the snake

// Function to initialize game settings at the start
void setup() {
    gameOver = 0;             // Set game over flag to false
    dir = STOP;               // Initial direction is 'STOP' (no movement)
    x = width / 2;            // Start the snake in the center of the game field
    y = height / 2;
    fruitX = rand() % width;  // Randomly place the fruit within the game field
    fruitY = rand() % height;
    score = 0;                // Initialize score to zero
}

// Function to draw the game field
void draw() {
    system("cls"); // Clear the console screen to redraw everything

    // Draw the top border
    for (int i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");

    // Draw the field with snake and fruit
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)  // Left border
                printf("#");

            if (i == y && j == x)  // Snake's head
                printf("O");
            else if (i == fruitY && j == fruitX)  // Fruit
                printf("F");
            else {
                int print = 0;  // Flag to check if a tail segment should be printed
                for (int k = 0; k < tailLength; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o");  // Print tail segment
                        print = 1;
                    }
                }
                if (!print) printf(" ");  // Empty space if no tail segment
            }

            if (j == width - 1)  // Right border
                printf("#");
        }
        printf("\n");
    }

    // Draw the bottom border
    for (int i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");

    // Display the player's score
    printf("Score: %d\n", score);
}

// Function to handle user input for controlling the snake
void input() {
    if (_kbhit()) {  // Check if a key has been pressed
        switch (_getch()) {  // Get the pressed key
            case 'a': dir = LEFT; break;    // Move left
            case 'd': dir = RIGHT; break;   // Move right
            case 'w': dir = UP; break;      // Move up
            case 's': dir = DOWN; break;    // Move down
            case 'x': gameOver = 1; break;  // Exit the game
        }
    }
}

// Function to update the game logic, including movement and collision detection
void logic() {
    // Store previous position of head for updating the tail
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    // Update tail segments by shifting each segment to the position of the previous segment
    for (int i = 1; i < tailLength; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    
    // Move the snake's head based on the direction
    switch (dir) {
        case LEFT:  x--; break;   // Move left
        case RIGHT: x++; break;   // Move right
        case UP:    y--; break;   // Move up
        case DOWN:  y++; break;   // Move down
        default: break;           // No movement if direction is STOP
    }

    // Check for collision with the walls (game over if true)
    if (x >= width || x < 0 || y >= height || y < 0)
        gameOver = 1;

    // Check for collision with the snake's own tail
    for (int i = 0; i < tailLength; i++) {
        if (tailX[i] == x && tailY[i] == y)  // If head collides with any tail segment
            gameOver = 1;
    }

    // Check if snake's head is on the fruit
    if (x == fruitX && y == fruitY) {
        score += 10;                    // Increase score by 10
        fruitX = rand() % width;        // Respawn fruit at a random position
        fruitY = rand() % height;
        tailLength++;                   // Increase the length of the tail
    }
}

// Main function to run the game
int main() {
    setup();  // Initialize game

    // Main game loop
    while (!gameOver) {
        draw();   // Draw the game field
        input();  // Handle player input
        logic();  // Update game logic
        Sleep(100);  // Delay to control game speed
    }

    printf("Game Over! Final Score: %d\n", score);  // Display score after game over
    return 0;
}
