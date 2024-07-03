#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>


inline void error(const std::string& s) {
    throw std::runtime_error(s);
}

inline void error(const std::string& s, const std::string& s2) {
    error(s + s2);
}

inline void error(const std::string& s, int i) {
    std::ostringstream os;
    os << s << ": " << i;
    error(os.str());
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
        error("Invalid temperature! Temperature cannot be below -273.15°C.");
    }
    else {
        double k = ctok(c);
        std::cout << k << '\n';
    }

}
