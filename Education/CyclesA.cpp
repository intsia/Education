#include <iostream>

/*
Входные данные
Вводятся 4 числа: a, b, c и d. 

Выходные данные
Выведите все числа на отрезке от a до b, дающие остаток c при делении на d. Если таких чисел не существует, то ничего выводить не нужно.
*/

void CyclesA()
{
	int a = 0, b = 0, c = 0, d = 0;
	std::cin >> a >> b >> c >> d;

	if (d != 0)
	{
		if (a < b)
		{
			for (int i = a; i <= b; i++)
			{
				if (i % d == c)
				{
					std::cout << i << ' ';
				}
			}
		}
		else
		{
			for (int i = a; i >= b; i--)
			{
				if (i % d == c)
				{
					std::cout << i << ' ';
				}
			}
		}
	}
}