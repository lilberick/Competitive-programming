# Arithmetic Array

> https://codeforces.com/problemset/problem/1537/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

An array b of length ***k*** is called good if its arithmetic mean is equal to ***1***. More formally, if 

$$\frac{b_1 + ... + b_k}{k}=1$$

Note that the value $\frac{b_1 + ... + b_k}{k}$ is not rounded up or down. For example, the array [***1***,***1***,***1***,***2***] has an arithmetic mean of ***1.25***, which is not equal to ***1***.

You are given an integer array ***a*** of length ***n***. In an operation, you can append a **non-negative** integer to the end of the array. What's the minimum number of operations required to make the array good?

We have a proof that it is always possible with finitely many operations.

## Input

The first line contains a single integer ***t*** (***1*** ≤ ***t*** ≤ ***1000***) — the number of test cases. Then ***t*** test cases follow.

The first line of each test case contains a single integer ***n*** (***1*** ≤ ***n*** ≤ ***50***) — the length of the initial array ***a***.

The second line of each test case contains ***n*** integers ***a<sub>1</sub>*** ,…, ***a<sub>n</sub>*** ( ***−10<sup>4</sup>*** ≤ ***a<sub>i</sub>*** ≤ ***10<sup>4</sup>*** ), the elements of the array.

## Output

For each test case, output a single integer — the minimum number of non-negative integers you have to append to the array so that the arithmetic mean of the array will be exactly ***1***.
 
## Examples

---
**input**
```
4
3
1 1 1
2
1 2
4
8 4 6 2
1
-2
```
**output**
```
0
1
16
1
```
---

## Note

In the first test case, we don't need to add any element because the arithmetic mean of the array is already ***1***, so the answer is ***0***.

In the second test case, the arithmetic mean is not ***1*** initially so we need to add at least one more number. If we add ***0*** then the arithmetic mean of the whole array becomes ***1***, so the answer is ***1***.

In the third test case, the minimum number of elements that need to be added is ***16*** since only non-negative integers can be added.

In the fourth test case, we can add a single integer ***4***. The arithmetic mean becomes $\frac{-2+4}{2}$ which is equal to ***1***.

## Solution

* C

	```C
	//Lang		:	GNU C11
	//Time		:	31 ms
	//Memory	:	0 KB
	#include <stdio.h>
	int main(){
		int t,n;
		while(scanf("%d",&t) != EOF){
			while(t--){
				scanf("%d",&n);
				int a[n],t=0;
				while(n--){
					scanf("%d",&a[t]);
					t++;
				}
				int s=sizeof(a)/sizeof(*a),suma=0,r;
				for(int i=0;i<s;i++){
					suma+=a[i];
				}
				if(suma<s){r=1;}
				else{r=suma-s;}
				printf("%d\n",r);
			}
		}
	}
	```

* Python

	```py
	#Lang		:	Python 3.8
	#Time		:	62 ms
	#Memory	:	0 KB
	t=int(input())
	while(t>0):
	    t-=1
	    n=int(input())
	    a=list(map(int,input().split()))[:n]
	    print(1) if sum(a)<len(a) else print(sum(a)-len(a))
	```
