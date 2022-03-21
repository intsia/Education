#include <iostream>

/*

¬ некоторой школе зан€ти€ начинаютс€ в 9:00.
ѕродолжительность урока Ч 45 минут,
после 1-го, 3-го, 5-го и т.д. уроков перемена 5 минут,
а после 2-го, 4-го, 6-го и т.д. Ч 15 минут.
ќпределите, когда заканчиваетс€ указанный урок.

¬ходные данные
ƒан номер урока (число от 1 до 10).

¬ыходные данные
¬ыведите два целых числа: врем€ окончани€ урока в часах и минутах.
ѕри решении этой задачи нельз€ пользоватьс€ циклами и условными инструкци€ми.

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