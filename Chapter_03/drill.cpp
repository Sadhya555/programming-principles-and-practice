#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    char input;
    char terminator = '|';

    std::cout << "Enter two integers (or input | to quit)\n";

    while (true) {
        if (std::cin >> a >> b) {
            break;
        }
        else {
            std::cin.clear();
            std::cin >> input;
            if (input == terminator) {
                std::cout << "Quitting...\n";
                break;
            }
            else {
                std::cout << "Invalid input. Enter two integers (or input | to quit)\n";
            }
        }
    }

    if (a < b) {
        std::cout << "The smaller value is: " << a << "\nThe larger value is: " << b << "\n";
    }
    else if (a > b) {
        std::cout << "The smaller value is: " << b << "\nThe larger value is: " << a << "\n";
    }
    else {
        std::cout << "The numbers are equal\n";
    }

}
