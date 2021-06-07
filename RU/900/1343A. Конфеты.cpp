/* 1343A. Конфеты - (https://codeforces.com/problemset/problem/1343/A?locale=ru)
1) ограничение по времени на тест 1 секунда
2) ограничение по памяти на тест 256  мегабайт
3) ввод стандартный ввод
4) вывод стандартный вывод
*/

/*
Недавно Вова нашел n фантиков от конфет. Он помнит, что он покупал x конфет в первый день, 2x конфет во второй день, 4x конфет в третий день, …, 
2^k−1x конфет в k-й день. Но есть проблема: Вова не помнит ни x, ни k, но он уверен, что x и k — положительные целые числа и k>1.

Вова будет удовлетворен, если вы назовете ему любое положительное целое число x
такое, что существует целое число k>1, при котором x+2x+4x+⋯+2k−1x=n. Гарантируется, что существует как минимум одно решение. Обратите внимание: k>1.

Вам нужно ответить на t
независимых наборов тестовых данных.
*/

/*
Входные данные
Первая строка теста содержит одно целое число t (1≤t≤10^4) — количество наборов тестовых данных. Затем следуют t наборов тестовых данных.
Единственная строка набора тестовых данных содержит одно целое число n (3≤n≤10^9) — количество конфетных фантиков, которые нашел Вова. 
Гарантируется, что существуют некоторые положительные целые числа x и k>1 такие, что x+2x+4x+⋯+2^k−1x=n.

Выходные данные
Выведите одно целое число — любое положительное целое значение x такое, что существует целое число k>1, при котором x+2x+4x+⋯+2^k−1x=n.
*/

/* Примеры:
Входные данные:
7
3
6
7
21
28
999999999
999999984
Выходные данные:
1
2
1
7
4
333333333
333333328

Примечание:
В первом наборе тестовых данных примера одним из возможных ответов является x=1,k=2. Тогда 1⋅1+2⋅1 равняется n=3.

Во втором наборе тестовых данных примера одним из возможных ответов является x=2,k=2. Тогда 1⋅2+2⋅2 равняется n=6.

В третьем наборе тестовых данных примера одним из возможных ответов является x=1,k=3. Тогда 1⋅1+2⋅1+4⋅1 равняется n=7.

В четвертом наборе тестовых данных примера одним из возможных ответов является x=7,k=2. Тогда 1⋅7+2⋅7 равняется n=21.

В пятом наборе тестовых данных примера одним из возможных ответов является x=4,k=3. Тогда 1⋅4+2⋅4+4⋅4 равняется n=28.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	int* are = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		for (int j = 2; j < 10e9; ++j) {
			int p = pow(2, j) - 1;
			if (arr[i] % p == 0) {
				are[i] = arr[i] / p;
				break;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << are[i] << endl;
	}



delete [] arr;
delete[] are;
	return 0;
}
 
