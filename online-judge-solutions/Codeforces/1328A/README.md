# Divisibility Problem

> https://codeforces.com/problemset/problem/1328/A

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

You are given two positive integers **a** and **b**. In one move you can increase **a** by **1** (replace a with **a**+**1**). Your task is to find the minimum number of moves you need to do in order to make **a** divisible by **b**. It is possible, that you have to make **0** moves, as **a** is already divisible by **b**. You have to answer **t** independent test cases.

## Input

The first line of the input contains one integer **t** (**1** ≤ **t** ≤ **10<sup>4</sup>**) — the number of test cases. Then **t** test cases follow.

The only line of the test case contains two integers **a** and **b** (**1** ≤ **a**,**b** ≤ **10<sup>9</sup>**).

## Output

For each test case print the answer — the minimum number of moves you need to do in order to make **a** divisible by **b**.

## Examples

---
**input**
```
5
10 4
13 9
100 13
123 456
92 46
```
**output**
```
2
5
4
333
0
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	109 ms
//Memory	:	200 KB
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double t,a,b;
	while(cin>>t){
		while(t--){
			cin>>a>>b;
			cout<<(long long)(ceil(a/b)*b-a)<<endl;
		}
	}
	return 0;
}
```
