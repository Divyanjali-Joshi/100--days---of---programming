     #include <stdio.h>
int main()
{
    int num;
    printf("enter number \n");
    scanf("%d",&num);
    if(num>=90 && num<=100)
    {
        printf("grade A \n");
    }else if(num>=80 && num<=89)
    {
        printf(" grade B \n");
    }else if(num >=70 && num<=79 )
    {
        printf(" grade C \n");
    }else if(num>=60 && num<=69)
    {
        printf(" grade D \n");
    }else{
        printf("grade F ");
    }
    return 0;
}