//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{
    float h=0.0, m=0.0,s=0.0;
    float t=0.0;
    printf("enter time  ");
    scanf("%f",&t);
    h=(int)t/3600;
    m=(int)t%3600; 
    m=m/60;  
    s= (int)m%3600;
    printf("hours=%f \n ",h);    
    printf("minutes=%f \n ",m);    
    printf("seconds=%f \n ",s);    
    return 0;

}
