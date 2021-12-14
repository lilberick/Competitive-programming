# Beautiful Year

> https://codeforces.com/problemset/problem/271/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

## Input

The single line contains integer y (1000 &leq; y &leq; 9000) — the year number.

## Output

Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

## Examples

---
**input**
```
1987
```
**output**
```
2013
```
---
**input**
```
2013
```
**output**
```
2014
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
bool yeardiferent(int y){
	int m,c,d,u;
	m=y/1000;
	c=(y-m*1000)/100;
	d=((y-m*1000)-c*100)/10;
	u=y%10;
	if(m!=c && c!=d && d!=u && m!=d && c!=u && m!=u){return true;}
	else{return false;}
}
int main(){
	int y;
	while(cin>>y){
		bool termina=false;
		for(int i=y+1;i<=9012 && termina==false;i++){
			if(yeardiferent(i)){cout<<i<<endl;termina=true;}
		}
	}
	return 0;
}
```
