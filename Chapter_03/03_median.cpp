#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    double value;
    double smallest;
    double largest;
    double converted;
    double summation = 0;
    char input;
    bool first_input = true;
    std::string unit;
    char terminator = '|';

    const double cm_m = 0.01;
    const double in_cm = 2.54;
    const double ft_in = 12;

    std::vector<double> numbers;

    std::cout << "Enter a value with a unit (cm, m, in, ft) (or input | to quit):\n";

    while (true) {
        if (std::cin >> value >> unit) {
            if (unit == "cm") {
                converted = value* cm_m;
            }
            else if (unit == "in") {
                converted = value* in_cm* cm_m;
            }
            else if (unit == "ft") {
                converted = value* ft_in* in_cm* cm_m;
            }
            else if (unit == "m") {
                converted = value;
            }
            else {
                std::cout << "Invalid unit!\n";
                continue;
            }

            if (first_input) {
                smallest = converted;
                largest = converted;
                first_input = false;
            }

            std::cout << "You entered: " << converted << " m";

            if (converted < smallest) {
                smallest = converted;
                std::cout << " (smallest so far)";
            }
            if (converted > largest) {
                largest = converted;
                std::cout << " (largest so far)";
            }

            numbers.push_back(converted);

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

    std::ranges::sort(numbers);

    for (double num : numbers) {
        summation += num;
    }

    std::cout << "The smallest number is: " << smallest << " m\n";
    std::cout << "The largest number is: " << largest << " m\n";
    std::cout << "The number of values input: " << numbers.size() << "\n";
    std::cout << "The summation of all the values is: " << summation << " m\n";
    std::cout << "The values input were: ";

    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " m ";
    }

}
