#include <stdio.h>

int main() {
    int arr[50];        // Declare array
    int n, i;           // n = number of elements
    int key;            // Element to be searched
    int found = 0;      // Flag variable (0 = not found)

    // Step 1: Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Read array elements
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Step 3: Read the element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Step 4: Perform Linear Search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            found = 1;      // Element found
            break;          // Stop searching
        }
    }
    // Step 5: If element not found
    if (found == 0) {
        printf("Element not found in the array\n");
    }
    return 0;
}
