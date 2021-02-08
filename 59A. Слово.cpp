/* 59A. Слово - (https://codeforces.com/problemset/problem/59/A)
1) ограничение по времени на тест 2 seconds
2) ограничение по памяти на тест 256 megabytes
3) ввод стандартный ввод
4) вывод стандартный вывод
*/

/* Васю очень огорчает, что многие люди в интернете смешивают маленькие и большие буквы в одном слове. Поэтому он решил разработать расширение для своего любимого браузера, 
которое меняет регистр букв в каждом слове так, чтобы оно либо состояло только из маленьких букв, либо, наоборот, только из больших. 
При этом в слове должно измениться как можно меньше букв. Например, слово HoUse должно замениться на house, а слово ViP — на VIP. В случае, 
если в слове содержится одинаковое количество маленьких и больших букв, нужно заменить все буквы на маленькие. Например, maTRIx нужно заменить на matrix. 
Ваша задача — обработать указанным способом одно заданное слово.
*/

/*
Входные данные
В первой строке записано слово s — оно состоит из больших и маленьких латинских букв и имеет длину от 1 до 100.

Выходные данные
Выведите исправленное слово s. Если в заданном слове s строго больше заглавных букв, приведите его к верхнему регистру, иначе — к нижнему.
*/


/* Примеры:

Входные данные:
HoUse
Выходные данные:
house

Входные данные:
ViP
Выходные данные:
VIP

Входные данные:
maTRIx
Выходные данные:
matrix
*/

#include <iostream>
using std::cin;
using std::cout;
 
int main()
{
	int a=0, b = 0;
	std::string s;
	char s1;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		s1 = s[i];
		if (s1 <= 90) {
			a++;
		}
		else
			b++;
		}
 
	for (int i = 0; i < s.size(); i++) {
		if (a > b) {
			s[i] = toupper(s[i]);
		}
		else {
			s[i] = tolower(s[i]);
		}
	}
	cout << s;
	return 0;
}


