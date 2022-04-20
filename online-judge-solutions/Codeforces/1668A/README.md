# Direction Change

> https://codeforces.com/problemset/problem/1668/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

You are given a grid with ***n*** rows and ***m*** columns. Rows and columns are numbered from ***1*** to ***n***, and from ***1*** to ***m***. The intersection of the ***a***-th row and ***b***-th column is denoted by (***a***,***b***).

Initially, you are standing in the top left corner (***1***,***1***). Your goal is to reach the bottom right corner (***n***,***m***).

You can move in four directions from (***a***,***b***): up to (***a−1***,***b***), down to (***a+1***,***b***), left to (***a***,***b−1***) or right to (***a***,***b+1***).

You cannot move in the same direction in two consecutive moves, and you cannot leave the grid. What is the minimum number of moves to reach (***n***,***m***)?

## Input

The input consists of multiple test cases. The first line contains a single integer ***t*** ( ***1*** ≤ ***t*** ≤ ***10<sup>3</sup>*** ) — the number of the test cases. The description of the test cases follows.

The first line of each test case contains two integers ***n*** and ***m*** ( ***1*** ≤ ***n***,***m*** ≤ ***10<sup>9</sup>*** ) — the size of the grid.

## Output

For each test case, print a single integer: ***−1*** if it is impossible to reach (***n***,***m***) under the given conditions, otherwise the minimum number of moves.

## Examples

---
**input**
```
6
1 1
2 1
1 3
4 2
4 6
10 5
```
**output**
```
0
1
-1
6
10
17
```
---

## Note

Test case ***1***: ***n***=***1***, ***m***=***1***, and initially you are standing in (***1***,***1***) so ***0*** move is required to reach (***n***,***m***)=(***1***,***1***).

Test case ***2***: you should go down to reach (***2***,***1***).

Test case ***3***: it is impossible to reach (***1***,***3***) without moving right two consecutive times, or without leaving the grid.

Test case ***4***: an optimal moving sequence could be: (***1***,***1***)→(***1***,***2***)→(***2***,***2***)→(***2***,***1***)→(***3***,***1***)→(***3***,***2***)→(***4***,***2***). It can be proved that this is the optimal solution. So the answer is ***6***.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n,m;
	while(cin>>t){
		while(t--){
			cin>>n>>m;
			int a=max(n,m);
			int b=min(n,m);
			int respuesta=(a-1)*2,r;
			if(a==1 && b==1){r=0;}
			else if(a==2 && b==1){r=1;}
			else if(a>=2){
				if(b==1){r=-1;}
				else{
					if(!((a%2)^(b%2))){r=respuesta;}
					else{r=respuesta-1;}
				}
			}
			cout<<r<<endl;
		}
	}
	return 0;
}
```
