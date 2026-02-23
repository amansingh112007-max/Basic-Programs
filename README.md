





#include <stdio.h>
int main() {
    // Array size and elements
    int n = 10;
    int a[10] = {2, -5, 9, -6, 2, -1, 5, -3, 7,0};
    
    //  variable names
    int max_val = a[0];
    int current_sum = a[0];

    printf("Input Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Kadane's Algorithm loop
    for(int i = 1; i < n; i++) {
        // Checking if we should restart the sum or add to it
        if (a[i] > (current_sum + a[i])) {
            current_sum = a[i];
        } else {
            current_sum = current_sum + a[i];
        }

        // Updating  maximum
        if (current_sum > max_val) {
            max_val = current_sum;
        }
    }

    // Final  output
    printf("\nMaximum Subarray Sum  is: %d\n", max_val);

    return 0;
}
