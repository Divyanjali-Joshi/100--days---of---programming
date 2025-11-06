//Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main()
{
    int temp=0,n1,n2;
    printf("enter two numbers");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("before swapping \n");
    printf("n1=%d \n",n1);
    printf("n2=%d \n",n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("n1=%d \n",n1);
    printf("n2=%d \n",n2);
    return 0;

}
