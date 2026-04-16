#include <stdio.h>
#include <stdlib.h>

int findMissingNumber(int arr[], int n) {
    // n is the size of array and + 1 as only 1 number is missing.
    // Expected sum of 1 to n+1
    int total = (n + 1) * (n + 2) / 2;
    
    int actual_sum = 0;
    for (int i = 0; i < n; i++) {
        actual_sum += arr[i];
    }
    
    return total - actual_sum;
}

int main() {
    // Array with only one missing number 
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Printing the missing number.
    int missing = findMissingNumber(arr, n);
    printf("Missing number: %d\n", missing);
    
    return 0;
}
