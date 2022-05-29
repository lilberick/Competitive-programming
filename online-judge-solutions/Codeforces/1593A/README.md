# Elections

> https://codeforces.com/problemset/problem/1593/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

The elections in which three candidates participated have recently ended. The first candidate received ***a*** votes, the second one received ***b*** votes, the third one received ***c*** votes. For each candidate, solve the following problem: how many votes should be added to this candidate so that he wins the election (i.e. the number of votes for this candidate was strictly greater than the number of votes for any other candidate)?

Please note that for each candidate it is necessary to solve this problem **independently**, i.e. the added votes for any candidate **do not** affect the calculations when getting the answer for the other two candidates.

## Input

The first line contains one integer ***t*** (***1***≤***t***≤***104***) — the number of test cases. Then ***t*** test cases follow.

Each test case consists of one line containing three integers ***a***, ***b***, and ***c*** ( ***0*** ≤ ***a*** , ***b*** , ***c***≤***10<sup>9</sup>*** ).

## Output

For each test case, output in a separate line three integers ***A***, ***B***, and ***C*** ( ***A*** , ***B*** , ***C*** ≥ ***0*** ) separated by spaces — the answers to the problem for the first, second, and third candidate, respectively.

## Examples

---
**input**
```
5
0 0 0
10 75 15
13 13 17
1000 0 0
0 1000000000 0
```
**output**
```
1 1 1
66 0 61
5 5 0
0 1001 1001
1000000001 0 1000000001
```
---

## Solution

```c++
//Lang		:	GNU C11
//Time		:	31 ms
//Memory	:	0 KB
#include <stdio.h>
int max(int x, int y){
	return x^((x^y) & -(x< y));
}
int gana(int x,int max,int m){
	int r=max-x+1;
	if(m==1 && max==x){r--;}
	return r;
}
int main(void){
	int t,a,b,c;
	while(scanf("%d",&t)!=EOF){
		while(t--){
			scanf("%d%d%d",&a,&b,&c);
			int maximo=max(max(a,b),max(b,c));
			int m=0;
			if(a==maximo){m++;}
			if(b==maximo){m++;}
			if(c==maximo){m++;}
			printf("%d %d %d\n",gana(a,maximo,m),gana(b,maximo,m),gana(c,maximo,m));
		}
	}
	return 0;
}
```
