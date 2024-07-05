// i'm guessing it wants to find the difference between two adjacent values
// and then subtract 1 from them?

#include <iostream>
#include <vector>
#include <string>

void error(std::string errortext) {
	std::cerr << errortext << '\n';
	exit(1);
}

int main() {
	double sum_count;
	double values;
	char terminator = '|';
	std::vector <double> v;
	double difference;
	std::vector <double> d1;		// houses the values to subtract
	std::vector <double> d2;		// contains the new subtracted values

	std::cout << "Please enter the number of values you want to sum: ";
	std::cin >> sum_count;

	if (!std::cin || sum_count <= 0) {
		error("Invalid number of values");
	}

	std::cout << "Please enter some integers (press '|' to stop): ";

	while (true) {
		if (std::cin >> values) {
			v.push_back(values);
			d1.push_back(values);
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

	double sum = 0;

	for (int i = 0; i < sum_count; ++i) {
		sum += v[i];
	}

	for (int i = 0; i < d1.size() - 1; ++i) {
		difference = (d1[i + 1] - d1[i]) - 1;
		d2.push_back(difference);
	}

	std::cout << sum << "\n";
	std::cout << "Differences between adjacent values: ";

	for (int i = 0; i < d2.size(); ++i) {
		std::cout << d2[i] << " ";
	}

}