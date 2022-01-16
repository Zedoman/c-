#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,c=0;
printf("Enter the lower limit:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(i && i+2)
{
printf("\n the twin number is:(%d,%d)",i,i+2);
c=c+1;
}
}
printf("\n\n Total prime nums pair is: %d",c);
getch();
}
