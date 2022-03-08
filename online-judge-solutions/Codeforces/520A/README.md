# Pangram

> https://codeforces.com/problemset/problem/112/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.

You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

## Input

The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

## Output

Output "YES", if the string is a pangram and "NO" otherwise.

## Examples

---
**input**
```
12
toosmallword
```
**output**
```
NO
```
---
**input**
```
35
TheQuickBrownFoxJumpsOverTheLazyDog
```
**output**
```
YES
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		string s,t;
		set<char> r;
		cin>>s;
		transform(s.begin(),s.end(),s.begin(),::tolower);
		sort(s.begin(),s.end());
		for(int i=0;i<s.size();i++){
			r.insert(s[i]);
		}
		for(set<char>::const_iterator i=r.begin();i!=r.end();i++){
			t+=*i;
		}
		if(t=="abcdefghijklmnopqrstuvwxyz"){cout<<"YES\n";}
		else{cout<<"NO\n";}
	}
	return 0;
}
```
