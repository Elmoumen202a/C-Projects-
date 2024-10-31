#include <assert.h>
#include <string.h>
#include "student.h"

// Test the add_student function
void test_add_student() {
    Student students[MAX_STUDENTS];
    int count = 0;
    add_student(students, &count, 1, "Test Student", 90.0);

    // Verify the student was added
    assert(count == 1);
    assert(students[0].id == 1);
    assert(strcmp(students[0].name, "Test Student") == 0);
    assert(students[0].grade == 90.0);
}

// Test the update_student function
void test_update_student() {
    Student students[MAX_STUDENTS];
    int count = 1;
    students[0].id = 1;
    strcpy(students[0].name, "Original");
    students[0].grade = 85.0;

    // Update the student's information
    update_student(students, count, 1, "Updated", 95.0);

    // Verify the update
    assert(strcmp(students[0].name, "Updated") == 0);
    assert(students[0].grade == 95.0);
}

// Test the delete_student function
void test_delete_student() {
    Student students[MAX_STUDENTS];
    int count = 1;
    students[0].id = 1;

    // Delete the student
    delete_student(students, &count, 1);

    // Verify the deletion
    assert(count == 0);
}

// Main function to run all tests
int main() {
    test_add_student();
    test_update_student();
    test_delete_student();

    // Print success message if all tests pass
    printf("All tests passed!\n");
    return 0;
}
