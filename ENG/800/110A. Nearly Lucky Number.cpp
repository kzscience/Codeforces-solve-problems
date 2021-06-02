/* 110A. Nearly Lucky Number - (https://codeforces.com/problemset/problem/110/A)
1) time limit per test 2 seconds
2) memory limit per test 256 megabytes
3) input standard input
4) output standard output
*/

/*
Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. 
For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. 
He wonders whether number n is a nearly lucky number.
*/

/*

Input
The only line contains an integer n (1 ≤ n ≤ 10^18).

Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

Output
Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).
*/


/* Examples:
Input:
40047
Output:
NO

Input:
7747774
Output:
YES

Input:
1000000000000000000
Output:
NO

Note
In the first sample there are 3 lucky digits (first one and last two), so the answer is "NO".

In the second sample there are 7 lucky digits, 7 is lucky number, so the answer is "YES".

In the third sample there are no lucky digits, so the answer is "N
*/

#include <iostream>
using std::cin;
using std::cout;
 
int main() {
	int r = 0;
	std::string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '4' || s[i] == '7') {
			r++;
		}
	}
 
	if (r == 4 || r == 7 && s.size() > 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
 
	return 0;
}
