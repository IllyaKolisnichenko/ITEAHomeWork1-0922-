#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(nullptr));

    unsigned int dice{}, count_rolls{};
    const int sides_cube{6};
    unsigned int array_dices[6]{};

    std::cout << "Enter count of rolls:" << std::endl;
    std::cin >> count_rolls;
    if (count_rolls > 0)
    {
        for (int i{}; i < count_rolls; i++)
        {
            dice = rand() % sides_cube + 1;
            array_dices[dice - 1]++;
        }

        unsigned int max_value_dices{0};
        unsigned int min_value_dices{count_rolls};

        for (int i{}; i < sides_cube; i++)
        {
            if (array_dices[i] > max_value_dices)
                max_value_dices = array_dices[i];

            if (array_dices[i] < min_value_dices)
                min_value_dices = array_dices[i];

            std::cout << "Number of hits " << i+1 << " - " << array_dices[i] << std::endl;
        }
        std::cout << "******************************" << std::endl;
        std::cout << "Max number of hits" << " - " << max_value_dices << std::endl;
        std::cout << "Min number of hits" << " - " << min_value_dices << std::endl;

    }

}

