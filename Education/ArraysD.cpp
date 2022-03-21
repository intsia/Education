﻿#include <iostream>

/*
Напишите программу, которая переставляет элементы массива в обратном порядке без использования дополнительного массива. 
Программа должна считать массив, поменять порядок его элементов,
затем вывести результат (просто вывести элементы массива в обратном порядке – недостаточно!)

Входные данные
Сначала задано число N — количество элементов в массиве (1≤N≤35). 
Далее через пробел записаны N чисел — элементы массива. Массив состоит из целых чисел.

Выходные данные
Необходимо вывести массив, полученный после перестановки элементов.
*/

void ArraysD()
{
	int n = 0;
	std::cin >> n;

	int arr[35] = { 0 };
	int num = 0;

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < n / 2; i++)
	{
		num = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = num;
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}
}