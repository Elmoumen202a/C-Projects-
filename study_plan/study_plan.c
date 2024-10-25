#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent a study task with details like title, description, due date, and hours
typedef struct {
    int id;                    // Unique identifier for each task
    char title[50];            // Title of the study task
    char description[100];     // Brief description of the task
    char dueDate[20];          // Due date for the task in "YYYY-MM-DD" format
    int hours;                 // Estimated hours needed for the task
} StudyTask;

// Declare functions for task management
void addTask();
void editTask();
void deleteTask();
void viewTasks();
void loadTasks();
void saveTasks();

int main() {
    int choice;
    loadTasks(); // Load saved tasks from file when program starts

    // Display menu options and process user input
    do {
        printf("\n--- Study Plan Menu ---\n");
        printf("1. Add Task\n2. Edit Task\n3. Delete Task\n4. View Tasks\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Call the corresponding function based on user's choice
        switch (choice) {
            case 1: addTask(); break;         // Add a new task
            case 2: editTask(); break;        // Edit an existing task
            case 3: deleteTask(); break;      // Delete a task
            case 4: viewTasks(); break;       // View all tasks
            case 5: saveTasks(); break;       // Save tasks to file and exit
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5); // Loop until the user chooses to exit

    return 0;
}

// Function to add a new study task
void addTask() {
    // Placeholder: Add task logic here
}

// Function to edit an existing study task
void editTask() {
    // Placeholder: Edit task logic here
}

// Function to delete a study task by its ID
void deleteTask() {
    // Placeholder: Delete task logic here
}

// Function to view all study tasks
void viewTasks() {
    // Placeholder: View tasks logic here
}

// Function to load saved tasks from a file
void loadTasks() {
    // Placeholder: Load tasks logic here
}

// Function to save tasks to a file for persistence
void saveTasks() {
    // Placeholder: Save tasks logic here
}
