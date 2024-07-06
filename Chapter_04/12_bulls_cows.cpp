#include <iostream>
#include <vector>
#include <string>

void error(std::string errortext) {
	std::cerr << errortext << '\n';
	exit(1);
}

int main(){

	bool ongoing = true;
	bool repeating = true;

	std::vector <int> v = { 1, 4, 3, 8 };

	while (ongoing) {
		int bull_count = 0, cow_count = 0;
		std::vector <int> guess;

		std::cout << "Guess 4 non-repeating single-digit integers: ";
		for (int val = 0; guess.size() < 4;) {
			std::cin >> val;
			if (!std::cin)
				error("Invalid input!");
			if (val > 9)
				error("Input is not single-digit!");
			guess.push_back(val);
		}
		if (guess[0] == guess[1] || guess[0] == guess[2] || guess[0] == guess[3] ||
			guess[1] == guess[2] || guess[1] == guess[3] ||
			guess[2] == guess[3]) {
			guess.clear();
			error("Repeating integers detected! Try again");
		}

		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; ++j) {
				if (v[i] == guess[j]) {
					if (i == j)
						++bull_count;
					else
						++cow_count;
				}
			}
		}

		std::cout << bull_count << " bulls & " << cow_count << " cows\n";

		if (bull_count == 4) {
			ongoing = false;
		}

	}

	std::cout << "You win! You've guessed the correct set of integers!\n";

}