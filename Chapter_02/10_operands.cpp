#include <iostream>
#include <string>

int main() {

	std::cout << "Write down an operator and then provide me with two values\n";
	std::string operatus;		// using "operator" as a name gives an error, using string because it could be + or even "plus"
	double val1;
	double val2;
	std::cin >> operatus >> val1 >> val2;

	if (operatus == "+" || operatus == "plus")
		std::cout << "The result is " << val1 + val2;
	else if (operatus == "-" || operatus == "minus")
		std::cout << "The result is " << val1 - val2;
	else if (operatus == "*" || operatus == "mul")
		std::cout << "The result is " << val1 * val2;
	else if (operatus == "/" || operatus == "div")
		std::cout << "The result is " << val1 / val2;

}
