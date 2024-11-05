#include <stdio.h>
#include "password_manager.h"  // Include the header file for function prototypes

int main() {
    // Authenticate the user before allowing access to password management
    if (!authenticate_user()) {
        printf("Authentication failed. Exiting program.\n");
        return 1;  // Exit if authentication fails
    }

    int choice;
    do {
        // Display the main menu
        printf("\n🔒 Password Management System 🔒\n");
        printf("1. Add new password\n");
        printf("2. View passwords\n");
        printf("3. Delete password\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Process user's menu choice
        switch (choice) {
            case 1:
                add_password();  // Function to add a new password
                break;
            case 2:
                view_passwords();  // Function to view stored passwords
                break;
            case 3:
                delete_password();  // Function to delete a specific password
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);  // Loop until user chooses to exit

    return 0;
}
