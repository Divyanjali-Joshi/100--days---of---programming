//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main()
{
    float a=0.0,c=0.0,r;
    printf("enter radius");
    scanf("%f",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("area=%f \n ",a);
    printf("circumference=%f \n",c);
    return 0;

}
