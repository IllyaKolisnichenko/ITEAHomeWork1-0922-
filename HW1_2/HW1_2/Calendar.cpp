#include <iostream>
using namespace std;

int main() {
    int m[2]{ 30, 31 };
    int n, year;
    cout << "Enter month and year: ";
    cin >> n >> year;
    switch (n) {
    case 1:
        cout << "January" << endl << endl << m[0] + 1 << " days";
        break;
    case 2:
        cout << "February" << endl;
        if (n == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
            cout << "29 days";
        else cout << "28 days";
        break;
    case 3:
        cout << "March" << endl << endl << m[0] << " days";
        break;
    case 4:
        cout << "April" << endl << m[0] + 1 << " days" << endl;
        break;
    case 5:
        cout << "May" << endl << m[0] << " days" << endl;
        break;
    case 6:
        cout << "June" << endl << m[0] + 1 << " days" << endl;
        break;
    case 7:
        cout << "July" << endl << m[0] << " days" << endl;
        break;
    case 8:
        cout << "August" << endl << m[0] + 1 << " days" << endl;
        break;
    case 9:
        cout << "September" << endl << m[0] << " days" << endl;
        break;
    case 10:
        cout << "October" << endl << m[0] + 1 << " days" << endl;
        break;
    case 11:
        cout << "November" << endl << m[0] << " days" << endl;
        break;
    case 12:
        cout << "December" << endl << m[0] + 1 << " days" << endl;
        break;
    default:
        cout << "ERROR";
    }
}