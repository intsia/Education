#include <iostream>

void ExD()
{
	int number = 0;
	std::cin >> number;
	std::cout << number / 100 + (number % 100) / 10 + number % 10;
}