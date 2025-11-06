//Write a program to find the 1’s complement of a binary number and print it.


#include <stdio.h>

int main() {
    char binary[100];

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find 1's complement by flipping bits
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary digit encountered.\n");
            return 1;
        }
    }

    // Output result
    printf("1's Complement = %s\n", binary);

    return 0;
}
