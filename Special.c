//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

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
