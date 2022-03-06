# IQ test

> https://codeforces.com/problemset/problem/25/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

## Input

The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

## Output

Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.

## Examples

---
**input**
```
5
2 4 7 8 10
```
**output**
```
3
```
---
**input**
```
4
1 2 1 1
```
**output**
```
2
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
	int n,a;
	while(cin>>n){
		int i_par=0,i_impar=0,r=0,i=0,p=0;
		while(n--){
			cin>>a;
			r++;
			if(a%2!=0){i_impar=r;i++;}
			else{i_par=r;p++;}
		}
		if(i==1){cout<<i_impar<<endl;}
		else if(p==1){cout<<i_par<<endl;}
	}
	return 0;
}
```
