#include <stdio.h>
#include "student.h"

int main() {
    // Array to store up to MAX_STUDENTS students
    Student students[MAX_STUDENTS];
    int count = 0; // Counter for the number of students

    // Add sample students
    add_student(students, &count, 1, "Alice", 88.5);
    add_student(students, &count, 2, "Bob", 91.0);
    display_students(students, count); // Display current students

    // Update student information
    update_student(students, count, 2, "Bob Updated", 92.0);
    display_students(students, count); // Display after update

    // Delete a student
    delete_student(students, &count, 1);
    display_students(students, count); // Display after deletion

    return 0;
}
