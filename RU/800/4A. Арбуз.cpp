/* 4A. Арбуз - (https://codeforces.com/problemset/problem/4/A)
1) ограничение по времени на тест 1 second
2) ограничение по памяти на тест64 megabytes
3) вводстандартный ввод
4) выводстандартный вывод
*/

/* 
В один из жарких летних дней Петя и его друг Вася решили купить арбуз. 
Они выбрали самый большой и самый спелый, на их взгляд. 
После недолгой процедуры взвешивания весы показали w килограмм. 
Поспешно прибежав домой, изнемогая от жажды, ребята начали делить приобретенную ягоду, однако перед ними встала нелегкая задача. 
Петя и Вася являются большими поклонниками четных чисел, поэтому хотят поделить арбуз так, чтобы доля каждого весила именно четное число килограмм, при этом не обязательно, 
чтобы доли были равными по величине. Ребята очень сильно устали и хотят скорее приступить к трапезе, поэтому Вы должны подсказать им, удастся ли поделить арбуз, 
учитывая их пожелание. Разумеется, каждому должен достаться кусок положительного веса.
*/


/* Входные данные
В первой и единственной строке входных данных записано целое число w (1 ≤ w ≤ 100) — вес купленного ребятами арбуза.

Выходные данные
Выведите YES, если ребята смогут поделить арбуз на две части, каждая из которых весит четное число килограмм, и NO в противном случае.
*/

/* Примеры:
Входные данные:8
Выходные данные: Yes

Примечание:
Например, ребята могут поделить арбуз на две части размерами 2 и 6 килограммов соответственно (другой вариант — две части 4 и 4 килограмма). 
*/

#include <iostream>
using std::cin;
using std::cout;
 
int main()
{
   int  w;
    cin >> w;
    if (w % 2 == 0  && w>2) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
 
 
    return 0;
}
