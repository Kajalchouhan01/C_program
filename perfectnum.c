#include <stdio.h>

int main() {
    int start, end, i, j, sum;
    
    // Input range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    
    // Loop through the range
    printf("Perfect numbers within the range %d to %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        sum = 0;
        
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        // If the sum equals the number, it's a perfect number
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
