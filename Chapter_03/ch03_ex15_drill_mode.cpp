#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    
    int value;
    int input;
    std::vector<int>numbers;

    int mode_tracker = 0;
    int mode_counter = 0;
    int mode = 0;
    int mode_count = 0;

    std::cout << "Welcome! Pleast input some positive intgers, input  '- 1' if you'd like to stop\n";

    while (std::cin >> input) {
        if (input == -1) {
            break;
        }
        else if (input < -1) {
            continue;
        }
        numbers.push_back(input);
    }
    std::ranges::sort(numbers);

    for (int i = 0; i < numbers.size(); ++i) {
        if (i == 0 || numbers[i - 1] == numbers[i]) {
            mode_tracker = numbers[i];
            ++mode_counter;
        }
        else {
            if (mode_counter > mode_count) {
                mode = mode_tracker;
                mode_count = mode_counter;
            }
            mode_counter = 1;
        }
    }

    for (int i : numbers) {
        std::cout << i << " ";
    }

    std::cout << "\n";

    if (mode_count > 1) {
        std::cout << "The mode of this set is: " << mode << "\n";
    }
    else {
        std::cout << "There is no mode in this set\n";
    }
}