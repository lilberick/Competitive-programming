# Three Pairwise Maximums
> https://codeforces.com/problemset/problem/1385/A

```c++
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard output
```

## Problem
You are given three positive (i.e. strictly greater than zero) integers x, y and z.

Your task is to find positive integers a, b and c such that x=max(a,b), y=max(a,c) and z=max(b,c), or determine that it is impossible to find such a, b and c.

You have to answer t independent test cases. Print required a, b and c in any (arbitrary) order.

## Input
The first line of the input contains one integer t (1≤t≤2⋅10<sup>4</sup>) — the number of test cases. Then t test cases follow.

The only line of the test case contains three integers x, y, and z (1≤x,y,z≤10<sup>9</sup>).
## Output
For each test case, print the answer:

* "NO" in the only line of the output if a solution doesn't exist;
* or "YES" in the first line and any valid triple of positive integers a, b and c (1≤a,b,c≤10<sup>9</sup>) in the second line. You can print a, b and c in any order.
## Example
---
**input**
```
5
3 2 3
100 100 100
50 49 49
10 30 20
1 1000000000 1000000000
```
**output**
```
YES
3 2 1
YES
100 100 100
NO
NO
YES
1 1 1000000000
```
---

## Solution
```c++
//Lang		:	GNU C++11
//Time		:	171 ms
//Memory	:	3800 KB
#include<iostream> 
using namespace std;
int max(int x, int y){
	return x ^ ((x ^ y) & -(x < y));
}
int min(int x, int y){
	return y ^ ((x ^ y) & -(x < y));
}
int main(){
	int t,x,y,z,mx,mn;
	cin>>t;
	while(cin>>x>>y>>z){
		int r=0;
		mx=max(x,y);mx=max(mx,z);
		mn=min(x,y);mn=min(mn,z); 
		if(x==mx)	r++;
		if(y==mx)	r++;
		if(z==mx)	r++;
		if(r==1){cout<<"NO\n";}
		else if(r==2){
			cout<<"YES\n";
			if(x==mn) cout<<mn<<" "<<mn<<" "<<mx<<"\n";
			else if(y==mn) cout<<mn<<" "<<mx<<" "<<mn<<"\n":
			else if(z==mn) cout<<mx<<" "<<mn<<" "<<mn<<"\n";
		}else if(r==3){
			cout<<"YES\n";cout<<x<<" "<<x<<" "<<x<<"\n";
		}
	}
        return 0;
}
```
