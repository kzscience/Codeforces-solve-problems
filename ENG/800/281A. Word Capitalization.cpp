/* 281A. Word Capitalization - (https://codeforces.com/problemset/problem/281/A)
1) time limit per test 2 seconds
2) memory limit per test 256 megabytes
3) inputstandard input
4) outputstandard output
*/

/* Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.
*/

/*
Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 10^3.

Output
Output the given word after capitalization.
*/


/* Examples:

Input:
ApPLe

Output:
ApPLe


Input:
konjac

Output:
Konjac
*/

#include <iostream>
using std::cin;
using std::cout;
 
 
int main()
{
	std::string s;
	char f;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (i == 0) {
			f = toupper(s[0]);
			cout << f;
		}
		else {
			cout << s[i];
		}
	}
 
	return 0;
}
