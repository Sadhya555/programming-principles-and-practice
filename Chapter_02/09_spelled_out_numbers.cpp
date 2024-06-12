#include <iostream>

int main() {

    std::cout << "Spell out a number from 0 to 4\n";
    std::string number;
    std::cin >> number;

    if (number == "zero")       // this is case-sensitive so if one write zEro the code will not recognize it
        std::cout << "0\n";
    else if (number == "one")
        std::cout << "1\n";
    else if (number == "two")
        std::cout << "2\n";
    else if (number == "three")
        std::cout << "3\n";
    else if (number == "four")
        std::cout << "4\n";
    else
        std::cout << "Not a number I know\n";
    
}
