  #include <stdio.h>

int main() {
    int n;
    int sum = 0; 
    

    
    printf("Enter the value of n: ");
    scanf("%d", &n);


    
    printf("odd numbers from 1 to %d: ", n);
    for (int i = 1; i <= n; i =i+2) {
        printf("%d ", i);
        sum=sum+i;
        
    }

    
        printf("\nsum of odd numbers from 1 to =%d", sum);
    

    return 0;
}