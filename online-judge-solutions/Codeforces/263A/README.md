# Beautiful Matrix

> https://codeforces.com/problemset/problem/263/A

```
time limit per test	:	2 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard output
```

## Problem

You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

1. Swap two neighboring matrix rows, that is, rows with indexes *i* and *i* + 1 for some integer *i* (1 &leq; i < 5).
2. Swap two neighboring matrix columns, that is, columns with indexes *j* and *j* + 1 for some integer *j* (1 &leq; j < 5).

You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

## Input

The input consists of five lines, each line contains five integers: the *j*-th integer in the *i*-th line of the input represents the element of the matrix that is located on the intersection of the *i*-th row and the *j*-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

## Output

Print a single integer - the minimum number of moves needed to make the matrix beautiful.

## Examples

---
**input**
```
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
```
**output**
```
3
```
---
**input**
```
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
```
**output**
```
1
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main(){
	int a,r;
	vector<vector<int> > v(5);
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a;
			v[i].push_back(a);
			if(v[i][j]==1){
				r=abs(i-2)+abs(j-2);
			}
		}
	}
	cout<<r<<endl;
	return 0;
}
```
