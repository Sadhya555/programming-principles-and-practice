#include <iostream>
#include <string>
#include <vector>

int main() {

	std::vector <std::string> words;
	std::vector <std::string> disliked = { "golf", "baseball", "hockey" };

	for (std::string input; std::cin >> input; )
		words.push_back(input);

	int i = 0;

	// this could probably be done 
	// more efficiently but I have no idea how
	
	// do-while loop checks the condition at the end of the loop
	do {
		// checking each disliked word in our vector separately
		if (words[i] == disliked[0] || words[i] == disliked[1] || words[i] == disliked[2])
			std::cout << "BLEEP\n";
		else
			std::cout << words[i] << '\n';
		++i;
	} while (i != words.size());		// this will loop back until 
										// we reach the end of our original vector

}