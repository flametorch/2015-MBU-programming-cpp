#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 10); // random number between 1 and 10
	
	// declare variable to store guess of user and set to 0
	// declare variable as counter for number of guesses
	
	int score = 0;
	int numguesses = 0;

	for(;;)
	{
		// increment guess counter
			numguesses = numguesses +1;
		// read input from user
		cout << "input your guessing number\n";
		cin >> score;
	
		
		// compare input from user to random number
		// print out winner, too high or too low message
		if (score == random_number)
			{
				cout << "you are a winner!\n";
				break;
			}
		else if (score > random_number)
			{
				cout << "your guess is too high!\n";
			}
		else if (score < random_number)
		{
			cout << "your guess is too low!\n";
		}
	}

	// print message with number of guesses
	cout << "my guess was" << numguesses << endl;

	return 0;
}
