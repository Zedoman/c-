#include<iostream.h>
#include<conio.h>
class currency
{
long int Rs;
int paise;
public:
currency()
{
Rs=0;
paise=0;
}
void get()
{
cout<<"\nEnter currency in Rs: ";
cin>>Rs;
cout<<"\nEnter currency in Paise: ";
cin>>paise;
}
void operator+=(currency &t)
{
Rs+=t.Rs;
paise+=t.paise;
cout<<"\n\nThe added currncy Rs: "<<Rs<<" "<<paise;
}
void operator-=(currency &t)
{
Rs-=t.Rs;
paise-=t.paise;
cout<<“\n\nThe Subtracted currncy Rs: “<<Rs<<” “<<paise;
}
void put()
{
cout<<Rs<<” “<<paise<<endl;
}
};
void main()
{
currency c1,c2;
clrscr();
c1.get();
c2.get();
cout<<“\n\tFirst currency Rs: “;
c1.put();
cout<<“\n\tSecond currncy Rs: “;
c2.put();
c1+=c2;
c1-=c2;
getch();
}