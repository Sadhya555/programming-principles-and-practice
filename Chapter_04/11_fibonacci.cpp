// i realized i misread the question but i like that i was able to solve it so i'll keep it
// the largest fibonacci number that can fit in an int is 1836311903 at F46

#include <iostream>
#include <vector>
#include <string>

void error(std::string errortext) {
    std::cerr << errortext << '\n';
    exit(1);
}


int main() {
    
    int count;

    std::cout << "Please input how many values (up to 46) of the Fibonacci series we should output: ";
    std::cin >> count;

    if (count <= 0) {
        error("Invalid number of values!");
    }
    else if (count > 46) {
        error("Integer overflow!");
    }

    std::vector<int> series = { 1, 1 };
    int n = 3;

    if (count > 2) {
        std::cout << "1. 1\n";
        std::cout << "2. 1\n";
        for (int i = 0; i < count - 2; ++i) {      // max it can go till F46, i < 44 since i'm printing the first two elements manually
            std::cout << n << ". " << series[i] + series[i + 1] << "\n";
            series.push_back(series[i] + series[i + 1]);
            ++n;
        }
    }
    else if (count == 2) {
        std::cout << "1. 1\n";
        std::cout << "2. 1\n";
    }
    else if (count == 1) {
        std::cout << "1. 1\n";
    }

}