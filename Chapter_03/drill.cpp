#include <iostream>

int main()
{
    double value;
    double smallest;
    double largest;
    char input;
    bool first_input = true;
    std::string unit;
    char terminator = '|';

    const double cm_m = 0.01;
    const double in_cm = 2.54;
    const double ft_in = 12;

    std::cout << "Enter a value with a unit (cm, m, in, ft) (or input | to quit):\n";

    while (true) {
        if (std::cin >> value >> unit) {
            if (first_input) {
                smallest = value;
                largest = value;
                first_input = false;
            }

            std::cout << "You entered: " << value << " " << unit;

            if (value < smallest) {
                smallest = value;
                std::cout << " (smallest so far)";
            }
            if (value > largest) {
                largest = value;
                std::cout << " (largest so far)";
            }

            std::cout << "\n";
        }
        else {
            std::cin.clear();
            std::cin >> input;
            if (input == terminator) {
                std::cout << "Quitting...\n";
                break;
            }
            else {
                std::cout << "Invalid input. Enter a value with a unit (or input | to quit)\n";
            }
        }
    }
}
