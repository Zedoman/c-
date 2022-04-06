#include<iostream.h>
using namespace std;
class vehicle
{
	public:
	     string brand;
	     string model;
	     int seat_cap;
	     
	     vehicle(string x, string y,int z)
	     {
     		brand = x;
     		model = y;
     		seat_cap = z;
     	}
 };
 
 int main()
 {
 	vehicle car1 ("Mustang","xyz",6);
 	vehicle car2 ("Jeep","Compass",7);
 	vehicle car3 ("Rolls Royce","Ait",6);
 	cout<<car1.brand<<" "<<car1.model<<" "<<car1.seat_cap<<"\n";
	cout<<car2.brand<<" "<<car2.model<<" "<<car2.seat_cap<<"\n";
	cout<<car3.brand<<" "<<car3.model<<" "<<car3.seat_cap<<"\n";
	return 0;
 }