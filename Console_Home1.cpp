#include <iostream>
#include <cstdlib>

int main()
{
    const int k_max_dice = 6;
    int rolls = 0;
    int array_dice[k_max_dice] = {0,0,0,0,0,0};
    std::cout << "Enter the number of rolls of the dice:";
    std::cin >> rolls;
    for (int i = 0; i < rolls; i++)
    {
        int dice_value = 1 + rand() % k_max_dice;
        array_dice[dice_value - 1]++;
        //std::cout << dice_value << std::endl;
    }
    std::cout << "***********************"<< std::endl;
    int max_dice = INT_MIN, value_max_dice = 0;
    int min_dice = INT_MAX, value_min_dice = 0;
    for (int i = 0; i < k_max_dice; i++)
    {
        if (array_dice[i] > max_dice)
        {
            max_dice = array_dice[i];
            value_max_dice = i ;
        }
        if (array_dice[i] < min_dice)
        {
            min_dice = array_dice[i];
            value_min_dice = i ;
        }
        std::cout << "Count dice with value (" << i+1 << "):" << array_dice[i] << std::endl;
    }
    std::cout << "***********************" << std::endl;
    std::cout << "Min count dice with value (" << value_min_dice + 1 << "):" << array_dice[value_min_dice] << std::endl;
    std::cout << "Max count dice with value (" << value_max_dice + 1 << "):" << array_dice[value_max_dice] << std::endl;
}
