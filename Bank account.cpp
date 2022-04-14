//21BCE10856 

#include<iostream.h>


class Bank_Account
{
	char NameofDepo[50];
	float Balance;
	int AccountNum;
	char AccountType[50];
	
	public:
	     void initialize(void);
	     void deposit(void);
	     void check(void);
	     void display(void);
};

void Bank_Account :: initialize(void)
{
	cout<<"Enter Account Holders Name:";
	gets(NameofDepo);
	cout<<"Enter Account Type:";
	gets(AccountType);
	cout<<"Enter Account Number:";
	cin>>AccountNum;
	cout<<"Enter Balance:";
	cin>>Balance;
}
void Bank_Account :: deposit(void)
{
	int bal;
	cout<<"\nEnter the Amount to Deposit:";
	cin>>bal;
	Balance+=bal;
	cout<<"\nAmount Deposited Successfully\nYour New Balance is:"<<Balance<<"\n";
}
void Bank_Account :: check(void)
{
	int balance;
	cout<<"\nYour Balance:"<<Balance<<"\nEnter amount to Withdraw:";
	cin>>balance;
	if(balance<=Balance)
	{
		Balance-=balance;
		cout<<"Your new balance is:"<<Balance<<"\n";
	}
	else{
		exit(0);
	}
}
void Bank_Account :: display(void)
{
	cout<<"\nName:";
	puts(NameofDepo);
	cout<<"\nBalance:"<<Balance;
}
//==================================

int main()
{
	int i,ch;
	Bank_Account ba;
	ba.initialize();
	ch=1;
	while(ch!=0){
	cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw\n4. Exit\nEnter your Choice\n";
	cin>>i;
	if(i==1)
	{
		ba.display();
	}
	else if(i==2)
	{
		ba.deposit();
	}
	else if(i==3)
	{
		ba.check();
	}
	else if(i==4)
	{
	     break;	
	}
	}
	return 0;
}