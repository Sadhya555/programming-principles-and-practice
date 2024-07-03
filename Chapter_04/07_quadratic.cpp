#include <iostream>
#include <cmath>
#include <string>

void error(std::string errortext) {
	std::cerr << errortext << '\n';
}

void roots(double a, double b, double c) {
	double discriminant = (b * b) - (4 * a * c);
	double result1, result2;

	if (discriminant > 0) {
		result1 = (-b + sqrt(discriminant)) / (2 * a);
		result2 = (-b - sqrt(discriminant)) / (2 * a);
		std::cout << result1 << " & " << result2;
	}
	else if (discriminant == 0) {
		result1 = -b / (2 * a);
		std::cout << result1;
	}
	else {
		error("No real roots exist");
	}
}

int main() {
	double a, b, c;
	std::cout << "Enter the coefficients a, b, and c to calculate root(s)\n";
	std::cin >> a >> b >> c;

	if (a == 0) {
		std::cerr << "ERROR! 'a' must be non-zero in a quadratic equation";
		return -1;
	}

	roots(a, b, c);

}
