#include <iostream>

void error(std::string errortext) {
    std::cerr << errortext << '\n';
}

double ctok(double c) {
    double k = c + 273.25;
    if (k < 0) {
        error("Invalid temperature!");
        return -1;
    } else
    return k;
}

int main() {
    double c = 0;
    std::cin >> c;
    double k = ctok(c);
    std::cout << k << '\n';
}