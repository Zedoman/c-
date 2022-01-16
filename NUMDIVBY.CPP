#include<stdio.h>
#include<conio.h>
void main()
{
int x[50],i,n,p=0;
printf("\n How many numbers in the list?");
scanf("%d",&n);
printf("\n Enter all values in the list \n");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
if(x[i]%2==0)
{
p++;
}
}
printf("\n nums divisible by 2: %d",p);
getch();
}