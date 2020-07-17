# Nolbach Problem
> https://codeforces.com/problemset/problem/17/A

```
time limit per test	:	2 seconds
memory limit per test	:	64 megabytes
input			:	standard input
output			:	standard output
```
## Problem
Nick is interested in prime numbers. Once he read about Goldbach problem. It states that every even integer greater than 2 can be expressed as the sum of two primes. That got Nick's attention and he decided to invent a problem of his own and call it Noldbach problem. Since Nick is interested only in prime numbers, Noldbach problem states that at least k prime numbers from 2 to n inclusively can be expressed as the sum of three integer numbers: two neighboring prime numbers and 1. For example, 19 = 7 + 11 + 1, or 13 = 5 + 7 + 1.

Two prime numbers are called neighboring if there are no other prime numbers between them.

You are to help Nick, and find out if he is right or wrong.
## Input
The first line of the input contains two integers n (2 ≤ n ≤ 1000) and k (0 ≤ k ≤ 1000).
## Output
Output YES if at least k prime numbers from 2 to n inclusively can be expressed as it was described above. Otherwise output NO.
## Examples
---
**Input**
```
27 2
```
**Output**
```
YES
```
---
---
**Input**
```
45 7
```
**Output**
```
NO
```
---

## Note
In the first sample the answer is YES since at least two numbers can be expressed as it was described (for example, 13 and 19). In the second sample the answer is NO since it is impossible to express 7 prime numbers from 2 to 45 in the desired form.

## Solution
```c++
//Lang		:	GNU C++11
//Time		:	62 ms
//Memory	:	3800 KB
#include<iostream>
#include<vector>
using namespace std;
int Prime(int x){
        int t=0;
        for(int i=2;i<x;i++) if(x%i==0){t++;}
        if(t==0 && x>1){return x;}
        else{return -1;}
}
int main(){
        int n,k;
        while(cin>>n>>k){
		vector<int> v;
		int a;
		for(int i=2;i<n;i++){
			a=Prime(i);
			if(a != -1) v.push_back(a);
		}
		bool b=true;
		int r,c=0;
		if(k==0){b=false;cout<<"YES\n";}
		for(int i=1;i<v.size() && b;i++){
			r=v[i-1]+v[i]+1:
			if(Prime(r)!=-1){c++;}
			if(c==k){b=false;cout<<"YES\n";}
			if(n<r){b=false;cout<<"NO\n";}
		}
		if(b==true) cout<<"NO\n";
	}
        return 0;
}
```
