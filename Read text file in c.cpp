#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
	char ch;
    FILE *fp;
    fp=fopen("Sample.TXT","r");
    printf("\n The content of the tt file is: \n\n");
    while(!feof(fp))//locate the end of a file while reading data.
    {
    	ch=getc(fp);
    	printf("%c",ch);
    }
    fclose(fp);
    return 0;
}