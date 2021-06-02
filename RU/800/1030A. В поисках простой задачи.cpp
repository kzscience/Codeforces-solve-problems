/* 1030A. В поисках простой задачи - (https://codeforces.com/contest/1030/submission/110179389)
1) ограничение по времени на тест 1 секунда
2) ограничение по памяти на тест 256  мегабайт
3) ввод стандартный ввод
4) вывод стандартный вывод
*/

/*
Начиная очередной чемпионат, координаторы Codeforces всегда стараются сделать первую задачу максимально простой. В этот раз координатор выбрал некоторую задачу и спросил у n

человек, достаточно ли она простая. Каждый человек ответил, что задача простая, или что задача сложная.

Если хоть кто-то из этих n
человек ответил, что задача сложная, ее нужно заменить, иначе не нужно. По данным ответам определите, нужно ли заменить задачу.
*/

/*
Входные данные
В первой строке задано одно целое число n (1≤n≤100) — количество опрошенных человек.

Во второй строке заданы n
целых чисел, каждое из которых равно либо 0, либо 1 — ответы опрошенных. Если i-е число равно 0, то i-й человек считает задачу простой, а если оно равно 1, 
то i-й человек считает задачу сложной.

Выходные данные
Выведите одно слово: «EASY», если задача по мнению всех опрошенных является легкой, либо «HARD», если хотя бы один опрошенный считает задачу сложной.

Вы можете выводить каждую из букв в любом регистре (как строчную или как заглавную): «EASY», «easy», «EaSY» и «eAsY» будут распознаны корректно.
*/

/* Примеры:
Входные данные:
3
0 0 1
Выходные данные:
HARD 

Входные данные:
1
0
Выходные данные:
EASY

Примечание:
В первом примере третий человек считает, что задача слишком сложная, поэтому ее надо заменить.
Во втором примере единственный человек считает, что задача простая, поэтому ее не обязательно заменять.
*/

#include <iostream>
     
    using namespace std;
     
    int main()
    {
       int n;
       cin >> n;
     
       int *arr = new int[n];
       for (int i = 0; i < n; i++)
       {
          cin >> arr[i];
          if (arr[i] == 1)
          {
             cout << "Hard" << endl;
             break;
          }
          else if (i == n - 1)
          {
             cout << "Easy" << endl;
          }
       }
     
       delete[] arr;
       return 0;
    }
