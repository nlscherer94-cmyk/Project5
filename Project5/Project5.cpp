#include <iostream>
#include <iomanip>

using namespace std;

int main()
{//First pattern iteration
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "+";
		}
		cout << endl;
	}
//Second pattern iteration
	for (int i = 10; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "+";
		}
		cout << endl;
	}
}
