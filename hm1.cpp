#include <iostream>
#include <string>

int main()
{
    std::string arr_month[12] = { "January","February","March","April","May","June","July","August","September","October","November","December"};

        int arr_daymonth[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

            int month_value = 0;


    std::cout << "enter month number:";

        std::cin >> month_value;

    if (month_value >= 1 && month_value <= 12)
        {
            std::cout << "month: " << arr_month[month_value - 1]<< "\n";
            std::cout << arr_month[month_value - 1] << " " << arr_daymonth[month_value - 1] << " days:\n";
        }

        else std::cout << "NOT";
}