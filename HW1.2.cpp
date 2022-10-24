#include<iostream>
#include<string>

using namespace std;

int main()
{
	int number{};
	string month[]{ "January", "Fabruary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int daysInMonth[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	cin >> number;
	cout << endl;
	for (int i = 1; i <= number; i++)
	{
		if (number == i)
		{
			cout << "Month - " << month[i - 1] << '\n' << "Days in month - " << daysInMonth[i - 1] << endl;
		}
		else if (number > 12)
		{
			cout << "Month doesn`t exist!" << endl;
			break;
		}
	}
}