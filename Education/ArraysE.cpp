#include <iostream>

/*
Напишите программу, которая циклически сдвигает элементы массива вправо
(например, если элементы нумеруются, начиная с нуля, то 0-й элемент становится 1-м, 1-й становится 2-м,
..., последний становится 0-м, то есть массив {3, 5, 7, 9} превращается в массив {9, 3, 5, 7}).

Входные данные
Сначала задано число N — количество элементов в массиве (1≤N≤35).
Далее через пробел записаны N чисел — элементы массива. Массив состоит из целых чисел.

Выходные данные
Необходимо вывести массив, полученный после сдвига элементов.
*/

void ArraysE()
{
	int n = 1;
	std::cin >> n;

	int arr[35] = { 0 };
	int last = 0;
	if (n != 0) // проверка недопустимости значения 0 для длины массива
	{
		for (int i = 0; i < n; i++) // наполняем массив
		{
			std::cin >> arr[i];
		}

		last = arr[n - 1]; // сохраняем значение последнего элемента массива

		for (int i = 0; i < (n - 1); i++) // с конца смещаем массив вправо
		{
			arr[n - i - 1] = arr[n - i - 2];
		}

		arr[0] = last; // присваиваем первому элементу массива сохраненное значение последнего элемента массива

		for (int i = 0; i < n; i++) // выводим массив
		{
			std::cout << arr[i] << ' ';
		}
	}
}