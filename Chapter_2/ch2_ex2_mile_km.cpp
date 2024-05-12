#include <iostream>

int main() {

    std::cout << "Input a distance in miles: ";
    double miles;       // double so that we can input decimals
    std::cin >> miles;
    std::cout << miles << " miles = " << miles * 1.609 << " kilometers";        // 1 mile = 1.609 kilometers

}
