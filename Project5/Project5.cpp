#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputFile("LineUp.txt");
	//safety net if file could not be found or opened
	if (!inputFile) {
		cout << "Could not open LineUp.txt" << endl;
		return 0;
	}
	//input variables
	string name;
	string firstInLine;
	string lastInLine;
	int studentCount = 0;

	while (inputFile >> name) {
		studentCount++;
		//Read names and start figuring out first and last
		if (studentCount == 1) {
			firstInLine = name;
			lastInLine = name;
		}
		//Compares the names alphabetically
		if (name < firstInLine) {
			firstInLine = name;
		}
		if (name > lastInLine) {
			lastInLine = name;
		}
	}

	inputFile.close();
	//Output to user
	cout << "Number of students: " << studentCount << endl;
	cout << "First in line: " << firstInLine << endl;
	cout << "Last in line: " << lastInLine << endl;

	return 0;
}
