#include <stdio.h>

// Function to calculate the area of a rectangle
float calculateArea(float length, float width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
float calculatePerimeter(float length, float width) {
    return 2 * (length + width);
}

int main() {
    float length, width;

    // Input length and width from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area and perimeter using the functions
    float area = calculateArea(length, width);
    float perimeter = calculatePerimeter(length, width);

    // Display the results
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
