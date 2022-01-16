#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char st[80],word[15],lngst[15],ch;
int i,l,j;
printf("Enter the sentence:\n");
i=0;
while((st[i++]=getchar())!='\n');
i--;
st[i]='\0';
l=strlen(st);
i=0;
j=0;
strcpy(word," ");
strcpy(lngst," ");
while(i<=l)
{
ch=st[i];
if(ch==' '||ch=='\0')
{
word[j]='\0';
if(strlen(word)>strlen(lngst))
{
strcpy(lngst,word);
}
j=0;
}
else
{
word[j]=ch;
j++;
}
i++;
}
printf("Longest word %s",lngst);
getch();
}