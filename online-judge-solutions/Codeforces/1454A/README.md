# Special Permutation

> https://codeforces.com/problemset/problem/1454/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

You are given one integer ***n*** (***n*** > ***1***).

Recall that a permutation of length ***n*** is an array consisting of ***n*** distinct integers from ***1*** to ***n*** in arbitrary order. For example, [***2***,***3***,***1***,***5***,***4***] is a permutation of length ***5***, but [***1***,***2***,***2***] is not a permutation (***2*** appears twice in the array) and [***1***,***3***,***4***] is also not a permutation (***n***=***3*** but there is ***4*** in the array).

Your task is to find a permutation ***p*** of length ***n*** that there is no index ***i*** (***1*** ≤ ***i*** ≤ ***n***) such that ***p<sub>i</sub>*** = ***i*** (so, for all ***i*** from ***1*** to ***n*** the condition ***p<sub>i</sub>*** ≠ ***i*** should be satisfied).

You have to answer ***t*** independent test cases.

If there are several answers, you can print any. It can be proven that the answer exists for each ***n*** > ***1***.

## Input

The first line of the input contains one integer ***t*** (***1*** ≤ ***t*** ≤ ***100***) — the number of test cases. Then ***t*** test cases follow.

The only line of the test case contains one integer ***n*** (***2*** ≤ ***n*** ≤ ***100***) — the length of the permutation you have to find.

## Output

For each test case, print ***n*** distinct integers ***p<sub>1</sub>*** , ***p<sub>2</sub>*** ,…, ***p<sub>n</sub>*** — a permutation that there is no index ***i*** (***1*** ≤ ***i*** ≤ ***n***) such that ***p<sub>i</sub>*** = ***i*** (so, for all ***i*** from ***1*** to ***n*** the condition ***pi*** ≠ ***i*** should be satisfied).

If there are several answers, you can print any. It can be proven that the answer exists for each ***n***>***1***.

## Examples

---
**input**
```
2
2
5
```
**output**
```
2 1
2 1 5 3 4
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	while(cin>>t){
		while(t--){
			 cin>>n;
			 cout<<n<<" ";
			 for(int i=1;i<n;i++) cout<<i<<" ";
			 cout<<endl;
		}
	}
	return 0;
}
```
