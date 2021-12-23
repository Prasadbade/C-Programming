#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo,int bit1,int bit2)
{
 if((bit1<1) || (bit1>32) || (bit2<1) || (bit2>32))
  {
    return false;
  }
  UNIT iResult1=0,iResult2=0;
  UNIT iMask1=0x00000001;
  UNIT iMask2=0x00000001;
  iMask1=iMask1<<(bit1-1);
  iMask2=iMask2<<(bit2-1);
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
 UNIT bit1=0,bit2=0;
 bool bRet=false;
 printf("enter number");
 scanf("%d",&iValue);
 printf("enter first postion");
 scanf("%d",&bit1);
 printf("enter second postion");
 scanf("%d",&bit2);
 bRet=ChkBit(iValue,bit1,bit2);
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