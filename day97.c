//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    int age;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;

    
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Age: ");
    scanf("%d", &emp.age);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    
    fp = fopen("employee.dat", "wb");
    if(fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    fp = fopen("employee.dat", "rb");
    if(fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    struct Employee readEmp;
    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    printf("\nEmployee Details from File:\n");
    printf("Name: %s\n", readEmp.name);
    printf("ID: %d\n", readEmp.id);
    printf("Age: %d\n", readEmp.age);
    printf("Salary: %.2f\n", readEmp.salary);

    return 0;
}
