#include <stdio.h>

// Function to calculate the average of two integers
float calculateAverage(int num1, int num2) {
    return (float)(num1 + num2) / 2;
}

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Call the function to calculate the average
    float average = calculateAverage(num1, num2);

    // Display the average
    printf("The average of %d and %d is: %.2f\n", num1, num2, average);

    return 0;
}

