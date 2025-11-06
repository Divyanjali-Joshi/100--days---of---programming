//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main(){
    int n;
    printf("Enter value of num: ");
    scanf("%d", &n);

    float sum = 0.0;
    int numerator = 1;

    for (int i=1; i<=n; i++){
        float term = (float)numerator/ ((numerator == 1)? 1 :(numerator +1));
        sum += term;
        numerator += 2;
    }
    printf("Sum = %f", sum);
   return 0;
}


    
