#include <stdio.h>

int main() {
    int base,result=1;
    int exponent, i;

    // Input base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for (i = 0; i < exponent; i++) {
        result =result* base;
    }

    // Display the result
    printf("Result: %d\n", result);

    return 0;
}