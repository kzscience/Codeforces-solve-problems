/* 271A. Beautiful Year - (https://codeforces.com/problemset/problem/271/A)
1) time limit per test 2 seconds
2) memory limit per test 256 megabytes
3) input standard input
4) output standard output
*/

/*
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.
*/

/*
Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.
*/

/* Examples:
Input:
1987
Output:
2013

Input:
2013
Output:
2014
*/

#include <iostream>
using std::cin;
using std::cout;
 
int main() {
	int n;
	int a, b, c, d;
	cin >> n;
	for (int i = 0; i < n; i++) {
		n++;
		a = n / 1000;
		b = (n / 100) % 10;
		c = (n / 10) % 10;
		d = n % 10;
		if (a != b && a != c && a != d && b != c && b != d && c != d) {
			break;
		}
	}
	cout << n;
 
	return 0;
}
