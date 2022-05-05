#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int initial_state = 1,len,current_state = 1;
char a,b,str[10];
printf("Enter IDENTIFIER : ");
scanf("%s",str);
len = strlen(str);
if(str[0]>= 97 && str[0]<= 122 || str[0] >= 65 && str[0] <= 90)
{
if (initial_state == 1)
{
current_state = 2;
}
for (int i=1;i<=len;i++)
{
if(current_state==2 &&(str[i]>=97 && str[i]<=122 || str[i]>=65 && str[i]<=90) || (str[i]>=0
&& str[i]<=9) || (str[i]=='_'))
{
current_state = 2;
}
}
}
else
{
printf("\n String is Rejected.");
}
if( current_state == 2 )
printf("\n The Identifier entered is correct and the final state is: %d",current_state);
getch();
}
