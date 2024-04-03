#include <stdio.h>

// Function to print the multiplication table for a given number
void printMultiplicationTable(int n) {
    printf("Multiplication table for %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function to print the multiplication table
    printMultiplicationTable(number);

    return 0;
}
