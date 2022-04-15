# Bachgold Problem

> https://codeforces.com/problemset/problem/749/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Bachgold problem is very easy to formulate. Given a positive integer ***n*** represent it as a sum of **maximum possible** number of prime numbers. One can prove that such representation exists for any integer greater than ***1***.

Recall that integer ***k*** is called <ins>prime</ins> if it is greater than ***1*** and has exactly two positive integer divisors — ***1*** and ***k***.

## Input

The only line of the input contains a single integer ***n*** ( ***2*** ≤ ***n*** ≤ ***100 000*** ).

## Output

The first line of the output contains a single integer ***k*** — maximum possible number of primes in representation.

The second line should contain ***k*** primes with their sum equal to ***n***. You can print them in any order. If there are several optimal solution, print any of them.

## Examples

---
**input**
```
5

```
**output**
```
2
2 3

```
---
**input**
```
6

```
**output**
```
3
2 2 2

```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,veces;
	while(cin>>n){
		cout<<n/2<<endl;
		for(int i=0;i<((n/2)-(n%2));i++){cout<<2<<" ";}
		if(n%2){cout<<3<<endl;}
	}
	return 0;
}
```
