#include<stdio.h>
#include<conio.h>
int main()
{
	int i,s=0,d,sum=0;
	printf("Enter num:");
	scanf("%d",&i);
	while(i>0)
	{
		d=i%10;
		s=s*10+d;
		sum=sum+d;
		i=i/10;
	}
	printf("The reverse num is:%d\n",s);
	printf("The sum of reversed num is:%d\n",sum);
	return 0;
}