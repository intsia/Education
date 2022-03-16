#include <iostream>

void ExH()
{
	const int proportion = 100;
	int a = 0, b = 0, n = 0;
	std::cin >> a >> b >> n;
	std::cout << a * n + b * n / proportion << ' ' << b * n % proportion;
}