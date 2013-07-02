#include <iostream>
#include <vector>

#include "gtest/gtest.h"

int getDgoubleDigitValue(int digit)
{
	int doubleDigit = digit * 2;

	int sum = 0;

	if (doubleDigit >= 10)
	{
		sum = 1 + doubleDigit % 10;
	}else
	{
		sum = doubleDigit;
	}
	return sum;
}



GTEST_API_ int main(int argc, char **argv) {
	std::cout << "Running main() from testmain.cc\n";

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

	// int digit = 0;
	
	// std::cout << "Enter a single digit number, 0-9:";
	// //std::cin >> digit;
	// digit = std::cin.get();
	// //std::cin >> digit;

	// int sum = 0;
	// sum = digit - '0';
	// //sum = getDgoubleDigitValue(digit);

	// std::cout << "Sum of digit in double number:" << sum << "\n";
}
