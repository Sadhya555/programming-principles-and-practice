#include <iostream>

int main()
{
    char a = 'a';
    for (int i = 97; i <= 122; ++i) {       // using the same values from the while-loop exercise
        std::cout << a << '\t' << i << '\n';
        ++a;
    }

    a = 'A';
    for (int i = 123; i <= 148; ++i) {      // 25 more capital alphabets
        std::cout << a << '\t' << i << '\n';
        ++a;
    }

    a = '0';
    for (int i = 149; i <= 158; ++i) {      // 10 more digits
        std::cout << a << '\t' << i << '\n';
        ++a;
    }
}
