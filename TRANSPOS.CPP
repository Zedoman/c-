#include<stdio.h>
#include<conio.h>
void main()
{
int a[10] [10], at[10] [10],m,n,i,j;
printf("\n How many rows and columns?");
scanf("%d %d", &m,&n);
printf("Enter a matrix \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
    at[j][i]=a[i][j];
}
printf("\n Resultant matrix is \n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
    printf("%6d",at[i][j]);
    printf("\n");
}
getch();
}