# Cirno's Perfect Bitmasks Classroom

> https://codeforces.com/problemset/problem/1688/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Cirno's perfect bitmasks classroom has just started!

Cirno gave her students a positive integer ***x***. As an assignment, her students need to find the **minimum positive** integer ***y***, which satisfies the following two conditions:

* x **and** y > 0

* x **xor** y > 0

Where ***and*** is the [bitwise AND operation](https://en.wikipedia.org/wiki/Bitwise_operation#AND), and **xor** is the [bitwise XOR operation](https://en.wikipedia.org/wiki/Bitwise_operation#XOR).

Among the students was Mystia, who was truly baffled by all these new operators. Please help her!

## Input

The first line of input contains a single integer ***t*** ( ***1*** ≤ ***t*** ≤ ***10<sup>3</sup>*** ) — the number of input test cases.

For each test case, the only line of input contains one integer ***x*** ( ***1*** ≤ ***x*** ≤ ***2<sup>30</sup>*** ).

## Output

For each test case, print a single integer — the minimum number of ***y***.

## Examples
---
**input**
```
7
1
2
5
9
16
114514
1000000
```
**output**
```
3
3
1
1
17
2
64
```
---

## Note

* Test case 1:

	1 **and** 3=1>0, 1 **xor** 3=2>0.

* Test case 2:

	2 **and** 3=2>0, 2 **xor** 3=1>0.

## Solution

* C

	```c
	//Lang		:	GNU C11
	//Time		:	15 ms
	//Memory	:	0 KB
	#include<stdio.h>
	int main(){
		int t,x;
		scanf("%d",&t);
		while(t--){
			scanf("%d",&x);
			if(x==1) printf("3\n"); 
			else if(((x&(x-1))==0) && x>1) printf("%d\n",x+1); 
			else printf("%d\n",x & -x);
		}
		return 0;
	}
	```

* C++

	```c++
	//Lang		:	GNU C++14
	//Time		:	15 ms
	//Memory	:	0 KB
	#include<iostream>
	using namespace std;
	int main(){
		int t,x;
		cin>>t;
		while(t--){
			cin>>x;
			if(x==1) cout<<3<<endl; 
			else if(((x&(x-1))==0) && x>1) cout<<x+1<<endl; 
			else cout<<(x & -x)<<endl;
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
	for i in range(0,t):
	    x=int(input())
	    if(x==1):print(3)
	    elif((x&(x-1))==0 and x>1):print(x+1)
	    else:print(1<<((x&-x).bit_length()-1))
	```
