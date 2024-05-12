#include <iostream>

int main() {

    std::cout << "Please enter two floating-point integers\n";
    double val1;
    double val2;
    std::cin >> val1 >> val2;

    if (val1 > val2)
        std::cout << val1 << " is larger than " << val2 << '\n';
    else if (val1 < val2)
        std::cout << val1 << " is smaller than " << val2 << '\n';
    else        // in case both values are equal
        std::cout << val1 << " is equal to " << val2 << '\n';

    std::cout << "The summation of the numbers is " << val1 + val2 << '\n';
    std::cout << "The difference of the second number from the first number is " << val1 - val2 << '\n';       // the difference differs depending on the order of subtraction
    std::cout << "The product of the numbers is " << val1 * val2 << '\n';
    std::cout << "The ratio of the numbers is " << val1 / val2 << '\n';     // ratio actually comes in decimals now

}