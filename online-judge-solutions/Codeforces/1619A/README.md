# Square String?

> https://codeforces.com/problemset/problem/1619/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

A string is called square if it is some string written twice in a row. For example, the strings "aa", "abcabc", "abab" and "baabaa" are square. But the strings "aaa", "abaaab" and "abcdabc" are not square.

For a given string s determine if it is square.

## Input

The first line of input data contains an integer ***t*** (***1*** ≤ ***t*** ≤ ***100***) —the number of test cases.

This is followed by ***t*** lines, each containing a description of one test case. The given strings consist only of lowercase Latin letters and have lengths between ***1*** and ***100*** inclusive.

## Output

For each test case, output on a separate line:

* YES if the string in the corresponding test case is square,
* NO otherwise.

You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as a positive response).

## Examples

---
**input**
```
10
a
aa
aaa
aaaa
abab
abcabc
abacaba
xxyy
xyyx
xyxy
```
**output**
```
NO
YES
NO
YES
YES
YES
NO
NO
NO
YES
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	100 KB
#include<iostream>
using namespace std;
int main(){
	int t;
	while(cin>>t){
		while(t--){
			string s;
			cin>>s;
			(s.substr(0,s.size()/2)==s.substr(s.size()/2,s.size()-1)) && s.size()>1 ? cout<<"YES\n":cout<<"NO\n";
		}
	}
	return 0;
}
```
