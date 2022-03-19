# Remove Smallest

> https://codeforces.com/problemset/problem/1399/A

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

You are given the array a consisting of n positive (greater than zero) integers.

In one move, you can choose two indices *i and j (i≠j)* such that the absolute difference between a<sub>i</sub> and a<sub>j</sub> is no more than one (|a<sub>i</sub>−a<sub>j</sub>|≤1) and remove the smallest of these two elements. If two elements are equal, you can remove any of them (but exactly one).

Your task is to find if it is possible to obtain the array consisting of **only one element** using several (possibly, zero) such moves or not.

You have to answer **t** independent test cases.

## Input

The first line of the input contains one integer **t** (1 ≤ t ≤ 1000) — the number of test cases. Then **t** test cases follow.

The first line of the test case contains one integer **n** (1 ≤ n ≤ 50) — the length of **a**. The second line of the test case contains n integers a<sub>1</sub>,a<sub>2</sub>,…,a<sub>n</sub> (1 ≤ a<sub>i</sub> ≤ 100), where ai is the i-th element of **a**.

## Output

For each test case, print the answer: "YES" if it is possible to obtain the array consisting of **only one element** using several (possibly, zero) moves described in the problem statement, or "NO" otherwise.

## Examples

---
**input**
```
5
3
1 2 2
4
5 5 5 5
3
1 2 4
4
1 3 4 4
1
100
```
**output**
```
YES
YES
NO
NO
YES
```
---

## Note

In the first test case of the example, we can perform the following sequence of moves:

* choose **i=1** and **j=3** and remove **a<sub>i</sub>** (so **a** becomes **[2;2]**);
* choose **i=1** and **j=2** and remove **a<sub>j</sub>** (so **a** becomes **[2]**).

In the second test case of the example, we can choose any possible **i** and **j** any move and it doesn't matter which element we remove.

In the third test case of the example, there is no way to get rid of **2** and **4**.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	100 KB
#include<iostream>
#include<set>
using namespace std;
int main(){
	int t,n,a;
	cin>>t;
	while(t--){
		cin>>n;
		set<int> s;
		while(n--){
			cin>>a;
			s.insert(a);
		}
		int w=*s.begin();
		bool termina=false;
		for(set<int>::const_iterator i=s.begin();i!=s.end() && termina==false;i++){
			if( *i != *s.begin()){
				if(*i-w>1){termina=true;}
			}
			w=*i;
		}
		if(termina){cout<<"NO\n";}
		else{cout<<"YES\n";}
	}
}
```
