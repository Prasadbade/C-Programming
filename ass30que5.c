#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UNIT;
UNIT ChkBit(UNIT iNo,int bit1,int bit2)
{
 if((bit1<1) || (bit1>32) || (bit2<1) || (bit2>32))
  {
    printf("invalid bit");
    return false;
  }
  if(bit1>bit2)
  {
    printf("invalid range");
    return false;
  }
  int i=0;
  UNIT iResult1=0;
  int Ans=0;
  UNIT iMask1=0x00000001;

  iMask1=iMask1<<(bit1-1);
  Ans=bit2-bit1;
  iResult1=iNo^iMask1;
  for(i=1;i<=Ans;i++)
  {
    iMask1 = iMask1<<1;
    iResult1=iResult1^iMask1;
    
  }
   
  return iResult1;
}

int main()
{
 UNIT iValue=0;
 UNIT bit1=0,bit2=0;
 UNIT iAns=0;
 printf("enter number");
 scanf("%d",&iValue);
 printf("enter start postion");
 scanf("%d",&bit1);
 printf("enter end postion");
 scanf("%d",&bit2);
 iAns=ChkBit(iValue,bit1,bit2);
printf(" after toggling bit number is \t%d",iAns); 
return 0;
}