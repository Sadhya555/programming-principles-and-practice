#include <iostream>

int main()
{
    std::cout << "Please enter a value and currency (y, k, or p): ";
    double value;
    char currency;
    std::cin >> value >> currency;

    switch (currency) {        // using present day conversions (whenever this was written)
    case 'y':
        std::cout << value << " " << currency << " = " << value * 0.0064 << " dollars";
        break;
    case 'k':
        std::cout << value << " " << currency << " = " << value * 0.093 << " dollars";
        break;
    case 'p':
        std::cout << value << " " << currency << " = " << value * 1.27 << " dollars";
        break;
    case 'f':
        std::cout << value << " " << currency << " = " << value * 1.10 << " dollars";
        break;
    default:
        std::cout << "Sorry I do not recognize that currency";
        break;
     }

}
