#include <iostream>
#include <string>

int main()
{
    unsigned int days_in_months[12]{31,28,31,30,31,30,31,31,30,31,30,31};
    std::string names_of_months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    unsigned int month{};

    std::cout << "Enter number of month:" << std::endl;
    std::cin >> month;

    if (month > 0 && month <= 12)
    {
        std::cout << "Current month - " << names_of_months[month-1] << std::endl;
        std::cout << "They have " << days_in_months[month-1] << " days" << std::endl;
    }
    else
        std::cout << "Value incorrect" << std::endl;
}
