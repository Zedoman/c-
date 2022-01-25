#include<stdio.h>
#include<conio.h>
void main()
{
     int a,*x;
     printf("\nEnter num:");
     scanf("%d",&a);
     x=&a;
     if(*x%5==0 && *x%7!=0)
     {
                printf("Num is divisible by 5 not by 7");
     }
     else if(*x%7==0 && *x%5!=0)
     {
          printf("Num is divisible by 7 not by 5");
     }
     getch();
}             
