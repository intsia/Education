#include <iostream>

/*

Дано трехзначное число. Найдите сумму его цифр.

Входные данные
Вводится трехзначное число.

Выходные данные
Выведите ответ на задачу

*/

void OperatorsD()
{
	int number = 0;
	std::cin >> number;
	std::cout << number / 100 + (number % 100) / 10 + number % 10;
}