# Arpa’s hard exam and Mehrdad’s naive cheat

> https://codeforces.com/problemset/problem/742/A

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

*There exists an island called Arpa’s land, some beautiful girls live there, as ugly ones do.*

Mehrdad wants to become minister of Arpa’s land. Arpa has prepared an exam. Exam has only one question, given n, print the last digit of 1378<sup>n</sup>.

![](.img/imagen.png)

Mehrdad has become quite confused and wants you to help him. Please help, although it's a naive cheat.

## Input

The single line of input contains one integer n (0  &leq; n  &leq; 10<sup>9</sup>).

## Output

Print single integer — the last digit of 1378<sup>n</sup>.

## Examples

---
**input**
```
1
```
**output**
```
8
```
---
**input**
```
2
```
**output**
```
4
```
---

## Note

In the first example, last digit of 1378<sup>1</sup> = 1378 is 8.

In the second example, last digit of 1378<sup>2</sup> = 1378·1378 = 1898884 is 4.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0){cout<<1<<endl;}
		else if(n==1){cout<<8<<endl;}
		else if(n==2){cout<<4<<endl;}
		else if(n>2){
			if(n%4==3){cout<<2<<endl;}
			else if(n%4==0){cout<<6<<endl;}
			else if(n%4==1){cout<<8<<endl;}
			else if(n%4==2){cout<<4<<endl;}
		}
	}
	return 0;
}
```
