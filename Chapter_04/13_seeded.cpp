// my hand has been forced to use the header file
// something is definitely wrong and i think the program is seeding repeated numbers still

#include "std_lib_facilities.h"

int main() {

	bool ongoing = true;
	bool repeating = true;

	vector <int> v;

	cout << "Enter any number\n";

	int n;
	cin >> n;

	seed_randint(n);

	while (v.size() < 4) {
		int val = randint(n);
		bool repeated = false;

		if (v.size() == 0)
			v.push_back(val);
		else {
			for (int v : v)
				if (v == val)
					repeated = true;
			if (!repeated)
				v.push_back(val);
		}
	}

	while (ongoing) {
		int bull_count = 0, cow_count = 0;
		vector <int> guess;

		cout << "Guess 4 non-repeating single-digit integers: ";
		for (int val = 0; guess.size() < 4;) {
			cin >> val;
			if (!cin)
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