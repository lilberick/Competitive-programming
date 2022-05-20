# Perfect Permutation

> https://codeforces.com/problemset/problem/233/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

A permutation is a sequence of integers ***p<sub>1</sub>*** , ***p<sub>2</sub>*** , ..., ***p<sub>n</sub>*** , consisting of ***n*** distinct positive integers, each of them doesn't exceed ***n***. Let's denote the ***i***-th element of permutation ***p*** as ***p<sub>i</sub>*** . We'll call number ***n*** the size of permutation ***p<sub>1</sub>*** , ***p<sub>2</sub>*** , ..., ***p<sub>n</sub>*** .

Nickolas adores permutations. He likes some permutations more than the others. He calls such permutations perfect. A perfect permutation is such permutation ***p*** that for any ***i*** (***1*** ≤ ***i*** ≤ ***n***) (***n*** is the permutation size) the following equations hold ***p<sub>p<sub>i</sub></sub>*** = ***i*** and ***pi*** ≠ ***i***. Nickolas asks you to print any perfect permutation of size ***n*** for the given ***n***.

## Input

A single line contains a single integer ***n*** (***1*** ≤ ***n*** ≤ ***100***) — the permutation size.

## Output

If a perfect permutation of size ***n*** doesn't exist, print a single integer ***-1***. Otherwise print ***n*** distinct integers from ***1*** to ***n***, ***p<sub>1</sub>*** , ***p<sub>2</sub>*** , ..., ***p<sub>n</sub>*** — permutation ***p***, that is perfect. Separate printed numbers by whitespaces.

## Examples

---
**input**
```
1

```
**output**
```
-1

```
---
**input**
```
2

```
**output**
```
2 1 

```
---
**input**
```
4

```
**output**
```
2 1 4 3 

```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		vector<int> v;
		if(n%2==1){v.push_back(-1);}
		else{
			for(int i=0;i<n;i++){
				v.push_back(i+1);
				if(i%2==1){swap(v[i],v[i-1]);}
			}
		}
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}cout<<endl;
	}
	return 0;
}
```
