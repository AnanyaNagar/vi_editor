#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int initial_state=1, len, current_state=1;
char a,b,str[10];
printf("Enter KEYWORD : ");
scanf("%s",str);
len=strlen(str);
if(str[0]=='f')
{
if(initial_state == 1)
{
 current_state=2;
}
if(current_state == 2 && str[1] =='o')
{
 current_state = 3;
}
if(current_state == 3 && str[2] == 'r')
{
 current_state=4;
}
}
else if(str[0]=='w')
{
if(initial_state == 1)
{
 current_state=5;
}
if(current_state==5 && str[1]=='h')
{
 current_state=6;
}
if(current_state==6 && str[2]=='i')
{
 current_state=7;
}
if(current_state==7 && str[3]=='1')
{
 current_state==8;
}
if(current_state==8 && str[4]=='e')
{
 current_state=4;
}
}
else if(str[0]=='i')
{
 if(initial_state==1)
 {
 current_state=2;
 }
 if(current_state==2 && str[1]=='f')
 {
 current_state=4;
 }
else
{
 printf("\n String is Rejected.");
}
}
if(current_state==4)
printf("\n The keyword entered is correct");
else
printf("\n Invalid keyword");
getch();
}
