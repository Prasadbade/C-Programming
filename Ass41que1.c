#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
int fd=0;
char fname[20];
printf("enter the name of file");
scanf("%s",fname);

fd=open(fname,O_RDONLY);
if(fd==-1)
{
   printf("unable to open");
   return-1;
}
else
{
   printf("file open successfully");
}
}