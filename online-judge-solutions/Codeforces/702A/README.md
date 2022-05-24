# Maximum Increase

> https://codeforces.com/problemset/problem/702/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

You are given array consisting of ***n*** integers. Your task is to find the maximum length of an increasing subarray of the given array.

A subarray is the sequence of consecutive elements of the array. Subarray is called increasing if each element of this subarray **strictly greater** than previous.

## Input

The first line contains single positive integer ***n*** ( ***1*** ≤ ***n*** ≤ ***10<sup>5</sup>*** ) — the number of integers.

The second line contains ***n*** positive integers ***a<sub>1</sub>*** , ***a<sub>2</sub>*** , ..., ***a<sub>n</sub>*** ( ***1*** ≤ ***a<sub>i</sub>*** ≤ ***10<sup>9</sup>*** ).

## Output

Print the maximum length of an increasing subarray of the given array.

## Examples

---
**input**
```
5
1 7 2 11 15

```
**output**
```
3

```
---
**input**
```
6
100 100 100 100 100 100

```
**output**
```
1

```
---
**input**
```
3
1 2 3

```
**output**
```
3

```
---

## Solution

* C++

	```c++
	//Lang		:	GNU C++14
	//Time		:	156 ms
	//Memory	:	1100 KB
	#include<iostream>
	#include<vector>
	using namespace std;
	int main(){
		int n,x;
		while(cin>>n){
			vector<int> a;
			while(n--){
				cin>>x;
				a.push_back(x);
			}
			int w=a[0],t=0,r=0;
			for(int i=1;i<a.size();i++){
				if(a[i]>w){t++;}
				else{t=0;}
				w=a[i];
				r=max(r,t);
			}
			cout<<r+1<<endl;
		}
		return 0;
	}
	```

* Python

	```py
	#Lang		:	Python 3.8
	#Time		:	108 ms
	#Memory		:	7700 KB
	while True:
	    try:
		n=int(input())
		a = list(map(int,input().strip().split()))[:n]
		w,t,r=a[0],0,0
		for i in a:
		    if i>w: t+=1
		    else: t=0
		    w=i
		    r=max(r,t)
		print(r+1)
	    except EOFError:
		break
	```
