#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> primes;
    std::vector<int> sieve(101, 1); 

    // Mark 0 and 1 as non-prime
    sieve[0] = 0;
    sieve[1] = 0;

    for (int i = 2; i * i <= 100; ++i) {
        if (sieve[i] != 0) { // If i is a prime number
            for (int j = i * i; j <= 100; j += i) {
                sieve[j] = 0; // Mark multiples of i as non-prime
            }
        }
    }

    for (int i = 2; i <= 100; ++i) {
        if (sieve[i] != 0) {
            primes.push_back(i); // Collecting the prime numbers
        }
    }

    // Print all prime numbers
    for (int n : primes) {
        std::cout << n << '\n';
    }

}