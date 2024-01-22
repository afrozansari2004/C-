#include <iostream>
int main()
{
    double num1, num2, num3;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;
    double min = num1;
    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }
    std::cout << "The minimum of the three numbers is: " << min << std::endl;
    return 0;
}