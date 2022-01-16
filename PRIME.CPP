#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
printf("enter num:");
scanf("%d",&n);
for (i=2;i<n;i++)
{
if (n%i==0)
{
printf("is not prine");
}
else
{
printf("is prime");
}
getch();
}
}

