#include <iostream>
#include <vector>

int main() {

    std::vector<int> numbers;
    for (int i = 2; i <= 100; ++i) {
        numbers.push_back(i);
    }

    std::vector<int> prime;

    for (int n = 0; n < numbers.size(); ++n) {
        bool is_prime = true;
        for (int d = 2; d <= numbers[n] / 2; ++d) {     // numbers[n]/2 since d cannot divide by an 
            if (numbers[n] % d == 0) {                  // integer if it's more than half of the number
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            prime.push_back(numbers[n]);
        }
    }

    for (int x = 0; x < prime.size(); ++x) {
        std::cout << prime[x] << '\n';
    }

}
