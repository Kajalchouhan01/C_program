#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int number) {
    int reversedNumber = 0;
    int originalNumber = number;

    // Reverse the number
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reversedNumber) {
        return 1; // Palindrome
    } else {
        return 0; // Not palindrome
    }
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome using the function
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
