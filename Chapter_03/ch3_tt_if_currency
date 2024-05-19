#include <iostream>

int main() {
  
    std::cout << "Please enter a value and currency (y, k, or p): ";
    double value;
    char currency;
    std::cin >> value >> currency;

    if (currency == 'y')        // using present day conversions (whenever this was written)
        std::cout << value << " " << currency << " = " << value * 0.0064 << " dollars";
    else if (currency == 'k')
        std::cout << value << " " << currency << " = " << value * 0.093 << " dollars";
    else if (currency == 'p')
        std::cout << value << " " << currency << " = " << value * 1.27 << " dollars";
    else
        std::cout << "Sorry I do not recognize that currency";

}
