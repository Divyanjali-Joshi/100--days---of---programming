//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
{
     float si=0.0,p,r,t,m,ci=0.0;
    printf("enter principal,rate and time   ");
    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&t);
    si=(p*r*t)/100;
    m=p*(pow(1+r/100.0,t));
    ci=m-p;
    printf("simple interest \n");
    printf("%f \n",si);
    printf("compound interest=%f \n",ci);
    return 0;

    }
