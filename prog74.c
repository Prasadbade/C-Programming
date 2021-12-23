#include<stdio.h>

int ChkVOWEL(char *brr)
{
   int Count=0;
   if(brr == NULL)
   {
      return -1;
   }
   while(*brr!='\0')
   {
     if((*brr=='a') || (*brr=='e') || (*brr=='i') || (*brr=='o') || (*brr=='u') || (*brr=='A') || (*brr=='E') || (*brr=='I') || (*brr=='O') || (*brr=='U'))
      {
        Count++;
      }
      brr++;
    }
    return Count;
}

int main()
{
   int iCnt=0;
char arr[50];
printf("enter your name\n");
scanf("%[^'\n']s",arr);
iCnt = ChkVOWEL(arr);
if(iCnt>0)
{
   printf("the count of vowel is %d",iCnt);
}
else

{
   printf("vowels are absent in string");
}
 return 0;
}