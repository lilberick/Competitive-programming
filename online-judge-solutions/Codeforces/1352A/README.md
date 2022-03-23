# Sum of Round Numbers

> https://codeforces.com/problemset/problem/1352/A

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

A positive (strictly greater than zero) integer is called round if it is of the form d00...0. In other words, a positive integer is round if all its digits except the leftmost (most significant) are equal to zero. In particular, all numbers from **1** to **9** (inclusive) are round.

For example, the following numbers are round: **4000**, **1**, **9**, **800**, **90**. The following numbers are **not** round: **110**, **707**, **222**, **1001**.

You are given a positive integer **n** (**1** ≤ **n** ≤ **10<sup>4</sup>**). Represent the number **n** as a sum of round numbers using the minimum number of summands (addends). In other words, you need to represent the given number **n** as a sum of the least number of terms, each of which is a round number.

## Input

The first line contains an integer **t** (**1** ≤ **t** ≤ **10<sup>4</sup>**) — the number of test cases in the input. Then t test cases follow.

Each test case is a line containing an integer **n** (**1** ≤ **n** ≤ **10<sup>4</sup>**).

## Output

Print t answers to the test cases. Each answer must begin with an integer ***k*** — the minimum number of summands. Next, ***k*** terms must follow, each of which is a round number, and their sum is **n**. The terms can be printed in any order. If there are several answers, print any of them.

## Examples

---
**input**
```
5
5009
7
9876
10000
10
```
**output**
```
2
5000 9
1
7 
4
800 70 6 9000 
1
10000 
1
10 
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	61 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,t;
	while(cin>>t){
		string ns;
		while(t--){
			cin>>n;
			ns=to_string(n);
			cout<<ns.size()-count(ns.begin(),ns.end(),'0')<<endl;
			for(int i=0;i<ns.size();i++){
				string zero(ns.size()-i-1,'0');
				string round_number=ns[i]+zero;
				if(round_number[0]!='0'){cout<<round_number<<" ";}
			}cout<<endl;
		}
	}
	return 0;
}
```
