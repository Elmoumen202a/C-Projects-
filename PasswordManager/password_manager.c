#include <stdio.h>
#include <string.h>
#include "password_manager.h"

// Simple encryption using XOR for demonstration
void encrypt(char *password) {
    for (int i = 0; i < strlen(password); i++) {
        password[i] ^= 0xAA;  // XOR with 0xAA to encrypt each character
    }
}

// Authenticate the user based on hardcoded credentials
int authenticate_user() {
    char username[20];
    char password[20];
    
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    
    // Simple check for demonstration; this should be replaced by a secure check
    if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0) {
        return 1;  // Authentication successful
    } else {
        return 0;  // Authentication failed
    }
}

// Add a new password entry
void add_password() {
    char service[50];
    char password[20];
    
    printf("Enter the service name: ");
    scanf("%s", service);
    printf("Enter the password: ");
    scanf("%s", password);
    
    // Encrypt the password before saving
    encrypt(password);
    
    // Save service and password to file
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    fprintf(file, "%s %s\n", service, password);  // Write service and encrypted password
    fclose(file);
    printf("Password added successfully.\n");
}

// View all stored passwords
void view_passwords() {
    char service[50];
    char password[20];
    
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("No passwords stored yet.\n");
        return;
    }
    
    printf("\nStored passwords:\n");
    while (fscanf(file, "%s %s", service, password) != EOF) {
        // Decrypt the password before displaying
        encrypt(password);
        printf("Service: %s, Password: %s\n", service, password);
    }
    fclose(file);
}

// Delete a password entry
void delete_password() {
    char service[50];
    char password[20];
    char target[50];
    int found = 0;
    
    printf("Enter the service name to delete: ");
    scanf("%s", target);
    
    FILE *file = fopen("data.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    
    if (file == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    
    // Copy all lines except the target service to a new file
    while (fscanf(file, "%s %s", service, password) != EOF) {
        if (strcmp(service, target) == 0) {
            found = 1;  // Mark as found if the service matches
            continue;
        }
        fprintf(temp, "%s %s\n", service, password);  // Copy to temp file
    }
    
    fclose(file);
    fclose(temp);
    
    // Replace the original file with the temp file
    remove("data.txt");
    rename("temp.txt", "data.txt");
    
    if (found) {
        printf("Password deleted successfully.\n");
    } else {
        printf("Service not found.\n");
    }
}
