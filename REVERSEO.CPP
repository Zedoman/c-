#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st[80],rst[80];
int i,j;
printf("\n enter the string:");
scanf("%s",st);
i=0;
j=strlen(st)-1;
while(j>=0)
{
rst[i]=st[j];
i++;
j--;
}
rst[i]='\0';
printf("\n the reverse ord is: %s",rst);
getch();
}