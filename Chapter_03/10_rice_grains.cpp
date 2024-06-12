#include <iostream>

int main()
{
	
	// for int it goes till 31 squares upto 2,147,483,647 rice grains, afterwards it's an integer overflow so it goes to -1 for the remainder
	// for double it actually goes till the 64 square as an approximate value to the power of 19

	double square_rice = 1;
	double total_rice = 1;

	std::cout << "Amount of rice in 1 square: " << total_rice << '\n';

	for (int sq = 0; sq < 63; ++sq) {

		square_rice *= 2;
		total_rice = square_rice + total_rice;

		std::cout << "Amount of rice in " << sq + 2 << " squares: " << total_rice << '\n';

	}
}
