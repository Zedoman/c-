#include<stdio.h>
#include<conio.h>
void main()
{
int x[50],n,i,seclage,large;
printf("how many nums");
scanf("%d",&n);
printf("\n Enter all numbers \n");
for(i=0;i<n;i++)
scanf("%d",&x[i]);
if (x[0]>x[1])
{
large=x[0];
seclage=x[1];
}
else
{
large=x[1];
seclage=x[0];
}
for(i=0;i<n;i++)
{
if (large<x[i])
{
seclage=large;
large=x[i];
}
else if (seclage<x[i])
{
seclage=x[i];
}
}
printf("large- %d \n seclarge- %d \n",large,seclage);
getch();
}