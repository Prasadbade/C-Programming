#include <stdio.h>

void ConvertLower(char *str)
{   
   while(*str != '\0')
   {
       if(*str >='A' && *str<='Z')
       {
            printf("%c",*str+32);
       }
       else
       {
            printf("%c",*str);
       }
       
       
       str++;
   }
  
}
int main()
{
    char arr[20];
    printf("enter the string");
    scanf("%[^'\n']s",arr);
    ConvertLower(arr);
    return 0;
}
