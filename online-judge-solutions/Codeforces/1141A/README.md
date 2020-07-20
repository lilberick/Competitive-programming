# Game 23
> https://codeforces.com/problemset/problem/1141/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard output
```
## Problem
Polycarp plays "Game 23". Initially he has a number n and his goal is to transform it to m. In one move, he can multiply n by 2 or multiply n by 3. He can perform any number of moves.

Print the number of moves needed to transform n to m. Print -1 if it is impossible to do so.

It is easy to prove that any way to transform n to m contains the same number of moves (i.e. number of moves doesn't depend on the way of transformation).

## Input
The only line of the input contains two integers n and m (1≤n≤m≤5⋅10<sup>8</sup>).

## Output
Print the number of moves to transform n to m, or -1 if there is no solution.
## Examples
---
**input**
```
120 51840
```
**output**
```
7
```
---
**input**
```
42 42
```
**output**
```
0
```
---
**input**
```
48 72
```
**output**
```
-1
```
---
## Solution
```c++
//Lang		:	GNU C++11
//Time		:	31 ms
//Memory	:	3800 KB
#include<iostream>
using namespace std;
int main(){
	int n,m,r;
	while(cin>>n>>m){
		int t=0;
		if(n==m){cout<<"0\n";}
		else if(m%n==0){
			r=m/n;
			while(r%2==0){r=r/2;t++;}
			while(r%3==0){r=r/3;t++;}
			if(r==1){cout<<t<<"\n";}
			else 	{cout<<"-1\n";}
		}
		else{cout<<"-1\n";}
	}
}
```
