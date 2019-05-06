#include "Exercise.h"

int main() {
	std::cout << multiply("", "") << std::endl;
	std::cout << multiply("2 3"," ") << std::endl;
	std::cout << multiply("4,6,5", ",") << std::endl;
	std::cout << multiply("4/6/5", "/") << std::endl;
	std::cout << multiply("100X3", "X") << std::endl;
	return 0;
}