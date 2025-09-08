 #include <stdio.h>
int main()
{
    int n1=0;
    printf("enter a no ");
    scanf("%d",&n1);
    if(n1>0)
    {
        printf("positive ");
    }else if (n1<0)
    {
        printf("negative ");
    }else{
        printf("zero");
    }
    return 0;
}