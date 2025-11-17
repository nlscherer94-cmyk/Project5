#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	//Random number 
	int randomNumber = rand() % 100 + 1;

	int guess;
	int guessCount = 0;
	//output to user
	cout << "****GUESSING GAME****" << endl;
	cout << "I am thinking of a number between 1 and 100" << endl;
	cout << "Can you guess what number I am thinking of?" << endl;

	do {
		cout << "\nEnter your guess: ";
		cin >> guess;
		guessCount++;
		//tells user whether they are too high or too low
		if (guess > randomNumber) {
			cout << "\nToo high, try again!" << endl;
		}
		else if (guess < randomNumber) {
			cout << "\nToo low, try again!" << endl;
		}
	} while (guess != randomNumber);//tells user their guess count
	cout << "\nYOU GUESSED IT IN " << guessCount << " GUESSES!" << endl;
	return 0;
}
