#include<stdio.h>
#include<stdlib.h>
int Difference(int brr[],int iSize)
{ 
   int i=0,icnt=0,iMin=brr[0],iMax=brr[0],diff;
   for(i=0;i<iSize;i++)
   {
     if(brr[i]<iMin)
     {
       iMin=brr[i];
     } 
     if(brr[i]>iMax)
     {
       iMax=brr[i];
     }   
   }
   diff=iMax-iMin;
     return diff;
}
int main()
{ 
 int *arr=NULL,ians=0,i=0,Size=0;
 printf("enter number of element\n");
 scanf("%d",&Size);
 arr=(int*)malloc(Size*sizeof(int)); 
 printf("enter the elements\n");
 for(i=0;i<Size;i++)
   {
      scanf("%d",&arr[i]);
   } 
 ians=Difference(arr,Size);  
 printf("addition of odd number is:%d",ians);
 free(arr);
 return 0;
}
