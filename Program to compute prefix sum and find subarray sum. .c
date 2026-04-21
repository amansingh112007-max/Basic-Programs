#include <stdio.h>
int main() {
    int n;
    // Taking number of elements of an array from user.
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int prefix[n];
    // Input array elements
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Creating prefix sum array.
    prefix[0] = arr[0];
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + arr[i];
    }
    // Step 4: Printing prefix array
    printf("\nPrefix Sum Array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", prefix[i]);
    }
    int L, R;
    // Input range
    printf("\n\nEnter starting index (L): ");
    scanf("%d", &L);
    printf("Enter ending index (R): ");
    scanf("%d", &R);
    int sum;
    // Calculate subarray sum
    if(L == 0)
        sum = prefix[R];
    else
        sum = prefix[R] - prefix[L-1];
    // Displaying result
    printf("Sum of subarray from index %d to %d is: %d", L, R, sum);
    return 0;
}
