#include <iostream>

int main()
{
    
    double a, b, c;
    double x1, x2;

    std::cout << "Please input values for a, b, and c\n";
    std::cin >> a >> b >> c;

    if (a == 0) {
        std::cout << "ERROR! Coefficient 'a' cannot be zero! This is not a quadratic equation\n";
        return 1;
    }

    double discriminant = b * b - 4 * a * c;

    // b^2 - 4ac

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "The roots are distinct and real\n";
        std::cout << "The roots are: " << x1 << " and " << x2;
    }
    else if (discriminant == 0) {
        x1 = -b / (2 * a);
        std::cout << "The roots are equal and real\n";
        std::cout << "The root is: " << x1;
    }
    else if (discriminant < 0) {
        std::cout << "The roots are imaginary.\n";
    }
}
