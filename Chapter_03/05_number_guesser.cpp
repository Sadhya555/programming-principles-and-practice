#include <iostream>

// number-guessing using the binary search method
// kinda crude but it works

int main()
{
    int low = 1;
    int high = 100;
    int middle;
    char input;

    std::cout << "Think of a number between 1 and 100, I will try to guess it.\n";
    
    while (low <= high) {
        middle = (low + high) / 2;
        std::cout << "Is your number less than " << middle << "? (y/n)\n";
        std::cin >> input;
        if (input == 'y') {
            high = middle - 1;
        }
        else if (input == 'n') {
            std::cout << "Is your number " << middle << "? (y/n)\n";
            std::cin >> input;
            if (input == 'y') {
                std::cout << "I guessed your number! Thanks for playing!";
                break;
            }
            else if (input == 'n') {
                low = middle + 1;
            }
        }
        else {
            std::cout << "Please respond with y or n\n";
        }
    }
    if (low > high)
        std::cout << "It seems there was an error, please try again.\n";
}