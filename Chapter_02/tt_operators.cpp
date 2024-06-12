#include <iostream>

int main()
{
    std::cout << "Please enter an integer value: ";
    int n = 0;          // integer variable named "n"
    std::cin >> n;      // inputting value of "n"
    std::cout << "n == " << n                                           // outputs the value of "n" that we inputted
        << "\nn+1 == " << n + 1                                         // adds 1 to our value of "n"
        << "\nthree times n == " << 3 * n                               // multiplies our value of "n" by 3
        << "\ntwice n == " << n + n                                     // doubles our value of "n"
        << "\nn squared == " << n * n                                   // squares our value of "n"
        << "\nhalf of n == " << n / 2 << " (value is rounded down)"     // halves our value of "n"
        << "\nsquare root of n == " << sqrt(n)                          // square roots our values of "n"
        << "\nremainder when divided by 3 == " << n % 3                 // displays the remainder when our value of "n" is divided by 3
        << '\n';
}