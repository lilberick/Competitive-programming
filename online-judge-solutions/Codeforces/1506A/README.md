# Strange Table

> https://codeforces.com/problemset/problem/1506/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Polycarp found a rectangular table consisting of ***n*** rows and ***m*** columns. He noticed that each cell of the table has its number, obtained by the following algorithm "**by columns**":

* cells are numbered starting from one;
* cells are numbered from left to right by columns, and inside each column from top to bottom;
* number of each cell is an integer one greater than in the previous cell.

For example, if ***n***=***3*** and ***m***=***5***, the table will be numbered as follows:

$$\begin{array}{ccccc}
1 & 4 & 7 & 10 & 13\\
2 & 5 & 8 & 11 & 4\\
3 & 6 & 9 & 12 & 15
\end{array}$$

However, Polycarp considers such numbering inconvenient. He likes the numbering "**by rows**":

* cells are numbered starting from one;
* cells are numbered from top to bottom by rows, and inside each row from left to right;
* number of each cell is an integer one greater than the number of the previous cell.

For example, if ***n***=***3*** and ***m***=***5***, then Polycarp likes the following table numbering:

$$\begin{array}{ccccc}
1 & 2 & 3 & 4 & 5\\
6 & 7 & 8 & 9 & 10\\
11 & 12 & 13 & 14 & 15
\end{array}$$

Polycarp doesn't have much time, so he asks you to find out what would be the cell number in the numbering "**by rows**", if in the numbering "**by columns**" the cell has the number ***x***?

## Input

The first line contains a single integer ***t*** ( ***1*** ≤ ***t*** ≤ ***10<sup>4</sup>*** ). Then ***t*** test cases follow.

Each test case consists of a single line containing three integers ***n***, ***m***, ***x*** ( ***1*** ≤ ***n***,***m*** ≤ ***10<sup>6</sup>*** , ***1*** ≤ ***x*** ≤ ***n*** ⋅ ***m*** ), where ***n*** and ***m*** are the number of rows and columns in the table, and ***x*** is the cell number.

Note that the numbers in some test cases do not fit into the ***32***-bit integer type, so you must use at least the ***64***-bit integer type of your programming language.

## Output

For each test case, output the cell number in the numbering "**by rows**".

## Examples

---
**input**
```
5
1 1 1
2 2 3
3 5 11
100 100 7312
1000000 1000000 1000000000000
```
**output**
```
1
2
9
1174
1000000000000
```
---

## Solution

* C

	```c
	//Lang		:	GNU C11
	//Time		:	15 ms
	//Memory	:	0 KB
	#include<stdio.h>
	int main(){
		long long t,n,m,x;
		while(scanf("%lld",&t)!=EOF){
			while(t--){
				scanf("%lld%lld%lld",&n,&m,&x);
				if(x==n*m) printf("%lld\n",x);
				else printf("%lld\n",(x+n-1)/n+m*(x%n-1));
			}
		}
		return 0;
	}
	```

* Python

	```py
	#Lang		:	Python 3.8
	#Time		:	15 ms
	#Memory	:	0 KB
	t=int(input())
	while(t>0):
	    t-=1
	    n,m,x=map(int,input().split())
	    if(x==n*m): print(x)
	    else: print(int((x+n-1)/n)+m*(x%n-1))
	```
