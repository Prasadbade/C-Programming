#include <stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{   
   int flag=0;
   while(*str != '\0')
   {
       if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
       {
          flag=1;
       }
       str++;
   }
   if(flag==1)
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
    char arr[20];
    bool Count=false;
    printf("enter the string");
    scanf("%[^'\n']s",arr);
    Count=ChkVowel(arr);
    if(Count==true)
    {
    printf("the string contain vowel");
    }
    else
    {
       printf("the string not contain vowel");    
    }
    return 0;
}
