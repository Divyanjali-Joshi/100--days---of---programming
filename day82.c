 //Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/


#include <stdio.h>
#include <string.h>

enum signal { RED, YELLOW, GREEN };

int main() {
    char input[10];
    scanf("%s", input);

    enum signal s;

    if (strcmp(input, "RED") == 0)
        s = RED;
    else if (strcmp(input, "YELLOW") == 0)
        s = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        s = GREEN;
    else {
        printf("Invalid input");
        return 0;
    }

    switch (s) {
        case RED:    printf("Stop"); break;
        case YELLOW: printf("Wait"); break;
        case GREEN:  printf("Go"); break;
    }

    return 0;
}
