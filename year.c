//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main()
{
    int n1=0;
    printf("enter an year ");
    scanf("%d",&n1);
    if(n1%4==0 && n1%100!=0 || n1%400==0)
    {
        printf("leap year");
    }else{
        printf("not leap year ");
    }
    return 0;

}
