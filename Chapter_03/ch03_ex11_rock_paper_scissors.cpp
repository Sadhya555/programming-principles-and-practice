#include <iostream>
#include <vector>

int main() {

	std::vector <char> choice = { 'r', 'p', 's' };

	std::vector<int> numbers;
	for (int n = 1; n <= 100; ++n) {
		numbers.push_back(n);
	}

	int num_input = -1;
	char play_input = ' ';
	char comp_input = ' ';

	std::cout << "Let's play Rock Paper Scissors! Firstly, choose a number from 1 to 100.\n";
	
	while (true) {
		std::cout << "Input a number from 1 to 100\n";
		if (std::cin >> num_input && num_input >= 1 && num_input <= 100) {
			break;
		}
		else {
			std::cout << "ERROR! Please enter a number from 1 to 100.\n";
		}
	}
	
	std::cout << "You chose " << num_input << ".\n";
	std::cout << "Great! Let's play Rock Paper Scissors! Choose what you want to play (r / p / s)\n";


	while (true) {

		std::cin >> play_input;
		bool valid_input = false;

		for (char c : choice) {

			if (play_input == c) {
				valid_input = true;
				break;
			}
		}
		if (valid_input) {
			break;
		}
		else {
			std::cout << "Invalid input. Please choose 'r', 'p', or 's': ";
		}
	}

	std::cout << "You chose " << play_input << '\n';

	if (num_input % 3 == 0) {
		comp_input = choice[0];
		std::cout << "Computer chose " << choice[0] << "\n";
	}
	else if (num_input % 3 == 1) {
		comp_input = choice[1];
		std::cout << "Computer chose " << choice[1] << "\n";
	} 
	else {
		comp_input = choice[2];
		std::cout << "Computer chose " << choice[2] << "\n";
	}

	if (play_input == comp_input) {
		std::cout << "It's a draw!\n";
	}
	else if ((play_input == 'r' && comp_input == 's') ||
		(play_input == 'p' && comp_input == 'r') ||
		(play_input == 's' && comp_input == 'p')) {
		std::cout << "Player wins!\n";
	}
	else {
		std::cout << "Computer wins!\n";
	}

}