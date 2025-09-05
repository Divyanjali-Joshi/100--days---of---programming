# include <stdio.h>
int main()
{
    int n1,n2,prod=0,sum=0,div=0,sub=0,q=0;
    printf("enter 1st no" );
    scanf("%d",&n1);
    printf("enter second no");
    scanf("%d",&n2);
    prod=n1*n2;
    sub=n1-n2;
    sum=n1+n2;

    if( n2==0)
    {
        
        printf("divide not possible   ");
        printf("quotient not possible   ");
        

    }else{
    div=n1/n2;
    q=n1%n2;
    printf("divide=%d  \n",div);
    printf("quotient=%d \n",q);
}
    printf("product=%d \n",prod);
    printf("sum=%d \n",sum);
    printf("subtract=%d \n",sub);
    
    return 0;
}