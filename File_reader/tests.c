#include <assert.h>
#include "main.c"  // Include the main program file for testing

// Test function to check if the countFileContent function works correctly
void test_countFileContent() {
    // Open a test file in write mode and add sample content
    FILE *testFile = fopen("testfile.txt", "w+");
    fputs("Hello world!\nThis is a test file.\nEnd of file.\n", testFile);
    rewind(testFile);  // Reset the file pointer to the beginning for reading

    int lines, words, characters;  // Variables to store counts
    countFileContent(testFile, &lines, &words, &characters);  // Call the function

    // Assert statements to verify if the counts match expected values
    assert(lines == 3);         // Check if line count is correct
    assert(words == 8);         // Check if word count is correct
    assert(characters == 39);   // Check if character count is correct

    fclose(testFile);  // Close the test file
    printf("All tests passed!\n");  // Print success message if all tests pass
}

int main() {
    test_countFileContent();  // Run the test function
    return 0;  // End the testing program
}
