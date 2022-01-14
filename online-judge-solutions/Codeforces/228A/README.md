# Is your horseshoe on the other hoof?

> https://codeforces.com/problemset/problem/228/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Valera the Horse is going to the party with friends. He has been following the fashion trends for a while, and he knows that it is very popular to wear all horseshoes of different color. Valera has got four horseshoes left from the last year, but maybe some of them have the same color. In this case he needs to go to the store and buy some few more horseshoes, not to lose face in front of his stylish comrades.

Fortunately, the store sells horseshoes of all colors under the sun and Valera has enough money to buy any four of them. However, in order to save the money, he would like to spend as little money as possible, so you need to help Valera and determine what is the minimum number of horseshoes he needs to buy to wear four horseshoes of different colors to a party.

## Input

The first line contains four space-separated integers s<sub>1</sub>, s<sub>2</sub>, s<sub>3</sub>, s<sub>4</sub> (1 ≤ s<sub>1</sub>, s<sub>2</sub>, s<sub>3</sub>, s<sub>4</sub> ≤ 10<sup>9</sup>) — the colors of horseshoes Valera has.

Consider all possible colors indexed with integers.

## Output

Print a single integer — the minimum number of horseshoes Valera needs to buy.

## Examples

---
**input**
```
1 7 3 3
```
**output**
```
1
```
---
**input**
```
7 7 7 7
```
**output**
```
3
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include <iostream>
#include <set>
using namespace std;
int main() {
	int a;
	set<int> s;
	for(int i=0;i<4;i++){
		cin>>a;
		s.insert(a);
	}
	cout<<4-s.size()<<endl;
	return 0;	
}
```
