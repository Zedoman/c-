#include<iostream.h>
class item
{
	int number;
	float cost;
	public:
	     int getdata(int x, float y);
	     
	     int putdata();
};
int item ::getdata(int x,float y)
{
	number = x;
	cost=y;	
}
inline int item ::putdata()
{
     		cout<<"Number:"<<number<<"\n";
     		cout<<"Cost:"<<cost<<"\n";
}
int main()
{
	item a;
	int x;
	float y;
	cout<<"Enter number:";
	cin>>x;
	cout<<"Enter cost:";
	cin>>y;
	cout<<"obj X"<<"\n";
	a.getdata(x,y);
	a.putdata();
	
	item b;
	int n;
	float m;
	cout<<"Enter number:";
	cin>>n;
	cout<<"Enter cost:";
	cin>>m;
	cout<<"obj Y"<<"\n";
	a.getdata(n,m);
	a.putdata();
}