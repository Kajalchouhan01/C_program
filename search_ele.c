#include <stdio.h>

int main() {
    int n;

    // Input the number of elements in the list
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int items[n];

    // Input the elements of the list
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &items[i]);
    }

    int searchElement;
    int found = 0;

    // Input the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    // Search for the element in the list
    for (int i = 0; i < n; i++) {
        if (items[i] == searchElement) {
            found = 1;
            break;
        }
    }

    // Display the result
    if (found) {
        printf("Element %d found in the list.\n", searchElement);
    } else {
        printf("Element %d not found in the list.\n", searchElement);
    }

    return 0;
}
