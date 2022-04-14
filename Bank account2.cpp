//21BCE10856 

#include<iostream.h>
#include<string.h>


class account
{
public:
char name[30];
int acc_num,acc_type;
int balance;
int amount;


void getData()
{
cout<<"Enter the following details\nCustomer Name :";
gets(name);
cout<<"Account number :";
cin>>acc_num;
cout<<"Account type\n1. Saving Account\n2.Current Account\n";
cin>>acc_type;
cout<<"Account balance:";
cin>>balance;
}


void display()
{
cout<<"\nYour Account Balance :"<<balance;
}


void withdraw()
{
cout<<"\nEnter the amount you want to withdraw :";
cin>>amount;
if(amount>balance){
cout<<"\nInsuficient balance";
}
else{
balance=balance-amount;
}
display();
}

void deposit()
{
	cout<<"\nEnter the Amount to Deposit:";
	cin>>amount;
	balance+=amount;
	cout<<"\nAmount Deposited Successfully\nYour New Balance is:"<<balance<<"\n";
}

};


class cur_acct:public account
{
public:
void panelty()
{
if(balance<200 && acc_type==2)
{
balance=balance-20;
display();
}
}
};


class sav_acct:public account
{
public:
void interest()
{
int t;
cout<<"\nEnter time interval in year:";
cin>>t;
balance=balance*(1+2*t);
display();
}
};


int main()
{
account ac;
int ch,i;
ch=1;
ac.getData();
while(ch!=0){
	cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw\n4. Exit\nEnter your Choice\n";
	cin>>i;
	if(i==1)
	{
		ac.display();
	}
	else if(i==2)
	{
		ac.deposit();
	}
	else if(i==3)
	{
		ac.withdraw();
	}
	else if(i==4)
	{
	     break;	
	}
  }
return 0;
}