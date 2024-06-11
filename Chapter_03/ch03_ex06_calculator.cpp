#include <iostream>

int main()
{
    double value1 = 0;
    double value2 = 0;
    char operation = ' ';

    std::cout << "Please input two numbers and an operator (+, -, *, /)\n";

    std::cin >> value1 >> value2 >> operation;

    switch (operation) {
    case '+':
        std::cout << "The sum of " << value1 << " and " << value2 << " is " << value1 + value2 << '\n';
        break;
    case '-':
        std::cout << "The difference of " << value1 << " and " << value2 << " is " << value1 - value2 << '\n';
        break;
    case '*':
        std::cout << "The product of " << value1 << " and " << value2 << " is " << value1 * value2 << '\n';
        break;
    case '/':
        std::cout << "The quotient of " << value1 << " and " << value2 << " is " << value1 / value2 << '\n';
        break;

    default:
        std::cout << "Invalid operation\n";
    }

}
