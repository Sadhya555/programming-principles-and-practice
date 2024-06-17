#include <iostream>
#include <vector>

int main()
{

	std::vector<int> primes = { 2 };

	bool is_prime;

	int input;

	std::cout << "Enter for how many primes we should check:\n";
	std::cin >> input;

	if (input <= 0) {
		std::cout << "Invalid input. Please enter a positive integer.\n";
        return 1;
	}

    int num = 3; // Start checking from number 3
    while (primes.size() < input) {
        bool is_prime = true;
        for (int prime : primes) {
            if (num % prime == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(num);
        }
        num += 2; // Check only odd numbers (even numbers greater than 2 are not prime)
    }

	for (int a : primes) {
		std::cout << '\n' << a << '\n';
	}

}