#include <assert.h>
#include "study_plan.h"  // Include your main functions here

// Test function for adding a task
void testAddTask() {
    // Verifies that adding a task works as expected
    assert(addTask("Math", "Study Algebra", "2024-12-01", 5) == 1);
}

// Test function for editing a task
void testEditTask() {
    // Verifies that editing a task's details works correctly
    assert(editTask(1, "Math", "Advanced Algebra", "2024-12-05", 4) == 1);
}

// Test function for deleting a task
void testDeleteTask() {
    // Checks that deleting a task removes it from the list
    assert(deleteTask(1) == 1);
}

// Test function for viewing tasks (manual verification)
void testViewTasks() {
    // Displays all tasks for manual review
    viewTasks();
}

int main() {
    // Run all test functions to verify the correctness of task management features
    testAddTask();
    testEditTask();
    testDeleteTask();
    testViewTasks();
    
    printf("All tests passed!\n"); // Notify that all tests are successful
    return 0;
}
