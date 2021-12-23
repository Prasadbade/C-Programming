#include <stdio.h>

void ToggleString(char *str)
{   
   while(*str != '\0')
   {
       if(*str >='a' && *str<='z')
       {
            printf("%c",*str-32);
       }
       else if(*str >='A' && *str<='Z')
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
    ToggleString(arr);
    return 0;
}
