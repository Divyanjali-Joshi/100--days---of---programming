//Write a program to find the sum of digits of a number.


#include <stdio.h>
int main()
{
   int n,c=0;
   printf("enter value of n ");
   scanf("%d",&n);

   while(n!=0)
   {
    int d=n%10;
    c=c+d;
   n=n/10;
   }
   printf("sum of digits=%d",c);
    
   
   return 0;

}
