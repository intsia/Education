#include <iostream>

void OperatorsA()
{
	int inputNumber = 0;
	std::cin >> inputNumber;
	std::cout << "The next number for the number " << inputNumber << " is " << inputNumber + 1 << ".\n";
	std::cout << "The previous number for the number " << inputNumber << " is " << inputNumber - 1 << ".";
}