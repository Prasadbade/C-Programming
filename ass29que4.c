#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

UNIT ChkBit(UNIT iNo,UNIT bit)
{
 
  UNIT iResult=0;
  UNIT iMask=0x00000001;
  if((bit<1) || (bit>32))
  {
    return false;
  }
  iMask=iMask<<(bit-1);
  iResult= iNo^iMask;
  return iResult;

}

int main()
{
 UNIT iValue=0;
 UNIT bit=0;
 UNIT iAns=0;
 printf("enter number");
 scanf("%d",&iValue);
 printf("enter the bit");
 scanf("%d",&bit);
 iAns=ChkBit(iValue,bit);
 printf("%d",iAns);

return 0;
}