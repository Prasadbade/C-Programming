#include <stdio.h>

void DisplayReverse(char *str)
{   
    int length=0;
    char ch='\0';
   while(*str != '\0')
   {
       length++;
       str++;
   }
  while(length>=0)
   {
       printf("%c",*str);
       str--;
       length--;
   }
   

}
int main()
{
    char arr[20];
    printf("enter the string");
    scanf("%[^'\n']s",arr);
    DisplayReverse(arr);
    return 0;
}
