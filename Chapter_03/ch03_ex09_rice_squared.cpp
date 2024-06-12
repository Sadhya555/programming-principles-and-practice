#include <iostream>

int main()
{

	// this is just geometric progression

	int square_rice = 1;
	int total_rice = 1;
	bool thousand_thresold = false;
	bool million_thresold = false;
	bool billion_thresold = false;


	for (int sq = 0; sq < 64; ++sq) {

		square_rice *= 2;
		total_rice = square_rice + total_rice;


		if (total_rice / 1000 >= 1 && thousand_thresold == false) {
			std::cout << "You need " << sq + 2 << " squares to give at least 1,000 grains of rice!\n";
			thousand_thresold = true;
		}

		if (total_rice / 1000000 >= 1 && million_thresold == false) {
			std::cout << "You need " << sq + 2 << " squares to give at least 1,000,000 grains of rice!\n";
			million_thresold = true;
		}

		if (total_rice / 1000000000 >= 1 && billion_thresold == false) {
			std::cout << "You need " << sq + 2 << " squares to give at least 1,000,000,000 grains of rice!\n";
			billion_thresold = true;
			break;
		}

	}

}