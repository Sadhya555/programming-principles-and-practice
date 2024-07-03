#include <iostream>
#include <string>

int main() {
	std::cout << "Enter your first name: ";

	std::string first_name;
	std::cin >> first_name;

	std::cout << "Hello, " << first_name << "!\n"
		<< "Enter the name of the person you want to write to: ";

	std::string recipient_name;
	std::cin >> recipient_name;

	std::cout << "Dear " << recipient_name << ",\n"
		<< "How are you? I am fine. I miss you. What are you up to? I am just chilling\n\n"
		<< "Give the name of another friend of yours: ";

	std::string friend_name;
	std::cin >> friend_name;

	std::cout << "\n\nHave you seen " << friend_name << " recently?\n\n"
		<< "Enter the age of the recipient: ";

	int age;
	std::cin >> age;

	if (age <= 0 || age > 110) {
		std::cout << "You're kidding!";
	}
	else if (age < 12) {
		std::cout << "Next year you will be " << age + 1 << "!\n\n";
	}
	else if (age == 17) {
		std::cout << "Next year you will be able to vote!\n\n";
	}
	else if (age > 70) {
		std::cout << "Are you retired?\n\n";
	}
	else {
		std::cout << "I hear you just had a birthday and you are now " << age << " years old!\n\n";
	}

	std::cout << "Yours sincerely\n\n"
		<< first_name;
}
