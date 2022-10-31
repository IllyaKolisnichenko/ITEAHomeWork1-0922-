#include <iostream>
#include <string>

int main()
{
    const int count_monthes{12};
    unsigned int days_in_months[count_monthes]{31,28,31,30,31,30,31,31,30,31,30,31};
    std::string names_of_months[count_monthes] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    unsigned int month{};

    std::cout << "Enter number of month:" << std::endl;
    std::cin >> month;

    if (month > 0 && month <= count_monthes)
    {
        std::cout << "Current month - " << names_of_months[month-1] << std::endl;
        std::cout << "They have " << days_in_months[month-1] << " days" << std::endl;
    }
    else
        std::cout << "Value incorrect" << std::endl;
}
