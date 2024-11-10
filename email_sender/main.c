#include <stdio.h>
#include <string.h>

// Define maximum length for name, company, and email
#define MAX_NAME_LEN 100
#define MAX_COMPANY_LEN 100
#define MAX_EMAIL_LEN 100

// Function to replace placeholders in the template with actual values
void generateEmail(char *template, char *name, char *email, char *company, char *output) {
    // Format the template with provided name, company, and email
    snprintf(output, 500, template, name, company, email);
}

int main() {
    // Email template with placeholders for name, company, and email
    const char *emailTemplate = "Dear %s,\n\nThank you for your interest in our services.\nWe would be happy to collaborate with %s.\nPlease reach out to us at %s for further information.\n\nBest Regards,\nYour Company\n";

    // Variables to store the recipient's details
    char name[MAX_NAME_LEN];
    char company[MAX_COMPANY_LEN];
    char email[MAX_EMAIL_LEN];
    char outputEmail[500];  // Buffer to store the generated email content

    // Example of company contact info; in a real case, read from a file or database
    strcpy(name, "Alice Johnson");        // Set recipient's name
    strcpy(company, "Tech Solutions");    // Set recipient's company
    strcpy(email, "alice@techsolutions.com"); // Set recipient's email address

    // Generate the email by filling in the placeholders in the template
    generateEmail(emailTemplate, name, email, company, outputEmail);

    // Print the generated email to the console
    printf("%s\n", outputEmail);

    return 0;
}
