/*
Online algorithm for checking palindrome in a stream
Given a stream of characters (characters are received one by one), write a function that prints ‘Yes’ if a character makes the complete string palindrome, else prints ‘No’.
Examples:
Input: str[] = "abcba"
Output: a Yes   // "a" is palindrome
b No    // "ab" is not palindrome
c No    // "abc" is palindrome
b No    // "abcb" is not palindrome
a Yes   // "abcba" is palindrome
Input: str[] = "aabaacaabaa"
Output:  a Yes   // "a" is palindrome
a Yes   // "aa" is palindrome
b No    // "aab" is not palindrome
a No    // "aaba" is not palindrome
a Yes   // "aabaa" is palindrome
c No    // "aabaac" is not palindrome
a No    // "aabaaca" is not palindrome
a No    // "aabaacaa" is not palindrome
b No    // "aabaacaab" is not palindrome
a No    // "aabaacaaba" is not palindrome
a Yes   // "aabaacaabaa" is palindrome
Let input string be str[0..n-1]. A Simple Solution is to do following for every character str[i] in input string. Check if substring str[0…i] is palindrome, then print yes, else print no.
A Better Solution is to use the idea of Rolling Hash used in Rabin Karp algorithm. The idea is to keep track of reverse of first half and second half (we also use first half and reverse of second half) for every index. Below is complete algorithm.
1) The first character is always a palindrome, so print yes for
first character.
2) Initialize reverse of first half as "a" and second half as "b".
Let the hash value of first half reverse be 'firstr' and that of
second half be 'second'.
3) Iterate through string starting from second character, do following
for every character str[i], i.e., i varies from 1 to n-1.
a) If 'firstr' and 'second' are same, then character by character
check the substring ending with current character and print
"Yes" if palindrome.
Note that if hash values match, then strings need not be same.
For example, hash values of "ab" and "ba" are same, but strings
are different. That is why we check complete string after hash.
b) Update 'firstr' and 'second' for next iteration.
If 'i' is even, then add next character to the beginning of
'firstr' and end of second half and update
hash values.
If 'i' is odd,  then keep 'firstr' as it is, remove leading
character from second and append a next
character at end.
Let us see all steps for example string “abcba”
Initial values of ‘firstr’ and ‘second’
firstr’ = hash(“a”), ‘second’ = hash(“b”)
Start from second character, i.e.,
i = 1
a) Compare ‘firstr’ and ‘second’, they don’t match, so print no.
b) Calculate hash values for next iteration, i.e., i = 2
Since i is odd, ‘firstr’ is not changed and ‘second’ becomes hash(“c”)
i = 2
a) Compare ‘firstr’ and ‘second’, they don’t match, so print no.
b) Calculate hash values for next iteration, i.e., i = 3
Since i is even, ‘firstr’ becomes hash(“ba”) and ‘second’ becomes hash(“cb”)
i = 3
a) Compare ‘first’ and ‘second’, they don’t match, so print no.
b) Calculate hash values for next iteration, i.e., i = 4
Since i is odd, ‘firstr’ is not changed and ‘second’ becomes hash(“ba”)
i = 4
a) ‘firstr’ and ‘second’ match, compare the whole strings, they match, so print yes
b) We don’t need to calculate next hash values as this is last index
The idea of using rolling hashes is, next hash value can be calculated from previous in O(1) time by just doing some constant number of arithmetic operations.
Below is C implementation of above approach.
*/

// c program for online algorithm for palindrome checking

#include <cstdio>
#include <cstring>

using namespace std;

// d is the number of characters in input alphabet

#define d 256

// q is prime number used for evaluating
#define q 103

void checkPalindrome(char str[]) {
	// length of input string
	int N = strlen(str);

	// a single characters is always a palindrome
	printf("%c yes\n", str[0]);

	// return if string has only one character
	if (N == 1)
		return;

	// initialize first half reverse and second half for as firststr and second character
	int firstr = str[0] % q;
	int second = str[1] % q;

	int h = 1, i, j;

	// Now check for palindrome from second character onward
	for (i = 1; i < N; i++) {
		// if the hash values of 'firstr' and 'second' match, then only check individual characters
		if (firstr == second) {
			// check if str[0..i] is palindrome using simple character by character match
			for (j = 0; j < i / 2; j++) {
				if (str[j] != str[i - j])
					break;
			}
			(j == i / 2) ? printf("%c yes\n", str[i]) :
				printf("%c No\n", str[i]);
		}
		else printf("%c no\n", str[i]);

		// calculate hash values for next iteration don't calculate hash for next characters if this
		// is the last character of string
		if (i != N - 1) {
			// if i is even (next i is odd)
			if (i % 2 == 0) {
				// add next character after first hafl at beginning of 'firstr'
				h = (h*d) % q;
				firstr = (firstr + h*str[i / 2]) % q;

				// add next character after second half at the end of second hafl
				second = (second*d + str[i + 1]) % q;
			}
			else {
				// if next i is odd (next i is even) then we need not to change firstr, we need to
				// remove first character of second and append a character to it.
				second = (d*(second + q - str[(i + 1) / 2] * h) % q + str[i + 1]) % q;
			}
		}
	}
}

// driver program to test above function

int main() {
	char *text = "aabaacaabaa";
	checkPalindrome(text);
	getchar();
	return 0;
}
