/* 266B. Queue at the School - (https://codeforces.com/problemset/problem/266/B)
1) time limit per test 2 seconds
2) memory limit per test 256 megabytes
3) input standard input
4) output standard output
*/

/*
During the break the schoolchildren, boys and girls, formed a queue of n people in the canteen. Initially the children stood in the order they entered the canteen. 
However, after a while the boys started feeling awkward for standing in front of the girls in the queue and they started letting the girls move forward each second.

Let's describe the process more precisely. Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, 
at that the person in the position number 1 is served first. Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position, 
then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy. The time is given in seconds.

You've got the initial position of the children, at the initial moment of time. Determine the way the queue is going to look after t seconds
*/

/*
The first line contains two integers n and t (1 ≤ n, t ≤ 50), 
which represent the number of children in the queue and the time after which the queue will transform into the arrangement you need to find.

The next line contains string s, which represents the schoolchildren's initial arrangement. If the i-th position in the queue contains a boy, 
then the i-th character of string s equals "B", 
otherwise the i-th character equals "G".
*/

/* Examples:

Input:
5 1
BGGBG
Output:
GBGGB

Input:
5 2
BGGBG
Output:
GGBGB

Input:
4 1
GGGB
Output:
GGGB

*/

#include <iostream>
using std::cin;
using std::cout;
using std::string;
 
int main() {
	int n, t, j = 1;
	string s;
	cin >> n >> t >> s;
	while (j <= t) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'B' && s[i + 1] == 'G') {
				s[i] = 'G';
				s[i + 1] = 'B';
				i++;
			}
		}
		j++;
	}
	cout << s;
 
	return 0;
}
