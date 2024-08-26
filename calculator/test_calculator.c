#include <stdio.h>
#include "main.c"

int main() {
    // Test addition
    if (add(5, 3) == 8)
        printf("Addition test passed!\n");
    else
        printf("Addition test failed!\n");

    // Test subtraction
    if (subtract(10, 3) == 7)
        printf("Subtraction test passed!\n");
    else
        printf("Subtraction test failed!\n");

    // Test multiplication
    if (multiply(4, 2.5) == 10)
        printf("Multiplication test passed!\n");
    else
        printf("Multiplication test failed!\n");

    // Test division
    if (divide(20, 4) == 5)
        printf("Division test passed!\n");
    else
        printf("Division test failed!\n");

    // Test division by zero
    if (divide(5, 0) == 0) // Should print error in main.c
        printf("Division by zero test passed!\n");
    else
        printf("Division by zero test failed!\n");

    return 0;
}
