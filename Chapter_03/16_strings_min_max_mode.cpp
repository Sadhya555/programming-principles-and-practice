#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::string input;
    std::vector<std::string> words;

    std::cout << "Welcome! Please write down some words, type 'quit' if you'd like to stop\n";

    while (std::cin >> input) {
        if (input == "quit") {
            break;
        }
        words.push_back(input);
    }

    std::ranges::sort(words);

    std::string mode_word;
    int max_count = 0;

    int current_count = 1;
    for (int i = 1; i <= words.size(); ++i) {
        if (i == words.size() || words[i] != words[i - 1]) {
            if (current_count > max_count) {
                max_count = current_count;
                mode_word = words[i - 1];
            }
            current_count = 1;
        }
        else {
            ++current_count;
        }
    }
    if (max_count > 1) {
        std::cout << "Mode word: " << mode_word << " (appeared " << max_count << " times)\n";
    }
    else {
        std::cout << "There is no mode in this set of words\n";
    }

    // i am assuming the minimum is supposed to be the first word
    // and the maximum is the last word alphabetically

    std::cout << "The minimum is: " << words[0] << "\n";
    std::cout << "The maximum is: " << words[words.size() - 1] << "\n";

}
