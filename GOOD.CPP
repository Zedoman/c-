#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
printf("enter choice");
scanf("%d",&ch);
switch(ch);
{
case1:
printf("Good Morning");
break;
case2:
printf("Good Afternoon");
break;
case3:
printf("Good Evening");
break;
case4:
printf("Good Night");
default:
printf("wrong input");
}
getch();
}