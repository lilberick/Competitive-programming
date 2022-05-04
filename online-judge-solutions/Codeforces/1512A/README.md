# Spy Detected!

> https://codeforces.com/problemset/problem/1512/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

You are given an array ***a*** consisting of ***n*** ( ***n*** ≥ ***3*** ) positive integers. It is known that in this array, all the numbers except one are the same (for example, in the array [***4***,***11***,***4***,***4***] all numbers except one are equal to ***4***).

Print the index of the element that does not equal others. The numbers in the array are numbered from one.

## Input

The first line contains a single integer ***t*** (***1*** ≤ ***t*** ≤ ***100***). Then ***t*** test cases follow.

The first line of each test case contains a single integer ***n*** ( ***3*** ≤ ***n*** ≤ ***100*** ) — the length of the array ***a***.

The second line of each test case contains ***n*** integers ***a<sub>1</sub>*** , ***a<sub>2</sub>*** ,…,***a<sub>n</sub>*** ( ***1*** ≤ ***a<sbu>i</sub>*** ≤ ***100*** ).

It is guaranteed that all the numbers except one in the ***a*** array are the same.

## Output

For each test case, output a single integer — the index of the element that is not equal to others.

## Examples

---
**input**
```
4
4
11 13 11 11
5
1 4 4 4 4
10
3 3 3 3 10 3 3 3 3 3
3
20 20 10
```
**output**
```
2
1
5
3
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
#define typeof(x) __typeof__(x)
int main(){
	int t,n,a;
	while(cin>>t){
		while(t--){
			vector<int> v;
			map<int,int> m;
			cin>>n;
			while(n--){
				cin>>a;
				v.push_back(a);
				m[a]++;
			}
			int menor=101,valor;
			for(typeof(m.begin()) i=m.begin(); i!=m.end(); i++){
				if((i->second)<menor){valor=i->first;menor=i->second;}
			}
			int n=find(v.begin(),v.end(),valor)-v.begin();
			cout<<n+1<<endl;
		}
	}
	return 0;
}
```