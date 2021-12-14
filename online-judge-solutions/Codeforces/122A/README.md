# Lucky Division

> https://codeforces.com/problemset/problem/122/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

<ins>Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits **4** and **7**. For example, numbers **47**, **744**, **4** are lucky and **5**, **17**, **467** are not.</ins>

Petya calls a number <ins>almost lucky</ins> if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

## Input

The single line contains an integer n (1 &leq; n &leq; 1000) - the number that needs to be checked.

## Output

In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

## Examples

---
**input**
```
47
```
**output**
```
YES
```
---
**input**
```
16
```
**output**
```
YES
```
---
**input**
```
78
```
**output**
```
NO
```
---

## Note

Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	vector<int> l={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int t=0;
	while(cin>>n){
		bool g=true;
		for(int i=0;i<l.size() && g;i++){
			if(n%l[i]==0){cout<<"YES\n";g=false;}
		}
		if(g){cout<<"NO\n";}
	}
	return 0;
}
```
