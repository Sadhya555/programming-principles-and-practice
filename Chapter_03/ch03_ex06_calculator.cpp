#include <iostream>

int main()
{
    double value1;
    double value2;
    char operation;
    std::cout << "Please input two numbers and an operator (+, -, *, /)\n";
    std::cin >> value1 >> value2 >> operation;

    if (operation == '+')
        std::cout << "The sum of " << value1 << " and " << value2 << " is " << value1 + value2 << '\n';
    else if (operation == '-')
        std::cout << "The difference of " << value1 << " and " << value2 << " is " << value1 - value2 << '\n';
    else if (operation == '*')
        std::cout << "The product of " << value1 << " and " << value2 << " is " << value1 * value2 << '\n';
    else if (operation == '/')
        std::cout << "The quotient of " << value1 << " and " << value2 << " is " << value1 / value2 << '\n';
    else
        std::cout << "Invalid operation\n";


}