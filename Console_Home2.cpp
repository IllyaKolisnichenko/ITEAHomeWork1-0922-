#include <iostream>
#include <string>

int main()
{
    std::string array_month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    int array_dayinmonth[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    int month_value = 0;
    std::cout << "Enter month number:";
    std::cin >> month_value;
    if (month_value >= 1 && month_value <= 12)
    {
        std::cout << "This is " << array_month[month_value - 1] << std::endl;
        std::cout << array_month[month_value - 1] << " has " << array_dayinmonth[month_value-1] << " days" << std::endl;
    }
    else std::cout << "Value is not correct"; 
}
