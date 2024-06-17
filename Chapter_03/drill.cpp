#include <iostream>

int main()
{
    double a;
    double b;
    double smallest = 0;
    double largest = 0;
    char input;
    char terminator = '|';

    std::cout << "Enter the first value (or input | to quit)\n";

    while (true) {
        if (std::cin >> a) {
            std::cout << "Enter the second value\n";
            std::cin >> b;
            if (a < b) {
                if (a - smallest < 0) {
                    smallest == a;
                    std::cout << smallest << " is the smallest value so far\n";
                    continue;
                }
                else {
                    std::cout << "The smaller value is " << a << "\n";
                }
                if (b - a < 0.01) {
                    std::cout << "The numbers are almost equal\n";
                }
            }
            else if (a > b) {
                std::cout << "The smaller value is: " << b << "\nThe larger value is: " << a << "\n";
                if (a - b < 0.01) {
                    std::cout << "The numbers are almost equal\n";
                }
            }
            else {
                std::cout << "The numbers are equal\n";
            }
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

}
