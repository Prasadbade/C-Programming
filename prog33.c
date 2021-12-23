#include<stdio.h>
#include<stdbool.h>
bool ChkPalindrom(int iNo)
{

int itemp=iNo,iRev=0,value=0;
    while(iNo!=0)
     	{
		
        	value=iNo%10;
             iRev=(iRev*10)+value;
		     iNo=iNo/10;
		
	    }
       if(itemp==iRev)
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
    int iValue=0;
    bool iret=false;
		printf("enter the number\t");
		scanf("%d",&iValue);		
      	iret=ChkPalindrom(iValue);
          if(iret == true)
          {       
        printf("number is palindrom");
          }
          else
       {
         printf("number is not palindrom");
       } 
}