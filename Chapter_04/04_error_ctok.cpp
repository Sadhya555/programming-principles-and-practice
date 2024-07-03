#include <iostream>

void error(std::string errortext) {
    std::cerr << errortext << '\n';
}

double ctok(double c) {
    if (c < -273.15) {
        error("Invalid temperature!");
        return -1;
    }
    double k = c + 273.15;
    return k;
}

int main() {
    double c = 0;
    std::cin >> c;
    double k = ctok(c);
    if (k != -1) {
        std::cout << k << '\n';
    }
    else {
        std::cout << "Failed to convert temperature\n";
    }
}
