#include<stdio.h>
#include<conio.h>
void main()
{
int a[10] [10], b[10] [10], c[10] [10],m,n,i,j;
printf("\n How many rows and columns?");
scanf("%d %d", &m,&n);
printf("Enter a matrix \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
printf("Enter b matrix \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
}
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
    c[i][j]=a[i][j]-b[i][j];
}
printf("\n Resultant matrix is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
    printf("%6d",c[i][j]);
    printf("\n");
}
getch();
}
