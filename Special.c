  #include <stdio.h>
int main()
{
    char ch;
    printf("enter a character ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("lower case ");
    }else if(ch>='A' && ch<='Z')
    {
        printf("Upper case ");
    }else if(ch>='0' && ch<='9')
    {
        printf("digits ");
    }else{
        printf("special characters ");
    }
    return 0;
}