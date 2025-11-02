 #include <stdio.h>


void printFirstNegativeInSubarrays(int arr[], int n, int k) {
    int i, j, found;

    for (i = 0; i <= n - k; i++) {
        found = 0;  

        
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break; 
            }
        }

        
        if (!found)
            printf("0 ");
    }
}

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size!");
        return 0;
    }

    printf("First negative numbers in each subarray of size %d are:\n", k);
    printFirstNegativeInSubarrays(arr, n, k);

    return 0;
}
