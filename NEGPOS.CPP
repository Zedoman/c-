#include<stdio.h>
#include<conio.h>
void main()
{
int x[50],i,n,p=0,ne=0;
printf("\n How many values in the list?");
scanf("%d",&n);
printf("\n Enter all values in the list \n");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
if(x[i]>0)
{
p++;
}
else if(x[i]<0)
{
ne++;
}
}
printf("\n number of positive num: %d",p);
printf("\n number of negative num: %d",ne);
printf("\n");
getch();
}

