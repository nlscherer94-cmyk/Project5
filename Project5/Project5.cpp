#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string fileName;
	string townName;

	cout << "Enter the name of the data file: ";
	cin >> fileName;

	ifstream inputFile;
	inputFile.open(fileName);

	if (!inputFile) {
		cout << "\n\nFile not found\n\n";
		return 0;
	}

	cout << "Enter the name of the town: ";
	cin >> townName;

	cout << endl;

	cout << "File was loaded successfully. Press Enter to proceed.";
	cin.ignore();
	cin.get();
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
