#include <stdio.h>

// Function to calculate the GCD of two numbers using the Euclidean algorithm
int calculateGCD(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the GCD using the function
    int gcd = calculateGCD(num1, num2);

    // Display the result
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
