#include <iostream>

void OperatorsK()
{
	int h = 0, a = 0, b = 0;
	std::cin >> h >> a >> b;
	std::cout << (h - b - 1) / (a - b) + 1;
}