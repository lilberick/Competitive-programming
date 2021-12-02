# Stones on the Table

> https://codeforces.com/problemset/problem/266/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

## Input

The first line contains integer n (1 &leq; n &leq; 50) - the number of stones on the table.

The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from left to right. Then the *i*-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.

## Output

Print a single integer - the answer to the problem.

## Examples

---
**input**
```
3
RRG
```
**output**
```
1
```
---
**input**
```
5
RRRRR
```
**output**
```
4
```
---
**input**
```
4
BRBG
```
**output**
```
0
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
	int n;
	string s1,s2;
	while(cin>>n>>s1){
		s2=s1[0];
		for(int i=0;i<s1.size()-1;i++){
			if(s1[i]!=s1[i+1]) s2+=s1[i+1];
		}
		cout<<s1.size()-s2.size()<<endl;
	}
	return 0;
}
```
