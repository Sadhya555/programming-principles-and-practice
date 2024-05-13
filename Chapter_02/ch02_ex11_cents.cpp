#include <iostream>

int main() {

    int pennies;        // writing down all int at the start for convenience
    int nickels;
    int dimes;
    int quarters;
    int half_dollars;
    int one_dollars;

    std::cout << "Enter the number of pennies (1-cent coins) that you have:\n";
    std::cin >> pennies;
    std::cout << "Now nickels (5-cent coins):\n";
    std::cin >> nickels;
    std::cout << "Now dimes (10-cent coins):\n";
    std::cin >> dimes;
    std::cout << "Now quarters (25-cent coins):\n";
    std::cin >> quarters;
    std::cout << "Now half dollars (50-cent coins):\n";
    std::cin >> half_dollars;
    std::cout << "Finally, one-dollar coins (100-cent coins):\n";
    std::cin >> one_dollars;

    if (pennies == 1)
        std::cout << "You have " << pennies << " penny\n";
    else
        std::cout << "You have " << pennies << " pennies\n";
    if (nickels == 1)
        std::cout << "You have " << nickels << " nickel\n";
    else
        std::cout << "You have " << nickels << " nickels\n";
    if (dimes == 1)
        std::cout << "You have " << dimes << " dime\n";
    else
        std::cout << "You have " << dimes << " dimes\n";
    if (quarters == 1)
        std::cout << "You have " << quarters << " quarter\n";
    else
        std::cout << "You have " << quarters << " quarters\n";
    if (half_dollars == 1)
        std::cout << "You have " << half_dollars << " half dollar\n";
    else
        std::cout << "You have " << half_dollars << " half dollars\n";
    if (one_dollars == 1)
        std::cout << "You have " << one_dollars << " one-dollar coin\n";
    else
        std::cout << "You have " << one_dollars << " one-dollar coins\n";

    std::cout << "The value of all of your coins is " << pennies + nickels + dimes + quarters + half_dollars + one_dollars << " cents";

}