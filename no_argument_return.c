#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate and return a random integer between 1 and 100
int generateRandomNumber() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    return (rand() % 100) + 1;
}

int main() {
    // Call the function to generate a random number
    int randomNumber = generateRandomNumber();

    // Display the generated random number
    printf("Random number between 1 and 100: %d\n", randomNumber);

    return 0;
}
