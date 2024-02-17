#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find GCD
    int a = num1;
    int b = num2;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Find LCM
    lcm = (num1 * num2) / gcd;

    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
