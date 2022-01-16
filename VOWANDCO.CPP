#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char st[80];
int i,vow=0,con=0;
printf("enter the sentence: \n");
gets(st);
for(i=0;i<strlen(st);i++)
{
if (st[i]=='a'||st[i]=='A'||st[i]=='e'||st[i]=='E'||st[i]=='i'||st[i]=='I'||st[i]=='o'||st[i]=='O'||st[i]=='u'||st[i]=='U')
{
vow++;
}
else
{
con++;
}
}
printf("vowels= %d\n",vow);
printf("consonents= %d\n",con);
getch();
}