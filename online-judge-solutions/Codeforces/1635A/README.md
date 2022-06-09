# Min Or Sum

> https://codeforces.com/problemset/problem/1635/A 

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

You are given an array a of size ***n***.

You can perform the following operation on the array:

* Choose two different integers ***i***, ***j*** (***1*** ≤ ***i*** < ***j*** ≤ ***n***), replace ***a<sub>i</sub>*** with ***x*** and ***a<sub>j</sub>*** with ***y***. In order not to break the array, ***a<sub>i</sub>*** | ***a<sub>j</sub>*** = ***x*** | ***y*** must be held, where | denotes the [bitwise OR operation](https://en.wikipedia.org/wiki/Bitwise_operation#OR). Notice that ***x*** and ***y*** are non-negative integers.

Please output the minimum sum of the array you can get after using the operation above any number of times.

## Input

Each test contains multiple test cases. The first line contains the number of test cases ***t*** (***1*** ≤ ***t*** ≤ ***1000***). Description of the test cases follows.

The first line of each test case contains an integer ***n*** (***2*** ≤ ***n*** ≤ ***100***) — the size of array ***a***.

The second line of each test case contains ***n*** integers ***a<sub>1</sub>*** , ***a<sub>2</sub>*** ,…, ***a<sub>n</sub>*** ( ***0*** ≤ ***a<sub>i</sub>*** < ***2<sup>30</sup>*** ).

## Output

For each test case, print one number in a line — the minimum possible sum of the array.

## Examples

---
**input**
```
4
3
1 3 2
5
1 2 4 8 16
2
6 6
3
3 5 6
```
**output**
```
3
31
6
7
```
---

## Note

In the first example, you can perform the following operations to obtain the array [***1***,***0***,***2***]:

1. choose ***i***=***1***, ***j***=***2***, change ***a<sub>1</sub>*** = ***1*** and ***a<sub>2</sub>*** = ***2***, it's valid since ***1***|***3*** = ***1***|***2***. The array becomes [***1***,***2***,***2***].

2. choose ***i***=***2***, ***j***=***3***, change ***a<sub>2</sub>*** = ***0*** and ***a<sub>3</sub>*** = ***2***, it's valid since ***2***|***2*** = ***0***|***2***. The array becomes [***1***,***0***,***2***].

We can prove that the minimum sum is ***1***+***0***+***2***=***3***

In the second example, We don't need any operations.

## Solution

* C

	```c
	//Lang		:	GNU C11
	//Time		:	31 ms
	//Memory	:	0 KB
	#include<stdio.h>
	int main(){
		int t,n,a;
		scanf("%d",&t);
		while(t--){
			scanf("%d",&n);
			int r=0;
			while(n--){
				scanf("%d",&a);
				r=r|a;
			}
			printf("%d\n",r);
		}
		return 0;
	}
	```

* Python

	```py
	#Lang		:	Python 3.8
	#Time		:	77 ms
	#Memory	:	0 KB
	t=int(input())
	for i in range(0,t):
	    n=int(input())
	    r=0
	    a=list(map(int,input().split()))[:n]
	    for i in a:
		r=r|i
	    print(r)
	```
