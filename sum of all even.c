#include<stdio.h>
void main()
{
     int i,n,s=0;
     printf("Enter the number upto which u want to take sum:");
     scanf("%d",&n);
     for(i=2;i<=n;i+=2)
     {
                      s=s+i;
     }
     printf("Sum of all even nums between 1 to %d = %d",n,s);
     getch();
}     
