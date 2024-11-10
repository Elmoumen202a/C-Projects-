#include <stdio.h>
#include <string.h>
#include <assert.h>

// Test function to validate email generation based on expected output
void testEmailGeneration() {
    char output[500];  // Buffer to store the generated email
    // Expected email content for comparison
    char *expectedEmail = "Dear Alice Johnson,\n\nThank you for your interest in our services.\nWe would be happy to collaborate with Tech Solutions.\nPlease reach out to us at alice@techsolutions.com for further information.\n\nBest Regards,\nYour Company\n";

    // Generate email with sample data and check if it matches the expected output
    generateEmail("Dear %s,\n\nThank you for your interest in our services.\nWe would be happy to collaborate with %s.\nPlease reach out to us at %s for further information.\n\nBest Regards,\nYour Company\n", "Alice Johnson", "alice@techsolutions.com", "Tech Solutions", output);
    assert(strcmp(output, expectedEmail) == 0);  // Assert that output matches the expected email
}

int main() {
    // Run the test function
    testEmailGeneration();
    printf("All tests passed.\n");  // Confirmation that test passed if no assertion failed
    return 0;
}
