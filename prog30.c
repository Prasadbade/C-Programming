#include<stdio.h>
int SumEven(int iNo)
{
int isum=0,value=0;

    if(iNo<0)
    {  iNo=-iNo;   }
    
     if(iNo==0)
    {   return 0;   }

    	while(iNo>0)
	{
		
	  value=iNo%10;
         if((value%2)==0)
         {
         isum=isum+value;
         } 
		iNo=iNo/10;
		
	}
  	return isum;

}





int main()
{
    int iValue=0,iret=0;
		printf("enter the number");
		scanf("%d",&iValue);		
		iret=SumEven(iValue);
        printf("%d\n",iret);
}




