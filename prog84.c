#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(int iNo)
{
  UNIT iMask=0x00000008;
  UNIT iResult=0;

  iResult= iNo&iMask;
  if(iResult==iMask)
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
 bool bRet=false;
 printf("enter number");
 scanf("%d",&iValue);
 bRet=ChkBit(iValue);
 if(bRet==true)
 {
   printf("4th bit is ON\n");
 }
else
{
   printf("4th bit is OFF\n");
 }


return 0;
}