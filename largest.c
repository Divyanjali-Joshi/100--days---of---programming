   #include <stdio.h>
  
int main()
{
    int a=0,b=0,c=0;
    
    printf("enter value of three numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    
    if(a>b && a>c)
    {
        printf("largest number is=%d \n",a);
        
    }else if(b>a && b>c)
    {
        printf("largest number is=%d",b);
    }else{
        printf("largest number is=%d",c);
    }
    return 0;
}