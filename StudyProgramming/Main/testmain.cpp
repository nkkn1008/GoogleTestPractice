#include <iostream>

int main(int argc, char **argv) {
	std::cout << "Running main() from testmain.cc\n";

	int digit = 0;
	
	std::cout << "Enter a single digit number, 0-9:";
	digit = std::cin.get();

	int sum = 0;
	sum = digit - '0';
	std::cout << "Sum of digit in double number:" << sum << "\n";
}
