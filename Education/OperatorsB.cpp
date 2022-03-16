#include <iostream>

void OperatorsB()
{
	int v = 0;
	int t = 0;
	std::cin >> v;
	std::cin >> t;
	int s = v * t;
	int finish = (s % 109 + 109) % 109;
	std::cout << finish;
}