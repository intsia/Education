#include <iostream>

/*
"����-1"  � ������� ����������� ����������, �������� ������ ������� ��������� ����� ������������������ 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5... ����� ����������� ����������� ������������� ��� �������� ����������� �������� ��� ����� ����������.

������� ������
���� ���������� ������ (�� 1 �� 1000000), ������� �������� ��������� ����� ���������.

�������� ������
��������� ������ ����������
*/

void CyclesI()
{
	int duration = 0;
	std::cin >> duration;

	for (int result = 1; ;result++)
	{
		int i;
		i = result;
		while (i-- > 0)
		{
			std::cout << result << ' ';
			if (--duration == 0)
			{
				return;
			}
		}
	}


}