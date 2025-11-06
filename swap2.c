//Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
    int sum=0,n1,n2;
    printf("enter two numbers");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("before swapping \n");
    printf("n1=%d \n",n1);
    printf("n2=%d \n",n2);
    sum=n1+n2;
    n1=sum-n1;
    n2=sum-n2;
    printf("n1=%d \n",n1);
    printf("n2=%d \n",n2);
    return 0;

} 
