#include<stdio.h>
#include<stdbool.h>
bool ChkPalindrome(char *brr)
{
  
char *start=NULL;
char *end=NULL;
start=brr;
end=brr;
while(*end !='\0') 
{
   end++;
}
end--;

while(start<end)
{
   if(*start != *end)
    {
       break;
    }
   else
   {
      start++;
      end--;
   }
}
   if(start<end)
   {
      return false;
   }
   else
   {
      return true;
   }

}

int main()
{
 bool bret=false;
 char arr[50];
 printf("enter your string\n");
 scanf("%[^'\n']s",arr);
 bret = ChkPalindrome(arr);
 if(bret==true)
 {
   printf("string is palindrome");
 }
 else
 {
   printf("string is not palindrome");
 }
 return 0;
}