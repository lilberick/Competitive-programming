# Vladik and flights

> https://codeforces.com/problemset/problem/743/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Vladik is a competitive programmer. This year he is going to win the International Olympiad in Informatics. But it is not as easy as it sounds: the question Vladik face now is to find the cheapest way to get to the olympiad.

Vladik knows n airports. All the airports are located on a straight line. Each airport has unique id from 1 to n, Vladik's house is situated next to the airport with id a, and the place of the olympiad is situated next to the airport with id b. It is possible that Vladik's house and the place of the olympiad are located near the same airport.

To get to the olympiad, Vladik can fly between any pair of airports any number of times, but he has to start his route at the airport a and finish it at the airport b.

Each airport belongs to one of two companies. The cost of flight from the airport i to the airport j is zero if both airports belong to the same company, and |*i* - *j*| if they belong to different companies.

Print the minimum cost Vladik has to pay to get to the olympiad.

## Input

The first line contains three integers n, a, and b (1 &leq; n &leq; 10<sup>5</sup>, 1 &leq; a, b &leq; n) — the number of airports, the id of the airport from which Vladik starts his route and the id of the airport which he has to reach.

The second line contains a string with length n, which consists only of characters 0 and 1. If the *i*-th character in this string is 0, then *i*-th airport belongs to first company, otherwise it belongs to the second.

## Output

Print single integer — the minimum cost Vladik has to pay to get to the olympiad.

## Examples

---
**input**
```
4 1 4
1010
```
**output**
```
1
```
---
**input**
```
5 5 2
10110
```
**output**
```
0
```
---

## Note

In the first example Vladik can fly to the airport 2 at first and pay |1 - 2| = 1 (because the airports belong to different companies), and then fly from the airport 2 to the airport 4 for free (because the airports belong to the same company). So the cost of the whole flight is equal to 1. It's impossible to get to the olympiad for free, so the answer is equal to 1.

In the second example Vladik can fly directly from the airport 5 to the airport 2, because they belong to the same company.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	300 KB
#include<iostream>
using namespace std;
int main(){
	int n,a,b;
	string s;
	while(cin>>n>>a>>b){
		cin>>s;
		if(s[a-1]==s[b-1]){cout<<0<<endl;}
		else{cout<<1<<endl;}
	}
	return 0;
}
```