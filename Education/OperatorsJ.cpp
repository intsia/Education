#include <iostream>

void OperatorsJ()
{
	int n = 0, k = 0;
	std::cin >> n >> k;
	std::cout << (n - k % n) % n;
}