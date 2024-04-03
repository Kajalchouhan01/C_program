#include <stdio.h>

// Function to perform addition
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to perform subtraction
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to perform multiplication
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to perform division
float divide(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}

int main() {
    float num1, num2;
    char operator;

    // Input first number, operator, and second number from the user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
            break;
        case '/':
            printf("%.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
