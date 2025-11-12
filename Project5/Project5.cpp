#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int startOrganisms;
    double avgdailyIncrease;
    int days;
    //Calulate starting number of organisms
    cout << "What is the starting number of organisms? ";
    cin >> startOrganisms;
    while (startOrganisms < 2) {
        cout << "\nInvalid input, must be above 2.\nPlease try again: ";
        cin >> startOrganisms;
    }
    //Calulate the percentage increase each day
    cout << endl << "What is the average daily population increase as a percentage (Ex. = 5 for 5%)? ";
    cin >> avgdailyIncrease;
    while (avgdailyIncrease < 0) {
        cout << "\nInvalid input, must be a positive number.\nPlease try again: ";
        cin >> avgdailyIncrease;
    }
    //Calulate the amount of days they will multiply
    cout << endl << "What is the amount of days these organisms will multiply? ";
    cin >> days;
    while (days < 1) {
        cout << "\nInvalid input, must be a number greater than 1.\nPlease try again: ";
        cin >> days;
    }
    //Turns user input into a percentage
    double rateofgrowth = avgdailyIncrease / 100;
    //Output a chart of each day that displays the Day and Organisms as they increase
    cout << fixed << setprecision(2);
    cout << "Day" << "   " << "Organisms" << endl;
    for (int day = 1; day <= days; day++) {
        cout << day << "     " << startOrganisms << endl;
        double increase = startOrganisms * rateofgrowth;
        startOrganisms = startOrganisms + increase;
    }
}
