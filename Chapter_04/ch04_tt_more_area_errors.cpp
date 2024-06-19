#include <iostream>

int area(int length, int width) {
    return length * width;
}

int main()
{

    int x0 = arena(7, 2);
    int x1 = area(7);
    int x2 = area("seven", 2);

    // extra

    int x3 = area(-7, 10);      // not really an error but area can't be negative anyway
    int x4 = area(5.2, -8.55);  // also not an error, but since it's int it'll round down
    std::string x5 = area(5, 2);

}