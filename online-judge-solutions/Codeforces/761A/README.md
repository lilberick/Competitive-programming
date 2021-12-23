# Dasha and Stairs

> https://codeforces.com/problemset/problem/761/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

On her way to programming school tiger Dasha faced her first test — a huge staircase!

![](.img/imagen.png)

The steps were numbered from one to infinity. As we know, tigers are very fond of all striped things, it is possible that it has something to do with their color. So on some interval of her way she calculated two values — the number of steps with even and odd numbers.

You need to check whether there is an interval of steps from the l-th to the r-th (1 &leq; l &leq; r), for which values that Dasha has found are correct.

## Input

In the only line you are given two integers a, b (0 &leq; a, b &leq; 100) — the number of even and odd steps, accordingly.

## Output

In the only line print "YES", if the interval of steps described above exists, and "NO" otherwise.

## Examples

---
**input**
```
2 3
```
**output**
```
YES
```
---
**input**
```
3 1
```
**output**
```
NO
```
---

## Note

In the first example one of suitable intervals is from 1 to 5. The interval contains two even steps — 2 and 4, and three odd: 1, 3 and 5.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(abs(a-b)<2 && !(a==0 && b==0)){cout<<"YES"<<endl;}
		else{cout<<"NO"<<endl;}
	}
	return 0;
}
```
