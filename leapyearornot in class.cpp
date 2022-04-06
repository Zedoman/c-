#include<iostream.h>

class leapornot{
	public:
	     int leapyearornot(int x){
     		if(x%4==0){
		     	cout<<"Year is Leap year";
		     }
		     else{
     			cout<<"Year is not leap year";
     		}
     	}
};
int main(){
	int x,s;
	cout<<"enter number:";
	cin>>x;
	leapornot obj;
	s=obj.leapyearornot(x);
	return 0;
}