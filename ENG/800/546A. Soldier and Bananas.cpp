/* 546A. Soldier and Bananas - (https://codeforces.com/problemset/problem/546/A)
1) time limit per test 1 second
2) memory limit per test 256 megabytes
3) input standard input
4) output standard output
*/

/* A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on 
(in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?
*/

/*
Input
The first line contains three positive integers k, n, w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109), the cost of the first banana, 
initial number of dollars the soldier has and number of bananas he wants.

Output
Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.
*/

/* Examples

Input:
3 17 4
Output:
13

*/

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
 
int main()
{
	int k, n, w,s=0;
	cin >> k >> n >> w;
 
 
	for (int i = 1; i <= w && w > 1; i++) {
			s += (k * i);
	}
	if (n>s) {
		cout << 0;
	}
	else {
		cout << abs(s - n);
	}
 
 
 
	
	return 0;
}
