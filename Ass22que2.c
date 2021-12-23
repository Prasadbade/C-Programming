#include <stdio.h>
int CountSmall(char *str)
{   
   int iCnt=0;
   while(*str != '\0')
   {
       if(*str>='a' && *str<='z')
       {
          iCnt++;
       }
       
       str++;
   }
   
   return iCnt;
    
}
int main()
{
    char arr[20];
    int Count=0;
    printf("enter the string");
    scanf("%[^'\n']s",arr);
    Count=CountSmall(arr);
    printf("the count of small character are%d",Count);
    return 0;
}
