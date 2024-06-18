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
            names.push_back(name);
            scores.push_back(value);
            for (std::string n : names) {
                for (int s : scores) {
                    if (name == n && value == s) {
                        break;
                    }
                }
            }
        }
    }

    std::cout << "\n";

    for (int s = 0; s < scores.size(); ++s) {
        std::cout << names[s] << " " << scores[s] << "\n";
    }
}