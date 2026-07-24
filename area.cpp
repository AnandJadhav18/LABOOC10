#include <iostream>

int main() {
	double length;
	double width;

	std::cin >> length >> width;

	double area = length * width;
	double perimeter = 2 * (length + width);

	std::cout << "Area: " << area << '\n';
	std::cout << "Perimeter: " << perimeter << '\n';

	return 0;
}
