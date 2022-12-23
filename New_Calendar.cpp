#include <iostream>
#include <string>
using namespace std;

void main() {
    string months[12]{ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    int days_per_month[2]{ 30, 31 };
    int number_from_input;
    cout << "Enter number of month from 1 to 12: ";
    cin >> number_from_input;


    if (number_from_input < 1 || number_from_input > 12) {
        main();
        return;
    }
    if (number_from_input == 2) {
        cout << months[1] << " 28 days";
        return;
    }
    if (number_from_input % 2 == 0) cout << days_per_month[0] << " days " << months[number_from_input - 1];
    if (number_from_input % 2 == 1) cout << days_per_month[1] << " days " << months[number_from_input - 1];

};
