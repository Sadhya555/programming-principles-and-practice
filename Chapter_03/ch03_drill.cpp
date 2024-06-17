#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    char term;
    char terminator = '|';

    std::cout << "Enter two integers (or input | to quit): ";

    while (true) {
        if (std::cin >> a >> b) {
            std::cout << a << ' ' << b << '\n';
            std::cout << "Enter two integers (or input | to quit): ";
        }
        else if (std::cin >> term) {
            term = terminator;
            std::cout << "Quitting\n";
            break;
        }

    }
}