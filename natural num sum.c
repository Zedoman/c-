#include<stdio.h>
void main()
{
     int i,n,s=0;
     printf("Enter the number upto which u want to take sum:");
     scanf("%d",&n);
     for(i=0;i<=n;i++)
     {
                      s=s+i;
     }
     printf("Sum of first %d natural nums=%d",n,s);
     getch();
}     
