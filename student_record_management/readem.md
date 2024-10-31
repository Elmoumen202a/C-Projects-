# Student Record Management System

## Overview

This project is a simple **Student Record Management System** written in C. It allows you to:
1. Add a new student record.
2. Update an existing student record.
3. Delete a student record.
4. Display all student records.

The project includes the main functionality in `student.c`, with a simple command-line interface in `main.c`.

## Project Structure

```bash
student_record_management/
│
├── main.c            # The main program file
├── student.h         # Header file for student struct and function declarations
├── student.c         # Implementation of functions for managing student records
├── readme.md         # Explanation of the project and its functions
└── tests.c           # Tests for various functions
```
## Compilation and Running

To compile and run the program, use the following commands:
```bash
gcc -o main main.c student.c
./main
```
## To run the tests:
```bash
gcc -o tests tests.c student.c
./tests
```

## Functions

**add_student:** Adds a new student to the records.
**update_student:** Updates the name and grade of a student by ID.
**delete_student:** Deletes a student from the records by ID.
**display_students:** Displays all current student records.

## Notes
- This program has a maximum capacity of 100 students.
- Test cases in tests.c help ensure the functions work as expected.