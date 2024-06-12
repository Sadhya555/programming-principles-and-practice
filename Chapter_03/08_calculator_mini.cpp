#include <iostream>
#include <vector>

int single_digit(std::string num_string)
{

    std::vector<std::string> words = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    std::vector<std::string> numbers = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

    int parsed = -1;
    int i = 0;

    for (int i = 0; i < words.size(); ++i) {
        if (words[i] == num_string)
            parsed = i;
    }

    if (parsed == -1) {
        for (int j = 0; j < numbers.size(); ++j) {
            if (numbers[j] == num_string)
                parsed = j;
        }
    }

    return parsed;
}


int main()
{
    int value1 = 0;
    int value2 = 0;

    double result = 0;

    char operation = ' ';

    std::string dig_str1 = "";
    std::string dig_str2 = "";

    std::cout << "Please input two numbers and an operator (+, -, *, /)\n";

    std::cin >> dig_str1 >> dig_str2 >> operation;

        value1 = single_digit(dig_str1);
        value2 = single_digit(dig_str2);

        switch (operation) {
        case '+':
            std::cout << "The sum of " << value1 << " and " << value2 << " is " << value1 + value2 << '\n';
            break;
        case '-':
            std::cout << "The difference of " << value1 << " and " << value2 << " is " << value1 - value2 << '\n';
            break;
        case '*':
            std::cout << "The product of " << value1 << " and " << value2 << " is " << value1 * value2 << '\n';
            break;
        case '/':
            std::cout << "The quotient of " << value1 << " and " << value2 << " is " << value1 / value2 << '\n';
            break;

        default:
            std::cout << "Invalid operation\n";
        }

}