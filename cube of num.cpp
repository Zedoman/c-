#include<iostream.h>
#include<conio.h>
int main()
{
	int n,s=0,r;
	cout<<"enter num:";
	cin>>n;
	while (n>0)
	{
		r=n%10;
		s=r*3+s;
		n=n/10;
	}
	cout<<"the num is:"<<s<<"\n";
	return 0;
}