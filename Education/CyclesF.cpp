#include <iostream>

/*
ѕодсчитайте, сколько среди данных N чисел нулей, положительных чисел, отрицательных чисел.

¬ходные данные
¬водитс€ число N, а затем N целых чисел.

¬ыходные данные
Ќеобходимо вывести сначала число нулей, затем число положительных и отрицательных чисел.
*/

void CyclesF()
{
	int n = 0;
	std::cin >> n;

	int number = 0;
	int zero = 0;
	int pozitive = 0;
	int negative = 0;

	for (n; n > 0; n--)
	{
		std::cin >> number;
		if (number > 0)
		{
			pozitive++;
		}
		else if (number < 0)
		{
			negative++;
		}
		else
		{
			zero++;
		}
	}

	std::cout << zero << ' ' << pozitive << ' ' << negative;
}