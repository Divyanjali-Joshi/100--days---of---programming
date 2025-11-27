 //Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/
 #include <stdio.h>

enum days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum days m;

    for (m = SUNDAY; m <= SATURDAY; m++) {
        switch (m) {
            case SUNDAY:    printf("SUNDAY = %d\n", m); break;
            case MONDAY:    printf("MONDAY = %d\n", m); break;
            case TUESDAY:   printf("TUESDAY = %d\n", m); break;
            case WEDNESDAY: printf("WEDNESDAY = %d\n", m); break;
            case THURSDAY:  printf("THURSDAY = %d\n", m); break;
            case FRIDAY:    printf("FRIDAY = %d\n", m); break;
            case SATURDAY:  printf("SATURDAY = %d\n", m); break;
        }
    }

    return 0;
}
