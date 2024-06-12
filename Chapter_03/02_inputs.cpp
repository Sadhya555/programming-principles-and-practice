#include <iostream>

// this only works for single words

int main()
{
    std::string input;
    std::cin >> input;

    for (char c : input)
        std::cout << c << '\t' << int(c) << '\n';
}