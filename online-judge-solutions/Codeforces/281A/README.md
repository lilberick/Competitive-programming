# Word Capitalization

> https://codeforces.com/problemset/problem/281/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

## Input

A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 10<sup>3</sup>.

## Output

Output the given word after capitalization.

## Examples

---
**input**
```
ApPLe
```
**output**
```
ApPLe
```
---
**input**
```
konjac
```
**output**
```
Konjac
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	char s1;
	string s2;
	cin>>s1>>s2;
	cout<<char(toupper(s1))<<s2<<endl;
	return 0;
}
```
