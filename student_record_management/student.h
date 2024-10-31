#ifndef STUDENT_H
#define STUDENT_H

// Define the maximum number of students and name length
#define MAX_STUDENTS 100
#define NAME_LENGTH 50

// Structure to store student information
typedef struct {
    int id;                // Unique student ID
    char name[NAME_LENGTH];// Student name
    float grade;           // Student grade
} Student;

// Function declarations for managing student records
void add_student(Student students[], int *count, int id, const char *name, float grade);
void update_student(Student students[], int count, int id, const char *name, float grade);
void delete_student(Student students[], int *count, int id);
void display_students(const Student students[], int count);

#endif // STUDENT_H
