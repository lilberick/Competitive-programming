# Soldier and Bananas

> https://codeforces.com/problemset/problem/546/A

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the *i*-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

## Input

The first line contains three positive integers k, n, w (1  &leq; k, w  &leq; 1000, 0 &leq; n &leq; 10<sup>9</sup>), the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.

## Output

Output one integer - the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.

## Examples

---
**input**
```
3 17 4
```
**output**
```
13
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
	int k,n,w,gasto;
	cin>>k>>n>>w;
	gasto=k*((w*(w+1))/2)-n;
	if(gasto<0)	cout<<0<<endl;
	else		cout<<gasto<<endl;
	return 0;
}
```
