#include <iostream>

void ExL()
{
	int num = 0;
	std::cin >> num;
	
	int d = num % 10;
	int c = (num % 100) / 10;
	int b = (num % 1000) / 100;
	int a = num / 1000;

	std::cout << (a - d) * 100 + (b - c) + 1;
}