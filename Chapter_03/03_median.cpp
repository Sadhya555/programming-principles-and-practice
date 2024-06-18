#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    std::vector<double> temps;
    for (double temp; std::cin >> temp;) {
        temps.push_back(temp);
    }

    double sum = 0;
    for (double x : temps) {
        sum += x;
    }
    std::cout << "Average temperature: " << sum / temps.size() << "\n";

    std::ranges::sort(temps);

    if (temps.size() % 2 != 0) {
        std::cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
    }
    else if (temps.size() % 2 == 0) {
        std::cout << "Median temparture: " << (temps[(temps.size() - 1) / 2] + temps[temps.size() / 2]) / 2 << '\n';
    }
    

}
