#include <iostream>

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