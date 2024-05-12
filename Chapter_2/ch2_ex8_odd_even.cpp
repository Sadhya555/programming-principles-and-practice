#include <iostream>

int main() {

    std::cout << "Please insert a number\n";
    int number;
    std::cin >> number;

    if (number % 2 == 0)
        std::cout << "The number " << number << " is even\n";
    else
        std::cout << "The number " << number << " is odd\n";

}
