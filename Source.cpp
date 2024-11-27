// this will create a program that generates a pictures of + and adds one + each time it goes down a line

#include <iostream> 

int main() {
	int lines = 10;

	std::cout << " Pattern A " << std::endl;

	for (int i = 1; i <= lines; ++i) {
		for (int j = 0; j < i; ++j) {
			std::cout << "+";

		}
		std::cout << std::endl;
	}

	std::cout << " Pattern B " << std::endl;

	for (int i = lines; i > 0; --i) {
		for (int j = 0; j < i; ++j) {
			std::cout << "+";
		}
		std::cout << std::endl;
	}
	return 0;
}
