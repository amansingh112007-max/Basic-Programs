#include <stdio.h>

int main() {

    int arr[50];          // Declare array with maximum size
    int n, i;             // n = number of elements
    int choice;           // User choice for switch case
    int pos, element;     // Position and element

    // Step 1: Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Read array elements
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Display menu
    printf("\n1. Insert an element");
    printf("\n2. Delete an element");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    // Step 4: Switch case
    switch (choice) {

        case 1:
            // INSERT OPERATION
            printf("Enter element to insert: ");
            scanf("%d", &element);

            printf("Enter position to insert (1 to %d): ", n + 1);
            scanf("%d", &pos);

            // Shift elements to the right
            for (i = n - 1; i >= pos - 1; i--) {
                arr[i + 1] = arr[i];
            }

            // Insert the element
            arr[pos - 1] = element;
            n++;    // Increase size

            break;

        case 2:
            // DELETE OPERATION
            printf("Enter position to delete (1 to %d): ", n);
            scanf("%d", &pos);

            // Shift elements to the left
            for (i = pos - 1; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;    // Decrease size
            break;
        default:
            printf("Invalid choice");
    }
    // Step 5: Display updated array
    printf("\nUpdated array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

