/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
#include <stdio.h>*/
int main()
{
    int a=0;
    float f=0.0;
    printf("enter no of days \n");
    scanf("%d",&a);
    if(a<=5)
    {
        f=2*a;      
         printf("total fine=%f",f);
    }else if(a>5 && a<=10)
    {
        f=2*5+(a-5)*4;
         printf("total fine=%f",f);
    }else if (a>10 && a<=20){
        f=(2*5)+(4*5)+(a-10)*6;
         printf("total fine=%f",f);
    }else{
        printf("membership cancelled");
    }
    return 0;

}
