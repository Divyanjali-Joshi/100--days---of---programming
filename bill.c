/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

#include <stdio.h>
int main()
{
    int a=0;
    float f=0.0;
    printf("enter no of units \n");
    scanf("%d",&a);
    if(a<=100)
    {
        f=5*a;      
         printf("total fine=%f",f);
    }else if(a>100 && a<=200)
    {
        f=5*100+(a-100)*7;
         printf("total fine=%f",f);
    }else if (a>200 && a<=300){
        f=(5*100)+(7*100)+(a-200)*10;
         printf("total fine=%f",f);
    }else{
        f=(5*100)+(7*100)+(10*100)+(a-300)*12;
        printf("total fine=%f",f);

    }
    return 0;

}
