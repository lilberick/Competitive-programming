# George and Accommodation

> https://codeforces.com/problemset/problem/467/A

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

George has recently entered the BSUCP (Berland State University for Cool Programmers). George has a friend Alex who has also entered the university. Now they are moving into a dormitory.

George and Alex want to live in the same room. The dormitory has n rooms in total. At the moment the *i*-th room has p<sub>i</sub> people living in it and the room can accommodate q<sub>i</sub> people in total (p<sub>i</sub> &leq; q<sub>i</sub>). Your task is to count how many rooms has free place for both George and Alex.

## Input

The first line contains a single integer n (1 &leq; n &leq; 100) — the number of rooms.

The *i*-th of the next n lines contains two integers p<sub>i</sub> and q<sub>i</sub> (0 ≤ p<sub>i</sub> &leq; q<sub>i</sub> &leq; 100) — the number of people who already live in the *i*-th room and the room's capacity.

## Output

Print a single integer — the number of rooms where George and Alex can move in.

## Examples

---
**input**
```
3
1 1
2 2
3 3
```
**output**
```
0
```
---
**input**
```
3
1 10
0 10
10 10
```
**output**
```
2
```
---

## Note


## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,p,q;
	while(cin>>n){
		int r=0;
		while(n--){
			cin>>p>>q;
			if(q-p>=2)	r++;
		}
		cout<<r<<endl;
	}
	return 0;
}
```
