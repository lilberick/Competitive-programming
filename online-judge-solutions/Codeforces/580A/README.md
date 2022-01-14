# Kefa and First Steps

> https://codeforces.com/problemset/problem/580/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the *i*-th day (1 ≤ i ≤ n) he makes a<sub>i</sub> money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence a<sub>i</sub>. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

## Input

The first line contains integer n (1 ≤ n ≤ 10<sup>5</sup>).

The second line contains n integers a<sub>1</sub>,  a<sub>2</sub>,  ...,  an (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

## Output

Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.

## Examples

---
**input**
```
6
2 2 1 3 4 1
```
**output**
```
3
```
---
**input**
```
3
2 2 9
```
**output**
```
3
```
---

## Note

In the first test the maximum non-decreasing subsegment is the numbers from the third to the fifth one.

In the second test the maximum non-decreasing subsegment is the numbers from the first to the third one.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	187 ms
//Memory	:	1100 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,a;
	while(cin>>n){
		vector<int> v;
		while(n--){
			cin>>a;
			v.push_back(a);
		}
		int tamanio=0,tamanio_mayor=0;
		for(int i=0;i<v.size()-1;i++){
			if(v[i+1]>=v[i]){tamanio++;}
			else{tamanio=0;}
			if(tamanio>tamanio_mayor){tamanio_mayor=tamanio;}
		}
		cout<<tamanio_mayor+1<<endl;

	}
	return 0;
}
```
