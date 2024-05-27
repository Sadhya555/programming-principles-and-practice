#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    
    std::vector<double> route;
    for (double input; std::cin >> input;)
        route.push_back(input);
    int n = route.size();
    
    double sum = 0;
    for (double r : route)
        sum += r;
    std::ranges::sort(route);

    std::cout << "The total distance is " << sum << '\n';
    std::cout << "The smallest distance is " << route[0] << '\n';
    std::cout << "The largest distance is " << route[n-1] << '\n';
    std::cout << "The mean distance is " << sum / route.size() << '\n';

}