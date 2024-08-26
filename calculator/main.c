#include <stdio.h>

// Function declarations
// These functions perform basic arithmetic operations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    // Variables to store the numbers, operator, and result
    float num1, num2;
    char operator;
    float result;

    // Get the first number from the user
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    // Get the operator from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    // Get the second number from the user
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform the appropriate calculation based on the operator
    switch (operator) {
        case '+':
            result = add(num1, num2);  // Call add function
            break;
        case '-':
            result = subtract(num1, num2);  // Call subtract function
            break;
        case '*':
            result = multiply(num1, num2);  // Call multiply function
            break;
        case '/':
            if (num2 != 0)  // Check for division by zero
                result = divide(num1, num2);  // Call divide function
            else {
                printf("Error! Division by zero.\n");
                return 1;  // Return with error code
            }
            break;
        default:
            printf("Error! Operator is not correct\n");
            return 1;  // Return with error code
    }

    // Print the result of the calculation
    printf("Result: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    return 0;
}

// Function definitions

// Function to add two numbers
float add(float a, float b) {
    return a + b;
}

// Function to subtract two numbers
float subtract(float a, float b) {
    return a - b;
}

// Function to multiply two numbers
float multiply(float a, float b) {
    return a * b;
}

// Function to divide two numbers
float divide(float a, float b) {
    return a / b;
}
