#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
int fd=0,iret=0,ians=0;
char fname[20],buffer[10],str[40];

printf("enter the name of file");
scanf("%s",fname);
printf("enter the string to append");
scanf(" %[^'\n']s",str);

fd=open(fname,O_RDWR);
if(fd==-1)
{
   printf("unable to open");
   return-1;
}
lseek(fd,0,2); 
 write(fd,str,strlen(str));
 lseek(fd,0,0);
 printf("content in file are:\n");
while((iret=read(fd,buffer,10))!=0)
{
    write(1,buffer,iret);
}
}