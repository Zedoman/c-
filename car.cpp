#include <iostream>
using namespace std;

class car {
    private:
        int num;
        
        // friend function
        friend int fr(car c);

    public:
        car() : num(0) {}
        
};

// friend function definition
int fr(car c) {

    //accessing private members from the friend function
    if(c.num==3)
    {
    	cout<<"can use the car";
    }
    else
    {
    	cout<<"cant use";
    }
}

int main() {
	int num;
	cout<<"Enter num:";
	cin>>num;
    car C;
    cout << "car used: " << fr(C);
    return 0;
}