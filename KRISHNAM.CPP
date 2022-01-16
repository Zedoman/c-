#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int num,m,count=0,s=0;
printf("Enter a num:");
scanf("%d",&num);
while(num>0)
{
m=num%10;
count=count+1;
s=s+pow(m,count);
num=num/10;
}
printf("result is= %d length of digit is= %d",s,count);
getch();
}
