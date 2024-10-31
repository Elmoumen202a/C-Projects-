#include <stdio.h>
#include <string.h>
#include "student.h"

// Function to add a student to the records
void add_student(Student students[], int *count, int id, const char *name, float grade) {
    if (*count >= MAX_STUDENTS) { // Check if max student limit reached
        printf("Error: Maximum student limit reached.\n");
        return;
    }
    // Assign values to the student struct
    students[*count].id = id;
    strncpy(students[*count].name, name, NAME_LENGTH);
    students[*count].grade = grade;
    (*count)++; // Increment the total student count
}

// Function to update a student's details
void update_student(Student students[], int count, int id, const char *name, float grade) {
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) { // Find the student by ID
            // Update student information
            strncpy(students[i].name, name, NAME_LENGTH);
            students[i].grade = grade;
            return;
        }
    }
    printf("Error: Student with ID %d not found.\n", id); // ID not found
}

// Function to delete a student from records
void delete_student(Student students[], int *count, int id) {
    for (int i = 0; i < *count; i++) {
        if (students[i].id == id) { // Find the student by ID
            // Shift records to remove the student
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--; // Reduce the total student count
            return;
        }
    }
    printf("Error: Student with ID %d not found.\n", id); // ID not found
}

// Function to display all students' details
void display_students(const Student students[], int count) {
    for (int i = 0; i < count; i++) {
        // Print each student's ID, name, and grade
        printf("ID: %d, Name: %s, Grade: %.2f\n", students[i].id, students[i].name, students[i].grade);
    }
}
