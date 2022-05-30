# Vasya and Coins

> https://codeforces.com/problemset/problem/1660/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Vasya decided to go to the grocery store. He found in his wallet ***a*** coins of ***1*** burle and ***b*** coins of ***2*** burles. He does not yet know the total cost of all goods, so help him find out ***s*** (***s***>***0***): the **minimum** positive integer amount of money he **cannot** pay without change or pay at all using only his coins.

For example, if ***a***=***1*** and ***b***=***1*** (he has one ***1***-burle coin and one ***2***-burle coin), then:

* he can pay ***1*** burle without change, paying with one ***1***-burle coin,
* he can pay ***2*** burle without change, paying with one ***2***-burle coin,
* he can pay ***3*** burle without change by paying with one ***1***-burle coin and one ***2***-burle coin,
* he cannot pay ***4*** burle without change (moreover, he cannot pay this amount at all).

So for ***a***=***1*** and ***b***=***1*** the answer is ***s***=***4***.

## Input

The first line of the input contains an integer ***t*** ( ***1*** ≤ ***t*** ≤ ***10<sup>4</sup>*** ) — the number of test cases in the test.

The description of each test case consists of one line containing two integers ***a<sub>i</sub>*** and ***b<sub>i</sub>*** ( ***0*** ≤ ***a<sub>i</sub>*** , ***b<sub>i</sub>*** ≤ ***10<sup>8</sup>*** ) — the number of ***1***-burle coins and ***2***-burles coins Vasya has respectively.

## Output

For each test case, on a separate line print one integer ***s*** (***s***>***0***): the minimum positive integer amount of money that Vasya cannot pay without change or pay at all.

## Examples

---
**input**
```
5
1 1
4 0
0 2
0 0
2314 2374
```
**output**
```
4
5
1
1
7063
```
---

## Note

* The first test case of the example is clarified into the main part of the statement.
* In the second test case, Vasya has only ***1*** burle coins, and he can collect either any amount from ***1*** to ***4***, but ***5*** can't.
* In the second test case, Vasya has only ***2*** burle coins, and he cannot pay ***1*** burle without change.
* In the fourth test case you don't have any coins, and he can't even pay ***1*** burle.

## Solution

* C

	```c
	//Lang		:	GNU C11
	//Time		:	61 ms
	//Memory	:	0 KB
	#include <stdio.h>
	int main(){
		int t,a,b,r;
		while(scanf("%d",&t)!=EOF){
			while(t--){
				scanf("%d%d",&a,&b);
				if(a==0){r=1;}
				else{r=2*b+a+1;}
				printf("%d\n",r);
			}
		}
	}
	```

* Python

	```py
	#Lang		:	Python 3.8
	#Time		:	77 ms
	#Memory	:	0 KB
	t=int(input())
	for i in range(0,t):
	    a,b=map(int,input().split())
	    print(1) if a==0 else print(2*b+a+1)
	```
