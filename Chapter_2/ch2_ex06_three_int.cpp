#include <iostream>

int main() {

	std::cout << "Please enter three integers\n";
	int val1;
	int val2;
	int val3;
	int big = 0;		// biggest value
	int middle = 0;		// middle value
	int small = 0;		// smallest value

	std::cin >> val1 >> val2 >> val3;

	if (val1 > val2 && val1 > val3) {		// && means "and"
		big = val1;		// we can declare val1 as the biggest as per our previous condition
		if (val2 > val3) {		// taking care of the middle and small values
			middle = val2;
			small = val3;
		}
		else {		// if opposite case, val2 < val3
			middle = val3;
			small = val2;
		}
	}
	else if (val2 > val1 && val2 > val3) {
		big = val2;
		if (val1 > val3) {
			middle = val1;
			small = val3;
		}
		else {
			middle = val3;
			small = val1;
		}
	}
	else if (val3 > val1 && val3 > val2) {
		big = val3;
		if (val1 > val2) {
			middle = val1;
			small = val2;
		}
		else {
			middle = val2;
			small = val1;
		}
	}

	std::cout << big << ", " << middle << ", " << small;

}
