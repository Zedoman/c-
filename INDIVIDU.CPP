#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0,m;
printf("enter a nom:");
scanf("%d",&n);
while(n>0)
{
m=n%10;
s=s+m;
n=n/10;
}
printf("sum is=%d",s);
}