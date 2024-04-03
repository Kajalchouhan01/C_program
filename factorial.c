#include <stdio.h>

// Function to calculate the factorial of a number using recursion
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: factorial of n is n times factorial of (n-1)
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    // Input the number from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using the recursive function
        unsigned long long fact = factorial(number);

        // Display the result
        printf("Factorial of %d is %llu\n", number, fact);
    }

    return 0;
}
