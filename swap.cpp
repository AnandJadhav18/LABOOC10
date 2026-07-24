#include <iostream>
#include <utility>

int main() {
	double firstNumber;
	double secondNumber;

	std::cin >> firstNumber >> secondNumber;
	std::swap(firstNumber, secondNumber);

	std::cout << firstNumber << ' ' << secondNumber << '\n';

	return 0;
}
