/* 41A. Translation - (https://codeforces.com/problemset/problem/41/A)
1) time limit per test 2 seconds
2) memory limit per test 256 megabytes
3) input standard input
4) output standard output
*/

/*
The translation from the Berland language into the Birland language is not an easy task. 
Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. 
For example, a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». 
Vasya translated word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.
*/

/*
Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. 
The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.
*/


/* Examples:
Input:
code
edoc
Output:
YES

Input:
abb
aba
Output:
NO

Input:
code
code
Output:
NO
*/

#include <iostream>
using std::cin;
using std::cout;
 
int main() {
	std::string s, s1;
	int r = 0;
	cin >> s >> s1;
	for (int i = 0; i < s.size(); i++) {
		if (s[s.size() - i - 1] == s1[i]) {
			r++;
		}
	}
	if (r == s.size()) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
 
	return 0;
}
