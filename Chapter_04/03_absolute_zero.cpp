#include <iostream>

void error(std::string errortext) {
    std::cerr << errortext << '\n';
}

double ctok(double c) {
    double k = c + 273.25;
    return k;
}

int main() {
    double c = 0;
    std::cin >> c;
    if (c < -273.15) {
        error("Inavlid temperature!");
    }
    else {
        double k = ctok(c);
        std::cout << k << '/n';
    }
}