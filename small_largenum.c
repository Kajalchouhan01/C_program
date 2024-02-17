#include <stdio.h>

int main() 
{
    int num, smallest, largest;
    char choice;

    // Input the first number
    printf("Enter number: ");
    scanf("%d", &num);

    // Assume the first number as both smallest and largest
    smallest = largest = num;

    // Ask if the user wants to input more numbers
    printf("Do you want to enter more numbers? (y/n): ");
    scanf(" %c", &choice);

    // Continue inputting numbers until the user decides to stop
    while (choice == 'y' || choice == 'Y')
    {
        printf("Enter number: ");
        scanf("%d", &num);

        // Update smallest and largest if necessary
        if (num < smallest)
        {
            smallest = num;
        }
        if (num > largest)
        {
            largest = num;
        }

        // Ask if the user wants to input more numbers
        printf("Do you want to enter more numbers? (y/n): ");
        scanf(" %c", &choice);
    }

    // Print the smallest and largest numbers
    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}
