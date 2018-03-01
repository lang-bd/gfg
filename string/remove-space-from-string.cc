/*
Remove spaces from a given string
Given a string, remove all spaces from the string and return it.
Input:  "g  eeks     for ge  eeks  "
Output: "geeksforgeeks"
Expected time complexity is O(n) and only one traversal of string.
We strongly recommend you to minimize your browser and try this yourself first.
Below is a Simple Solution
1) Iterate through all characters of given string, do following
a) If current character is a space, then move all subsequent
characters one position back and decrease length of the
result string.
Time complexity of above solution is O(n2).
A Better Solution can solve it in O(n) time. The idea is to keep track of count of non-space character seen so far.
1) Initialize 'count' = 0 (Count of non-space character seen so far)
2) Iterate through all characters of given string, do following
a) If current character is non-space, then put this character
at index 'count' and increment 'count'
3) Finally, put '\0' at index 'count'
Below is C++ implementation of above algorithm.
*/

#include <iostream>

using namespace std;

// function to remove all spaces from a given string
void removeSpaces(char *str) {
	// to keep track of non-space character count
	int count = 0;

	// traverse the given string. if current character
	// is not space, then place it at index 'count++'
	for (int i = 0; str[i]; i++) {
		if (str[i] != ' ') {
			str[count++] = str[i]; // here count is incremented
		}
	}
	str[count] = '\0';
}

// driver program to test above function
int main() {
	char str[] = "g eeks    for ge eeks ";
	removeSpaces(str);
	cout << str;
	getchar();
	return 0;
}