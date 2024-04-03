#include <stdio.h>

// Function to calculate the sum of a variable number of integers
int calculateSum(int numIntegers, int numbers[]) {
    int sum = 0;

    // Iterate through the array and add each element to the sum
    for (int i = 0; i < numIntegers; i++) {
        sum += numbers[i];
    }

    return sum;
}

int main() {
    // Example: array of integers
    int values[] = {10, 20, 30, 40};
    int numIntegers = sizeof(values) / sizeof(values[0]); // Calculate the number of integers in the array

    // Call the function to calculate the sum
    int sum = calculateSum(numIntegers, values);

    // Display the calculated sum
    printf("Sum: %d\n", sum);

    return 0;
}
