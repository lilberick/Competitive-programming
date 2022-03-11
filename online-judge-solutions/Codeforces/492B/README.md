# Vanya and Lanterns

> https://codeforces.com/problemset/problem/492/B

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Vanya walks late at night along a straight street of length l, lit by n lanterns. Consider the coordinate system with the beginning of the street corresponding to the point 0, and its end corresponding to the point l. Then the *i*-th lantern is at the point a<sub>i</sub>. The lantern lights all points of the street that are at the distance of at most d from it, where d is some positive number, common for all lanterns.

Vanya wonders: what is the minimum light radius d should the lanterns have to light the whole street?

## Input

The first line contains two integers n, l (1 ≤ n ≤ 1000, 1 ≤ l ≤ 10<sup>9</sup>) — the number of lanterns and the length of the street respectively.

The next line contains n integers ai (0 ≤ a<sub>i</sub> ≤ l). Multiple lanterns can be located at the same point. The lanterns may be located at the ends of the street.

## Output

Print the minimum light radius d, needed to light the whole street. The answer will be considered correct if its absolute or relative error doesn't exceed 10<sup> - 9</sup>.

## Examples

---
**input**
```
7 15
15 5 3 7 9 14 0
```
**output**
```
2.5000000000
```
---
**input**
```
2 5
2 5
```
**output**
```
2.0000000000
```
---

## Note

Consider the second sample. At d = 2 the first lantern will light the segment [0, 4] of the street, and the second lantern will light segment [3, 5]. Thus, the whole street will be lit.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
	int n,l,a;
	while(cin>>n>>l){
		vector<double>v;
		while(n--){
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		double r=0,t;
		for(int i=0;i<v.size()-1;i++){
			t=(v[i+1]-v[i])/2;
			if(t>r){r=t;}
		}
		if(v[0]!=0){
			t=v[0];
			if(t>r){r=t;}
		}
		if(v[v.size()-1]!=l){
			t=l-v[v.size()-1];
			if(t>r){r=t;}
		}
		cout<<setprecision(10)<<fixed<<r<<endl;
	}
	return 0;
}
```
