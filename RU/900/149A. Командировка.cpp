/* 149A. Командировка (https://codeforces.com/problemset/problem/149/A)
1) ограничение по времени на тест 2 секунды
2) ограничение по памяти на тест 256  мегабайт
3) ввод стандартный ввод
4) вывод стандартный вывод
*/

/*
Какая радость! Родители Пети уехали в командировку на целый год, предоставив шаловливого мальчугана самому себе. Петя обрадовался неимоверно. 
Он прыгал на кровати и бросался подушками целыми днями напролет, пока...

Сегодня Петя полез в буфет и обнаружил там страшную записку. Родители поручили сыну поливать их любимый цветок весь год, каждый день, утром, в обед и вечером. 
«Стоп!» — подумал Петя. Он точно знал, что если выполнять поручение родителей в течение i-го (1 ≤ i ≤ 12) месяца года, то цветок вырастет на ai сантиметров, 
а если не поливать цветок в i-ый месяц, то цветок за этот месяц не вырастет. Также Петя знает, что родители ни за что на свете не поверят, что он поливал цветок, 
если цветок вырастет строго меньше, чем на k сантиметров.

Помогите Пете выбрать минимальное количество месяцев, в которые он будет поливать цветок, так чтобы цветок вырос не менее чем на k сантиметров.
*/

/*
Входные данные
Первая строка содержит ровно одно целое число k (0 ≤ k ≤ 100). В следующей строке записаны двенадцать целых чисел, разделенных пробелами: 
i-ое (1 ≤ i ≤ 12) число в строке обозначает ai (0 ≤ ai ≤ 100). 

Выходные данные
Выведите единственное целое число — минимальное количество месяцев, в которые Петя будет поливать цветок, так чтобы цветок вырос не менее чем на k сантиметров. 
Если цветок не сможет вырасти на k сантиметров за год, выведите -1.
*/

/* Примеры:
Входные данные:
5
1 1 1 1 2 2 3 2 2 1 1 1
Выходные данные:
2

Входные данные:
0
0 0 0 0 0 0 0 1 1 2 3 0
Выходные данные:
0


Входные данные:
11
1 1 4 1 1 5 1 1 4 1 1 1
Выходные данные:
3

Примечание:
Рассмотрим первый тестовый пример. В нем достаточно поливать цветок в течение седьмого и девятого месяца, тогда цветок вырастет ровно на пять сантиметров.

Во втором тестовом примере родители поверят Пете, даже если цветок совсем не вырастет (k = 0). Значит, Петя может не поливать цветок вовсе.
*/

﻿#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,r=0,x=0;
    cin >> n;
    int *arr = new int [12];   
    for (int i = 0; i < 12; i++) {
        cin >> arr[i];
    }
    if (n != 0) {
        sort(arr, arr + 12);

        for (int i = 0; i < 12; i++) {
            r += arr[12 - (i + 1)];
            x++;

            if (r >= n) {
                break;
            }
        }

        if (r >= n) {
            cout << x;
          
        } else{
            cout << -1;
        }
    }
    else {
        cout << x;
    }

    delete [] arr;
    return  0;
}
