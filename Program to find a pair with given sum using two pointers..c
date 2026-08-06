#include <stdio.h>
int main() {
    int n;
    printf("Enter no of elements in array : ");
    scanf("%d", &n);
    int arr[n];
    // Taking elements of an array.
    printf("Enter elements of array : ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int prefix[n];
    // Creating the prefix sum array
    prefix[0] = arr[0];
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + arr[i];
    }
    int currSum = 0;
    int maxSum = 0;
    // Checking all the subarrays
    for(int L = 0; L < n; L++) {
        for(int R = L; R < n; R++) {
            if(L == 0)
                currSum = prefix[R];
            else
                currSum = prefix[R] - prefix[L-1];
            if(currSum > maxSum)
                maxSum = currSum;
        }
    }
    // printing the result
    printf("Maximum Subarray Sum = %d", maxSum);

    return 0;
}
