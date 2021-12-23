#include <stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    if((ch>='a') &&(ch<='z')) 
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char ch='\0';
    bool iRet=false;
    printf("enter the character");
    scanf("%c",&ch);
    iRet=ChkSmall(ch);
    if(iRet==true)
    {
        printf("it is an small character");
    }
    else
    {
        printf("it is not a small character");
    }
    return 0;
}
