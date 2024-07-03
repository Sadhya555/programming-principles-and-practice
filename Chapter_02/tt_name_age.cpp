#include <iostream>
#include <string>

int main() {

	std::cout << "Please enter your first name and age in years\n";
	std::string first_name = "???";		// string variable named "first_name" ("???" means "we don't know the name currently")
	double age = -1;					        // double variable named "age" ("-1" means "we don't know the age currently")
	std::cin >> first_name >> age;		// inputting the string and integer values which will be read in that order
	std::cout << "Hello, " << first_name << " (age: " << age*12 << " months)\n";		// Multiplying age by 12 to display the age in months instead of years

}
