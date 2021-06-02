/* 705A. Халк - (https://codeforces.com/problemset/problem/705/A)
1) ограничение по времени на тест 1 секунла
2) ограничение по памяти на тест 256  мегабайт
3) ввод стандартный ввод
4) вывод стандартный вывод
*/

/*
Доктор Брюс Беннер ненавидит своих врагов (сильнее, чем это делают другие). Как мы знаем, он с трудом общается, когда превращается в Халка. 
Поэтому он просит вас помочь ему с выражением своих чувств.

Халк очень любит погружение, и его чувства крайне сложные. Они состоят из n уровней, первый из них — это ненависть, второй — любовь, третий снова ненависть и так далее...

Например, для n = 1 чувства Халка выражаются как "I hate it", для n = 2 это уже "I hate that I love it", а для n = 3 — "I hate that I love that I hate it".
Помогите Брюсу выразить свои чувства на n-м уровне погружения.
*/

/*
Входные данные
В единственной строке входных данных записано единственное целое число n (1 ≤ n ≤ 100) — количество уровней погружения.

Выходные данные
Выведите строку, описывающую чувства доктора Бреннера.
*/

/* Примеры:
Входные данные:
1
Выходные данные:
I hate it

Входные данные:
2
Выходные данные:
I hate that I love it

Входные данные:
3
Выходные данные:
I hate that I love that I hate it
*/

#include <iostream>

using namespace std;

int main()
{
   int n;
   string result = "";
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      if (i % 2 == 0)
      {
         if (i == 0)
         {
            result += " I hate";
         }
         else
         {
            result += " that I hate ";
         }
      }
      else
      {
         if (i == 0)
         {
            result += " I love";
         }
         else
         {
            result += " that I love ";
         }
      }
   }

   cout << result + " it";
   return 0;
}
