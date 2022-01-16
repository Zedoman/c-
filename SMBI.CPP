#include<stdio.h>
#include<conio.h>
void main()
{
int x[100],n,i,big,small;
printf("\n how many nums?");
scanf("%d",&n);
printf("\n enter all those nums \n");
for (i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
big=x[0];
for (i=0;i<n;i++)
{
if (x[i]>big)
{
big=x[i];
}
}
small=x[0];
for (i=0;i<n;i++)
{
if (x[i]<small)
{
big=x[i];
}
}
