/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include <stdio.h>
int main()
{
    int num;
    printf("enter number \n");
    scanf("%d",&num);
    if(num>=90 && num<=100)
    {
        printf("grade A \n");
    }else if(num>=80 && num<=89)
    {
        printf(" grade B \n");
    }else if(num >=70 && num<=79 )
    {
        printf(" grade C \n");
    }else if(num>=60 && num<=69)
    {
        printf(" grade D \n");
    }else{
        printf("grade F ");
    }
    return 0;

}
