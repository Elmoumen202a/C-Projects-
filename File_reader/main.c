#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to count lines, words, and characters in a file
void countFileContent(FILE *file, int *lines, int *words, int *characters) {
    char ch;
    *lines = *words = *characters = 0;  // Initialize counts to zero
    int inWord = 0;  // Flag to track if we are inside a word

    // Read each character until end of file (EOF)
    while ((ch = fgetc(file)) != EOF) {
        (*characters)++;  // Increment character count for each character

        // Check if the character is a newline to count lines
        if (ch == '\n') (*lines)++;

        // Check if the character is whitespace to detect word boundaries
        if (isspace(ch)) {
            inWord = 0;  // Set inWord to 0 if current character is whitespace
        } else if (!inWord) {
            inWord = 1;  // If entering a new word, set inWord to 1
            (*words)++;  // Increment word count
        }
    }
}

// Main function
int main() {
    FILE *file;  // Pointer to the file
    char filename[100];  // Array to store the filename input by the user
    int lines, words, characters;  // Variables to store counts

    // Prompt the user to enter a filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode ("r")
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        perror("Error opening file");  // Print error message if file can't be opened
        return 1;  // Exit the program with a non-zero value (indicates failure)
    }

    // Call the function to count lines, words, and characters
    countFileContent(file, &lines, &words, &characters);

    // Close the file after reading
    fclose(file);

    // Display the results
    printf("File: %s\n", filename);
    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);

    return 0;  // End the program
}
