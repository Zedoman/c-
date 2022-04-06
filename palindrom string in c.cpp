#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char st[20],rst[20];
	int i,j;
	printf("\n Enter the string:");
	gets(st);
	
	i=0;
	j=strlen(st)-1;
	while(j>=0)
	{
		rst[i]=st[j];
		i++;
		j--;
	}
	rst[i]='\0';
	if(strcmp(st,rst)==0)
	{
		printf("\n %s is a palindrom string",st);
	}
	else
	{
	    printf("\n %s is not a palindrom string",st);
	}
	return 0;
}