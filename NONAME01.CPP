#include<stdio.h>
#include<conio.h>
void main()
{
int big(int a,int b,int c);
int t1,t2,t3,a1,a2,a3,total;
printf("\n enter three test scores:");
scanf("%d%d%d",&t1,&t2,&t3);
printf("\n enter three assignment marks:");
scanf("%d%d%d",&a1,&a2,&a3);
total=big(t1,t2,t3)+big(a1,a2,a3);
printf("\n total score=%d",total);
getch();
}
big(int a,int b,int c)
{
 if(a>b)
  if(a>c)
   return(a);
 else
   return(c);
else
 if(b>c)
  return(b);
 else
  return(c);
}

