#include <iostream>

/*
*
?????? ? ????? ?????? ????????? ( ax + b ) : ( cx + d ) = 0.

??????? ??????
???????? 4 ?????: a, b, c ? d; c ? d ?? ????? ???? ????????????.

???????? ??????
?????????? ??????? ??? ????????????? ???????, ???? ?? ????? ???????, ?NO? (??? ???????), ???? ????????????? ??????? ???, ? ?INF? (??? ???????), ???? ?? ?????????? ?????.

*/

void IfElseI()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (a == 0 && b == 0)
    {
        std::cout << "INF";
    }
    else
    {
        if (a == 0 || b % a != 0 || c * (-b / a) + d == 0)
        {
            std::cout << "NO";
        }
        else
        {
            std::cout << -b / a;
        }
    }
}