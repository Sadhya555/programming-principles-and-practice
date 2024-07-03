#include <iostream>
#include <string>

int main() {

    std::string previous;       // declares a string named "previous"
    std::string current;        // declares a string named "current"

    while (std::cin >> current) {       // we input a word into "current"
        if (previous == current)
            std::cout << "repeated word: " << current << '\n';
        previous = current;
    }

}

