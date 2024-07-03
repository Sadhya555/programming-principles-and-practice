#include <iostream>
#include <string>
#include <vector>

int main()
{

    std::string result;
    std::vector<std::string> words = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    std::vector<std::string> numbers = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

    std::cout << "Enter a value from 0 - 9:\n";

    while (std::cin >> result) {
        int parsed = -1;

        for (int i = 0; i < words.size(); ++i) {
            if (words[i] == result)
                parsed = i;
        }

        if (parsed == -1) {
            for (int j = 0; j < numbers.size(); ++j) {
                if (numbers[j] == result)
                    parsed = j;
            }
        }

        std::cout << parsed << '\n';
    }
}