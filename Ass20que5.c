#include <stdio.h>

void DisplaySchedule(char ch)
{
    if((ch=='A') || (ch=='a')) 
    {
        printf("your exam at 7:00 AM");
    }
    else if((ch=='B') || (ch=='b')) 
    {
        printf("your exam at 8:30 AM");
    }
    else if((ch=='C') || (ch=='c')) 
    {
        printf("your exam at 9:20 AM");
    }
    else if((ch=='D') || (ch=='d')) 
    {
        printf("your exam at 10:30 AM");
    }
    else
    {
        printf("--WRONG DIVISION--");
    }
    
}
int main()
{
    char ch='\0';
    printf("enter the character");
    scanf("%c",&ch);
    DisplaySchedule(ch);
    return 0;
}
