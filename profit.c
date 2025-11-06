//write a program to calculate profit loss percentage
#include <stdio.h>
  
int main()
{
    int sp=0,cp=0,outcome=0;
    
    printf("enter value of sp and cp  \n");
    scanf("%d",&sp);
    scanf("%d",&cp);
    
    
    
    if(sp>cp)
    {
        printf("profit  \n");
        outcome=(sp-cp)*100/cp;
        printf("profit percent=%d",outcome);
        
    }else if(cp>sp)
    {
        printf("loss \n");
        outcome=(cp-sp)*100/cp;
        printf("loss percent =%d",outcome);
    }else{
        printf("no profit no loss \n");
    }
    
    return 0;

}
