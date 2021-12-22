# Calculating Function

> https://codeforces.com/problemset/problem/486/A

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

For a positive integer n let's define a function *f*:

*f*(n) =  - 1 + 2 - 3 + .. + ( - 1)<sup>n</sup>n

Your task is to calculate *f*(n) for a given integer n.

## Input

The single line contains the positive integer n (1 &leq; n &leq; 10<sup>15</sup>).

## Output

Print *f*(n) in a single line.

## Examples

---
**input**
```
4
```
**output**
```
2
```
---
**input**
```
5
```
**output**
```
-3
```
---

## Note

*f*(4) =  - 1 + 2 - 3 + 4 = 2

*f*(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<math.h>
typedef long long ll;
using namespace std;
int main(){
	double n;
	while(cin>>n){
		if(ll(n)%2){cout<<-ll(ceil(n/2))<<endl;}
		else{cout<<ll(ceil(n/2))<<endl;}
	}
	return 0;
}
```
