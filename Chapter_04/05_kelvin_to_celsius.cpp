#include <iostream>
#include <string>

// Error handling function
void error(std::string errortext) {
    std::cerr << errortext << '\n';
}

// Function to convert Celsius to Kelvin
double ctok(double c) {
    constexpr double c_k_conversion = 273.15;
    double k = c + c_k_conversion;
    if (k < 0) {
        error("Invalid temperature!");
        return -1;
    }
    return k;
}

// Function to convert Kelvin to Celsius
double ktoc(double k) {
    constexpr double k_c_conversion = 273.15;
    double c = k - k_c_conversion;
    return c;
}

int main() {
    double temp;
    char unit;
    double output_temp = 0;
    char output_unit = ' ';

    std::cin >> temp >> unit;

    switch (unit) {
    case 'k':
        output_temp = ktoc(temp);
        output_unit = 'c';
        break;
    case 'c':
        output_temp = ctok(temp);
        output_unit = 'k';
        break;
    default:
        error("Invalid unit!");
        return 1;
    }

    std::cout << output_temp << " " << output_unit << '\n';

}
