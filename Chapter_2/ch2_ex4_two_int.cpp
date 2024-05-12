#include <iostream>

int main() {

    std::cout << "Please enter two integers\n";
    int val1;
    int val2;
    std::cin >> val1 >> val2;

    if (val1 > val2)
        std::cout << val1 << " is larger than " << val2 << '\n';
    else if (val1 < val2)
        std::cout << val1 << " is smaller than " << val2 << '\n';
    else        // in case both integers are equal
        std::cout << val1 << " is equal to " << val2 << '\n';

    std::cout << "The summation of the integers is " << val1 + val2 << '\n';
    std::cout << "The difference of the second integer from the first integer is " << val1 - val2 << '\n';       // the difference differs depending on the order of subtraction
    std::cout << "The product of the integers is " << val1 * val2 << '\n';
    std::cout << "The ratio of the integers is " << val1 / val2 << '\n';        // ratio comes zero if val2 > val1 because it rounds down

}