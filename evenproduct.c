 #include <stdio.h>

int main() {
    int n;
    long  product = 1; 
    

    
    printf("Enter the value of n: ");
    scanf("%d", &n);


    
    printf("Even numbers from 1 to %d: ", n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
        product *= i;
        
    }

    
        printf("\nProduct of even numbers from 1 to %d = %lld\n", n, product);
    

    return 0;
}