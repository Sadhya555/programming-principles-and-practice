#include <iostream>
#include <string>

void error(std::string errortext) {
    std::cerr << errortext << '\n';
}

double ctok(double c) {
    double k = c + 273.15;
    return k;
}

int main() {
    double c = 0;
    std::cin >> c;

    // Check if the input temperature is below absolute zero
    if (c < -273.15) {
        error("Invalid temperature!");
    }
    else {
        double k = ctok(c);
        std::cout << k << '\n';
    }

}
