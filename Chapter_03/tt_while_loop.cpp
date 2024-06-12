#include <iostream>

int main()
{
    int i = 97;
    char a = 'a';

    while (i < 123) {       // 26 alphabets
        std::cout << a << '\t' << i << '\n';
        ++i;        // increments by one each run
        ++a;        // it will go through the alphabet
    }
}
