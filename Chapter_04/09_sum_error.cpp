// not sure what it wants but maybe a really big int?
// i'll get back on this later

#include <iostream>
#include <vector>
#include <string>

void error(std::string errortext) {
	std::cerr << errortext << '\n';
	exit(1);
}

int main() {
	int sum_count;
	int values;
	char terminator = '|';
	std::vector <int> v;

	std::cout << "Please enter the number of values you want to sum: ";
	std::cin >> sum_count;

	if (!std::cin || sum_count <= 0) {
		error("Invalid number of values");
	}

	std::cout << "Please enter some integers (press '|' to stop): ";

	while (true) {
		if (std::cin >> values) {
			v.push_back(values);
		}
		else {
			std::cin.clear();
			std::cin >> terminator;
			if (terminator == '|') {
				break;
			}
			else {
				error("Invalid input. Please enter some integers (press '|' to stop).");
			}
		}
	}

	if (sum_count > v.size()) {
		error("You asked for a sum of more numbers than there are in the vector.");
	}

	int sum = 0;

	for (int i = 0; i < sum_count; ++i) {
		sum += v[i];
	}

	std::cout << sum;

}