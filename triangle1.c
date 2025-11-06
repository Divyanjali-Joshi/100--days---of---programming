//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
  
int main()
{
    int a=0,b=0,c=0;
    
    printf("enter value of three sides of triangle \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    
    if(a==b && a==c)
    {
        printf("equilateral  \n");
        
    }else if(a!=b && a!=c && b!=c)
    {
        printf("scalen \n");
    }else{
        printf("isoceles ");
    }
    return 0;

}
