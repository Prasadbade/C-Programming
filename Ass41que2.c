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

fd=creat(fname,0777);
if(fd==-1)
{
   printf("unable to create file");
   return-1;
}
else
{
   printf("file create successfully\n");
}
}