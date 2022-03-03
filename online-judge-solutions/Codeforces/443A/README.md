# Anton and Letters

> https://codeforces.com/problemset/problem/443/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Recently, Anton has found a set. The set consists of small English letters. Anton carefully wrote out all the letters from the set in one line, separated by a comma. He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

Unfortunately, from time to time Anton would forget writing some letter and write it again. He asks you to count the total number of distinct letters in his set.

## Input

The first and the single line contains the set of letters. The length of the line doesn't exceed 1000. It is guaranteed that the line starts from an opening curved bracket and ends with a closing curved bracket. Between them, small English letters are listed, separated by a comma. Each comma is followed by a space.

## Output

Print a single number — the number of distinct letters in Anton's set.

## Examples

---
**input**
```
{a, b, c}
```
**output**
```
3
```
---
**input**
```
{b, a, b, a}
```
**output**
```
2
```
---
**input**
```
{}
```
**output**
```
0
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<set>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		set<char> r;
		for(int i=0;i<s.size();i++){
			if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
				r.insert(s[i]);
			}
		}
		cout<<r.size()<<endl;
		cin.ignore();
	}
	return 0;
}
```
