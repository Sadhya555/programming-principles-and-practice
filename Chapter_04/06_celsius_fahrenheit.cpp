#include <iostream>

double ctof(double c) {
	return (c * 1.8) + 32;
}

double ftoc(double f) {
	return (f - 32) / 1.8;
}

int main() {
	double temp;
	char unit;
	double output_temp = 0;
	char output_unit = ' ';

	std::cin >> temp >> unit;

	switch (unit) {
	case 'c':
		output_temp = ctof(temp);
		output_unit = 'f';
		break;
	case 'f':
		output_temp = ftoc(temp);
		output_unit = 'c';
		break;
	default:
		break;
	}

	std::cout << output_temp << " " << output_unit;
}