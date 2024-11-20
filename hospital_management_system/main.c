#include <stdio.h>
#include <string.h>
#include "hospital.h"

// Declare global variables to store records and counters.
Patient patients[MAX_PATIENTS]; // Array to store patient records.
Doctor doctors[MAX_DOCTORS];    // Array to store doctor records.
Appointment appointments[MAX_PATIENTS]; // Array to store appointment records.
int patientCount = 0, doctorCount = 0, appointmentCount = 0; // Record counters.

// Function to add a new patient to the system.
void addPatient() {
    // Check if the patient limit has been reached.
    if (patientCount >= MAX_PATIENTS) {
        printf("Cannot add more patients. Maximum limit reached.\n");
        return;
    }

    // Collect patient details from the user.
    Patient p;
    p.id = patientCount + 1; // Generate a unique ID for the patient.
    printf("Enter name: ");
    scanf(" %[^\n]", p.name);
    printf("Enter age: ");
    scanf("%d", &p.age);
    printf("Enter gender: ");
    scanf(" %[^\n]", p.gender);
    printf("Enter ailment: ");
    scanf(" %[^\n]", p.ailment);

    // Store the patient record in the global array.
    patients[patientCount++] = p;
    printf("Patient added successfully with ID: %d\n", p.id);
}

// Function to display the list of all patients.
void viewPatients() {
    // Check if there are no patient records.
    if (patientCount == 0) {
        printf("No patients found.\n");
        return;
    }

    // Display each patient's details.
    printf("\nList of Patients:\n");
    for (int i = 0; i < patientCount; i++) {
        printf("ID: %d, Name: %s, Age: %d, Gender: %s, Ailment: %s\n", 
            patients[i].id, patients[i].name, patients[i].age, patients[i].gender, patients[i].ailment);
    }
}

// Main function that drives the program.
int main() {
    int choice; // Variable to store the user's menu choice.

    // Menu-driven interface for user interaction.
    do {
        printf("\nHospital Management System\n");
        printf("1. Add Patient\n");   // Option to add a new patient.
        printf("2. View Patients\n"); // Option to view all patients.
        printf("3. Exit\n");          // Option to exit the program.
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform actions based on the user's choice.
        switch (choice) {
            case 1:
                addPatient(); // Call the function to add a patient.
                break;
            case 2:
                viewPatients(); // Call the function to view all patients.
                break;
            case 3:
                printf("Exiting...\n"); // Exit message.
                break;
            default:
                printf("Invalid choice. Try again.\n"); // Handle invalid input.
        }
    } while (choice != 3); // Keep displaying the menu until the user chooses to exit.

    return 0; // Exit the program successfully.
}
