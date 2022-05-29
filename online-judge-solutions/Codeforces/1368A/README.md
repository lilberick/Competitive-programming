# C+=

> https://codeforces.com/problemset/problem/1368/A

```
time limit per test	:	2 seconds
memory limit per test	:	512 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Leo has developed a new programming language C+=. In C+=, integer variables can only be changed with a "+=" operation that adds the right-hand side value to the left-hand side variable. For example, performing "a += b" when ***a*** = ***2***, ***b*** = ***3*** changes the value of ***a*** to ***5*** (the value of ***b*** does not change).

In a prototype program Leo has two integer variables ***a*** and ***b***, initialized with some positive values. He can perform any number of operations "a += b" or "b += a". Leo wants to test handling large integers, so he wants to make the value of either ***a*** or ***b*** **strictly greater** than a given value ***n***. What is the smallest number of operations he has to perform?

## Input

The first line contains a single integer ***T*** (***1*** ≤ ***T*** ≤ ***100***) — the number of test cases.

Each of the following ***T*** lines describes a single test case, and contains three integers ***a***,***b***,***n*** ( ***1*** ≤ ***a*** , ***b*** ≤ ***n*** ≤ ***10<sup>9</sup>*** ) — initial values of ***a*** and ***b***, and the value one of the variables has to exceed, respectively.

## Output

For each test case print a single integer — the smallest number of operations needed. Separate answers with line breaks.

## Examples

---
**input**
```
2
1 2 3
5 4 100
```
**output**
```
2
7
```
---

## Note

In the first case we cannot make a variable exceed ***3*** in one operation. One way of achieving this in two operations is to perform "b += a" twice.

## Solution

* C

	```c
	//Lang		:	GNU C11
	//Time		:	15 ms
	//Memory	:	0 KB
	#include<stdio.h>
	void swap(int *xp, int *yp){
	    int temp = *xp; *xp = *yp; *yp = temp;
	}
	int main(){
		int t,a,b,n;
		while(scanf("%d",&t)!=EOF){
			while(t--){
				scanf("%d%d%d",&a,&b,&n);
				int mayor=b,menor=a,r=0;
				if(a>b){mayor=a;menor=b;}
				while(n>=mayor){
					menor+=mayor;
					swap(&menor,&mayor);
					r++;
				}
				printf("%d\n",r);
			}
		}
		return 0;
	}
	```

* Python

	```py
	#Lang		:	Python 3.8
	#Time		:	46 ms
	#Memory	:	0 KB
	t=int(input())
	while(t>0):
	    t-=1
	    a,b,n=map(int,input().split())
	    mayor,menor,r=b,a,0
	    if(a>b): mayor,menor=a,b
	    while(n>=mayor):
		menor+=mayor
		menor,mayor=mayor,menor
		r+=1
	    print(r)
	```
