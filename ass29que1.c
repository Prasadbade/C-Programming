#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo,UNIT bit)
{
 
  UNIT iResult=0;
  UNIT iMask=0x00000001;
  if((bit<1) || (bit>32))
  {
    return false;
  }
  iMask=iMask<<(bit-1);
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
 UNIT bit=0;
 bool bRet=false;
 printf("enter number");
 scanf("%d",&iValue);
 printf("enter the bit");
 scanf("%d",&bit);
 bRet=ChkBit(iValue,bit);
 if(bRet==true)
 {
   printf("%d bit is ON\n",bit);
 }
else
{
printf("%d bit is OFF\n",bit); }


return 0;
}