#include <stdio.h>
int CountCapital(char *str)
{   
   int iCnt=0;
   while(*str != '\0')
   {
       if(*str>='A' && *str<='Z')
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
    Count=CountCapital(arr);
    printf("the count of capital character are%d",Count);
    return 0;
}
