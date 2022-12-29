#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(nullptr));

	int newNumb{};
	int const sides = 6;
	int side1{}, side2{}, side3{}, side4{}, side5{}, side6{};
	int cube[sides]{ side1, side2, side3, side4, side5, side6 };

	int throwsCount;
	int min{};
	int max{};

	cout << "Cube throws = ";
	cin >> throwsCount;
	cout << '\n' << endl;

	for (int newThrow = 1; newThrow <= throwsCount; newThrow++)
	{
		newNumb = 1 + rand() % 6;
		for (int i = 0; i < sides; i++)
		{
			if (i + 1 == newNumb)
			{
				cube[i] += 1;
				break;
			}
		}
	}

	for (int i = 0; i < sides; i++)
	{
		if (cube[i] > max)
		{
			max = cube[i];
		}
	}

	min = cube[0];

	for (int i = 0; i < sides; i++)
	{
		if (cube[i] < min)
		{
			min = cube[i];
		}
	}

	for (int i = 0; i < sides; i++)
	{
		cout << "Side" << i + 1 << " was " << cube[i] << " times" << endl;
	}
	cout << '\n' << endl;

	for (int i = 0; i < sides; i++)
	{
		if (max == cube[i])
		{
			cout << "Max repetitions = side " << i + 1 << endl;
		}
	}

	for (int i = 0; i < sides; i++)
	{
		if (min == cube[i])
		{
			cout << "Min repetitions = side " << i + 1 << endl;
		}
	}
	return 0;
}
