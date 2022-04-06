#include<iostream.h>
#include<math.h>

class Calculator
{
	float A,B;
	public:
	     void getnum();
	     float add();
	     float sub();
	     float mul();
	     float div();
};
void Calculator :: getnum()
{
	cout<<"Enter first number:";
	cin>>A;
	cout<<"Enter second number:";
	cin>>B;
}
float Calculator :: add()
{
	return A+B;
}
float Calculator :: sub()
{
	return A-B;
}
float Calculator :: mul()
{
	return A*B;
}
float Calculator :: div()
{
	return A/B;
}
int main(){
	int ch;
	Calculator calc;
	cout<<"Enter 1 Add 2 Numbers"<<"\nEnter 2 Subtract 2 Numbers"<<"\nEnter 3 Multiply 2 Numbers"<<"\nEnter 4 Divide 2 Numbers"<<"\nEnter 5 To Quit"<<"\n";
	do{
		cout<<"\nEnter Choice: ";
		cin>>ch;
		
		switch(ch){
			case 1:
			     calc.getnum();
			     cout<<"Result: "<<calc.add()<<endl;
			     break;
			case 2:
			     calc.getnum();
			     cout<<"Result: "<<calc.sub()<<endl;
			     break;
			case 3:
			     calc.getnum();
			     cout<<"Result: "<<calc.mul()<<endl;
			     break;
			case 4:
			     calc.getnum();
			     cout<<"Result: "<<calc.div()<<endl;
			     break;	 
			case 5: break;	 	      
		}
	}while(ch!=5);
	return 0;
}
