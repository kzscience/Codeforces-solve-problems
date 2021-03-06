/* 50A. Укладка доминошками - (https://codeforces.com/problemset/problem/50/A)
1) ограничение по времени на тест 2 секунды
2) ограничение по памяти на тест 256 мегабайт
3) вводстандартный ввод
4) выводстандартный вывод
*/

/* Дана прямоугольная клеточная доска размера M × N клеток. Также дано неограниченное количество стандартных доминошек размера 2 × 1 клетку. 
Доминошки можно поворачивать. Требуется уложить как можно больше доминошек на доску так, чтобы соблюдались следующие условия:

1. Каждая доминошка полностью покрывает две клетки доски.

2. Никакие две доминошки не перекрываются.

3. Каждая доминошка полностью лежит внутри доски. Касание краев доски допускается.

Найдите максимальное количество доминошек, которое можно уложить с данными ограничениями.
*/

/*
Входные данные
В единственной строке записано два целых числа M и N — размеры доски в клетках (1 ≤ M ≤ N ≤ 16).

Выходные данные
Выведите одно число — максимальное количество доминошек, которое можно уложить.
*/

/* Примеры:

Входные данные:
2 4
Выходные данные:
4

Входные данные:
3 3
Выходные данные:
4
*/

#include <iostream>
using std::cin;
using std::cout;
 
int main()
{
    int n, m;
    cin >> n >> m;
    cout << (n * m) / 2;
 
    return 0;
}
