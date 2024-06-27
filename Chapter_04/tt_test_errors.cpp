// I have no clue why this isn't working and
// I am at my wits end
// I will check this out later in the future

#include <iostream>

void error(std::string errortext) {
	std::cout << errortext << '\n';
}

int area(int length, int width) {
	if (length <= 0 || width <= 0) {
		error("non-positive area() argument");
	}
	return length * width;
}

int framed_area(int x, int y) {
	constexpr int frame_width = 2;
	if (x - frame_width <= 0 || y - frame_width <= 0) {
		error("non-positive area() argument called by framed_area()");
	}
	return area(x - frame_width, y - frame_width);
}

int f(int x, int y, int z) {
	int area1 = area(x, y);
	if (area1 <= 0) {
		error("non-positive area");
	}
	int area2 = framed_area(1, z);
	int area3 = framed_area(y, z);
	if (area3 == 0) {
		error("area3 is zero, cannot divide by zero");
	}
	double ratio = double(area1) / area3;
	return ratio;
}

int main() {
	f(5, 10, 15);
}
