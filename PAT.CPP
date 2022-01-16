#include<stdio.h>
#include<conio.h>
void main()
{
int rows;
printf("Triangle Pattern 1\n\n");
printf("Enter the rows:");
scanf("%d",&rows);
int i,j;
for(i=1;i<=rows;i++)
{
for(j=i;j<=rows;j++)
{
printf("%d",j);
}
printf("\n");
}
getch();
}