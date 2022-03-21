#include <iostream>

/*

� ��������� ����� ������� ���������� � 9:00.
����������������� ����� � 45 �����,
����� 1-��, 3-��, 5-�� � �.�. ������ �������� 5 �����,
� ����� 2-��, 4-��, 6-�� � �.�. � 15 �����.
����������, ����� ������������� ��������� ����.

������� ������
��� ����� ����� (����� �� 1 �� 10).

�������� ������
�������� ��� ����� �����: ����� ��������� ����� � ����� � �������.
��� ������� ���� ������ ������ ������������ ������� � ��������� ������������.

*/

void OperatorsG()
{
	const int kStartLessons = 9 * 60;
	const int kLessonDuration = 45;
	const int kBreakOdd = 5;
	const int kBreakEven = 15;

	int lessonCount = 0;
	std::cin >> lessonCount;

	int result = lessonCount * kLessonDuration + kStartLessons;
	result += (lessonCount - 1) * kBreakEven - lessonCount / 2 * (kBreakEven - kBreakOdd);
	std::cout << result / 60 << ' ' << result % 60;
}