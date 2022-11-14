#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(nullptr));

    unsigned int dice{}, count_rolls{};
        unsigned int array_dices[6]{ 0,0,0,0,0,0 };

    std::cout << "Enter count" << std::endl;
        std::cin >> count_rolls;
        if (count_rolls > 0)
        {
            for (int i{}; i < count_rolls; i++)
            {
                dice = rand() % 6 + 1;
                    array_dices[dice - 1]++;
            }

                unsigned int Max_Value_dices = 0;
                    unsigned int Min_Value_dices = count_rolls;

            for (int i{}; i < 6; i++)
            {
                if (array_dices[i] > Max_Value_dices)
                        Max_Value_dices = array_dices[i];

                    if (array_dices[i] < Min_Value_dices)
                            Min_Value_dices = array_dices[i];

                std::cout << "Number of hits " << i + 1 << " - " << array_dices[i] << std::endl;
            }
            std::cout << "Max number" << " - " << Max_Value_dices << std::endl;

                std::cout << "Min number" << " - " << Min_Value_dices << std::endl;

        }

    }