#include<stdio.h>

void DisplayBinary(int ino)
{
  int iDigit=0;
   while(ino!=0)
   {
     iDigit=ino%2;
     printf("%d\t",iDigit);
     ino=ino/2;
   }

}



int main()
{
  int iValue=0;
  printf("enter the number");
  scanf("%d",&iValue);

DisplayBinary(iValue);
return 0;
}