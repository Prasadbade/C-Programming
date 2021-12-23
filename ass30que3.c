#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo)
{
 
  UNIT iResult1=0,iResult2=0;
  UNIT iMask1=0x00000100;
  UNIT iMask2=0x00000800;
  iResult1= iNo&iMask1;
  iResult2= iNo&iMask2;
  if((iResult1==iMask1) || (iResult2==iMask2))
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
 UNIT iValue=0;
 UNIT bit=0;
 bool bRet=false;
 printf("enter number");
 scanf("%d",&iValue);
 bRet=ChkBit(iValue);
 if(bRet==true)
 {
   printf(" bit is ON\n");
 }
else
{
printf(" bit is OFF\n"); 
return 0;
}
}