 #include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 0 to n, with one missing): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int totalSum = n * (n + 1) / 2;  
    int arraySum = 0;

    for (int i = 0; i < n; i++)
        arraySum += arr[i];

    int missingNumber = totalSum - arraySum;
    printf("Missing number: %d\n", missingNumber);

    return 0;
}
