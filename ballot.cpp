//21BCE10856 

#include <iostream>
#include <string> 
#include <iomanip> 

using namespace std;

class Candidate {
public:
	string Name;
	int numVotes;
};

int main() 
{
	Candidate election[6];

	for (int i = 1; i<6; i++) {

		cout << "Please enter the name of candidate " << i << ": ";
		cin >> election[i].Name;
		cout << "How many votes did : " << election[i].Name << " Receive? : ";  
		cin >> election[i].numVotes;
	}

	//to print the ballot list in index manner
	cout<<"Ballot paper list of election:\n";
	
	for (int i = 1; i<6; i++) {
		cout << setw(5) << election[i].Name;
		cout << setw(5) << election[i].numVotes;
		cout << endl;
	}

	//to know the winner
    int max;
	string winner;	

	for (int i = 1; i<6; i++) {
		if (election[i].numVotes > max) {
			max = election[i].numVotes;
			winner = election[i].Name;
		}
	}

	cout << "The winner of the election was " << winner << " had " << max << " votes." << endl;

}