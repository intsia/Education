#include <iostream>

/*
������� ������
�������� 4 �����: a, b, c � d. 

�������� ������
�������� ��� ����� �� ������� �� a �� b, ������ ������� c ��� ������� �� d. ���� ����� ����� �� ����������, �� ������ �������� �� �����.
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