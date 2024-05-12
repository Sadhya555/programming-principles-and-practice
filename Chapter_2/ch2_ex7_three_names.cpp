#include <iostream>

int main() {

	std::cout << "Please enter three names\n";
	std::string name1;
	std::string name2;
	std::string name3;
	std::string last = "???";		// alphabetically last
	std::string middle = "???";		// middle alphabet
	std::string first = "???";		// alphabetically first

	std::cin >> name1 >> name2 >> name3;

	if (name1 > name2 && name1 > name3) {		// && means "and"
		last = name1;		// we can declare name1 as the last as per our previous condition
		if (name2 > name3) {		// taking care of the middle and first names
			middle = name2;
			first = name3;
		}
		else {		// if opposite case, name2 < name3
			middle = name3;
			first = name2;
		}
	}
	else if (name2 > name1 && name2 > name3) {
		last = name2;
		if (name1 > name3) {
			middle = name1;
			first = name3;
		}
		else {
			middle = name3;
			first = name1;
		}
	}
	else if (name3 > name1 && name3 > name2) {
		last = name3;
		if (name1 > name2) {
			middle = name1;
			first = name2;
		}
		else {
			middle = name2;
			first = name1;
		}
	}

	std::cout << first << ", " << middle << ", " << last;

}