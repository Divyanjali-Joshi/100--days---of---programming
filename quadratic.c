  #include <stdio.h>
  #include <math.h>
int main()
{
    int a=0,b=0,c=0;
    float d=0.0,r1=0.0,r2=0.0;
    printf("enter value of a,b,c for quadractic equation \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=b*b-(4*a*c);
    
    if(d>0.0)
    {
        printf("real and different roots \n");
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
         printf("root1=%f \n",r1);
         printf("root2=%f  \n",r2);
    }else if(d<0.0)
    {
        printf("imaginary roots ");
    }else{
        printf("single root ");
         r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("root1=%f \n",r1);
        printf("root2=%f \n",r2);
    }
    return 0;
}