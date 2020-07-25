# Antipalindrome
> https://codeforces.com/problemset/problem/981/A
```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard output
```
## Problem
A string is a palindrome if it reads the same from the left to the right and from the right to the left. For example, the strings "kek", "abacaba", "r" and "papicipap" are palindromes, while the strings "abb" and "iq" are not.

A substring s[l…r] (1 ≤ l ≤ r ≤ |s|) of a string s = s1s2…s|s| is the string slsl + 1…sr.

Anna does not like palindromes, so she makes her friends call her Ann. She also changes all the words she reads in a similar way. Namely, each word s is changed into its longest substring that is not a palindrome. If all the substrings of s are palindromes, she skips the word at all.

Some time ago Ann read the word s. What is the word she changed it into?

## Input
The first line contains a non-empty string s with length at most 50 characters, containing lowercase English letters only.

## Output
If there is such a substring in s that is not a palindrome, print the maximum length of such a substring. Otherwise print 0.

Note that there can be multiple longest substrings that are not palindromes, but their length is unique.
## Examples
---
**input**
```
mew
```
**output**
```
3
```
---
**input**
```
wuffuw
```
**output**
```
5
```
---
**input**
```
qqqqqqqq
```
**output**
```
0
```
---
## Note
"mew" is not a palindrome, so the longest substring of it that is not a palindrome, is the string "mew" itself. Thus, the answer for the first example is 3.

The string "uffuw" is one of the longest non-palindrome substrings (of length 5) of the string "wuffuw", so the answer for the second example is 5.

All substrings of the string "qqqqqqqq" consist of equal characters so they are palindromes. This way, there are no non-palindrome substrings. Thus, the answer for the third example is 0.

## Solution
```c++
//Lang		:	GNU C++11
//Time		:	31 ms
//Memory	:	4000 KB
#include<iostream>
#include<math.h>
using namespace std;
int palindromo(string s){
	int n=(ceil(s.size()/2.0)-1),c=0;
	for(int i=0;i<=n;i++){
		if(s[i]==s[(s.size()-1)-i]){c++;}
	}
	if(c==(n+1)){return 1;}
	else{return -1;}
}
void palintroll(string s){
	int t=0;
	if(palindromo(s)==-1 || s.size()==0){cout<<s.size()<<"\n";}
	else{
		if(t%2==0) s.erase(s.begin());
		else 	   s.erase(s.begin()+s.size()-1);
		palintroll(s);
	}
	t++;
}
int main(){
	string s;
	while(cin>>s){
		palintroll(s);
	}
}
```
