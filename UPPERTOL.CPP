#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st[80];
int i;
printf("\n enter a sentence:\n");
gets(st);
for (i=0;i<strlen(st);i++)
{
if(st[i]>='A' && st[i]<='Z')
{
st[i]=st[i]+32;
}
}
printf("\n converted one is \n %s",st);
getch();
}