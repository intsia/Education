#include <iostream>

/*
�����������, ������� ����� ������ N ����� �����, ������������� �����, ������������� �����.

������� ������
�������� ����� N, � ����� N ����� �����.

�������� ������
���������� ������� ������� ����� �����, ����� ����� ������������� � ������������� �����.
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