#include <iostream>

/*
Последовательность Фибоначчи определяется так:

φ0=0,  φ1=1, ..., φn=φn-1+φn-2.

По данному числу n определите n-е число Фибоначчи φn.

Входные данные
Вводится натуральное число n.

Выходные данные
Выведите ответ на задачу.
*/

void CyclesG()
{
	int n = 0;
	std::cin >> n;

	int number = 0;
	int numberA = 0;
	int numberB = 1;
	

	for (n; n > 0; n--)
	{
		number = numberA + numberB;
		numberB = numberA;
		numberA = number;

	}

	std::cout << number;
}