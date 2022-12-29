#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	int newNumb{};
	int const sides = 6;
	int side1{}, side2{}, side3{}, side4{}, side5{}, side6{};

	int throwsCount;
	int min{};
	int max{};

	cout << "Cube throws = ";
	cin >> throwsCount;
	cout << '\n' << endl;

	for (int newThrow = 1; newThrow <= throwsCount; newThrow++)
	{
		newNumb = 1 + rand() % 6;

		switch (newNumb)
		{
		case 1:
		{
			side1 += 1;
		} break;

		case 2:
		{
			side2 += 1;
		} break;

		case 3:
		{
			side3 += 1;
		} break;

		case 4:
		{
			side4 += 1;
		} break;

		case 5:
		{
			side5 += 1;
		} break;

		case 6:
		{
			side6 += 1;
		} break;
		}
	}

	int cube[sides]{ side1, side2, side3, side4, side5, side6 };

	for (int i = 0; i < sides; i++)
	{
		if (cube[i] > max)
		{
			max = cube[i];
		}
	}

	min = cube[0];

	for (int i = 0; i < 6; i++)
	{
		if (cube[i] < min)
		{
			min = cube[i];
		}
	}

	cout << "Side1 was " << cube[0] << " times" << endl;
	cout << "Side2 was " << cube[1] << " times" << endl;
	cout << "Side3 was " << cube[2] << " times" << endl;
	cout << "Side4 was " << cube[3] << " times" << endl;
	cout << "Side5 was " << cube[4] << " times" << endl;
	cout << "Side6 was " << cube[5] << " times" << '\n' << endl;

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