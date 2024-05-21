#include <iostream>

int weird_square(int a) {
	int value = 0;

	for (int i = 0; i < a; i++) {
		value += a;
	}

	return value;

}

int main() {
	
	for (int i = 0; i <= 50; ++i) {
		std::cout << i << '\t' << weird_square(i) << '\n';
	}

}
