#include <iostream>

double ctok(double c) {         // converts Celsius to Kelvin
    double k = c + 273.25;  // should be double instead of int
    return k;   // return k instead of int & missing semi-colon
}

int main() {
    double c = 0;               // declare input variable
    std::cin >> c;      // c instead of d              // retrive temperature to input variable
    double k = ctok(c); // no quotation around c         // convert temperature
    std::cout << k << '\n'; // shouldn't be Cout & newline character is \     // print out temperature
}
