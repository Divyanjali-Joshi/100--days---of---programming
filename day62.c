 #include <stdio.h>

int maxSubarraySum(int arr[], int n) {
    int max_so_far = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        
        if (current_sum + arr[i] > arr[i])
            current_sum = current_sum + arr[i];
        else
            current_sum = arr[i];

        
        if (current_sum > max_so_far)
            max_so_far = current_sum;
    }

    return max_so_far;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_sum = maxSubarraySum(arr, n);
    printf("Maximum subarray sum = %d\n", max_sum);

    return 0;
}
