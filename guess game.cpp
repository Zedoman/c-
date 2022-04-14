//21BCE10856 

#include <iostream.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>

void guess(int N)
{
	int num, guess, t=0;
	srand(time(0));//seed random number generator as rand() generates only one number repeteadly.
	num = rand() % N; 

	do
	{
		cout << "Enter a guess between 1 and "<<N<<":";
		cin >> guess;

		if (guess > num){
			cout << "Too high!\n\n";
			t++;
		}
		else if (guess < num){
			cout << "Too low!\n\n";
			t++;
		}
		else{
			cout << "\nCorrect! You got it in " << t << " guesses!\n";
		}
	} while (guess != num);
}

int main()
{
	int N;
	cout << "Guess My Number Game\n\n";
	cout<<"Enter the num upto which u want to play:";
	cin>>N;
	guess(N);
	return 0;
}

