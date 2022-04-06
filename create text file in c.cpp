#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	FILE *fp;
	fp=fopen("Sample.TXT","w");
	printf("\n Type the text press enter key at end. \n\n");
	while((ch=getchar())!='\n')
	{
		putc(ch,fp);
	} 
	fclose(fp);
}