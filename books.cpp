#include<iostream.h>

class books
{
	char author[30];
	char title[30];
	char publisher[30];
	int price;
	int copies;
	int stock;
	public:
	     void setData(void);
	     void check(void);
};

void books :: setData(void)
{
	cout<<"\nEnter the following details:";
	cout<<"\nAuthor's Name:";
	gets(author);
	cout<<"\nBook Title:";
	gets(title);
	cout<<"\nPublisher:";
	gets(publisher);
	cout<<"\nPrice of the book:";
	cin>>price;
	cout<<"\nNumber of copies:";
	cin>>copies;
	stock=1;
}

void books :: check(void)
{
	char t[30],aut[30];
	int cop;
	cout<<"\nEnter the following details to search for book:\n";
	cout<<"\nTitle of the book:";
	gets(t);
	cout<<"\nEnter Author's Name:";
	gets(aut);
	cout<<"\nNumber of copies:";
	cin>>cop;
	if(strcmp(t,title)&&strcmp(aut,author)&&(cop<=copies))
	{
		cout<<"\nBook is available here\nPrice="<<cop*price;
		copies-=cop;
	}
	else{
		cout<<"Not Available";
	}
}
int main()
{
	books bk;
	bk.setData();
	bk.check();
	return 0;
}