#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string fileName;
	string townName;
	//Ask input of user to input data file
	cout << "Enter the name of the data file: ";
	cin >> fileName;

	ifstream inputFile;
	inputFile.open(fileName);
	//Safety loop to allow user error in their input and a chance to try again
	while (!inputFile) {
		cout << "\nFile not found.\n\nPlease enter the name of the data file: ";
		cin >> fileName;
		inputFile.open(fileName);
	}
	//Let user know their file opened successfully and to press enter
	cout << "\nFile was loaded successfully. Press Enter to proceed.";
	cin.ignore();
	cin.get();
	cout << endl;
	//User input name of town
	cout << "Enter the name of the town: ";
	cin >> townName;

	cout << endl;

	cout << townName << " Population Growth" << endl;
	cout << "(each * represents 1,000 people)" << endl;

	int population;
	int year = 1900;
	int interval = 20;

	while (inputFile >> population) {
		cout << year << " ";

		int stars = population / 1000;
		for (int i = 0; i < stars; i++)
		{
			cout << "*";
		}
		cout << endl;

		year = year + interval;
	}

	inputFile.close();

	return 0;

}
