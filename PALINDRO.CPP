#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0,r,i;
printf("Enter an integer:");
scanf("%d",&n);
i=n;
while(n!=0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(i==s)
{
printf("%d is a palindrome",i);
}
else
{
printf("%d is not a palindrome",i);
}
getch();
}