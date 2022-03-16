#include <iostream>

void ExF()
{
	const int kDay = 60 * 60 * 24;
	const int kHour = 60 * 60;
	int n = 0;
	std::cin >> n;
	printf("%d:%.2d:%.2d", (n / kHour) % 24, (n % kHour) / 60, (n % kHour) % 60);
}