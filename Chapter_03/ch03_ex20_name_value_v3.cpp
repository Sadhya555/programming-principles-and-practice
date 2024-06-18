#include <iostream>
#include <vector>

int main()
{

    std::string name;
    int value;
    std::vector<std::string> names;
    std::vector<int> scores;

    std::cout << "Write down a name and score\n";

    while (std::cin >> name >> value) {
        if (name == "NoName" && value == 0) {
            break;
        }
        else {
            bool duplicate = false;
            for (std::string n : names) {
                if (name == n) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate) {
                std::cout << "ERROR! Name is already given\n";
                return 1;
            }
            else {
                names.push_back(name);
                scores.push_back(value);
            }
        }
    }

    std::cout << "\n";

    for (int s = 0; s < scores.size(); ++s) {
        std::cout << names[s] << " " << scores[s] << "\n";
    }

    std::cout << "\nEnter values to find their names (type '-1' to stop):\n";
    while (true) {
        std::cout << "Score: ";
        std::cin >> value;
        if (value == -1) {
            break;
        }
        bool found = false;
        for (int i = 0; i < scores.size(); ++i) {
            if (scores[i] == value) {
                std::cout << "Name: " << names[i] << "\n";
                found = true;
            }
        }
        if (!found) {
            std::cout << "Score not found.\n";
        }
    }
}