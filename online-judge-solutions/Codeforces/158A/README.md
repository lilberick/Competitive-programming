# Next Round
> https://codeforces.com/problemset/problem/158/A
```
time limit per test	:	3 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard output
```
## Problem
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest ( n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

## Input
The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

The second line contains n space-separated integers a 1, a 2, ..., a n (0 ≤ a i ≤ 100), where a i is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: a i ≥ a i + 1).

## Output
Output the number of participants who advance to the next round.
## Examples
---
**input**
```
8 5
10 9 8 7 7 7 5 5
```
**output**
```
6
```
---
**input**
```
4 2
0 0 0 0
```
**output**
```
0
```
---
## Note
In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 advancers.

In the second example nobody got a positive score.
## Solution
```c++
//Lang		:	GNU C++11
//Time		:	62 ms
//Memory	:	3800 KB
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	int n,k,a;
	while(cin>>n>>k){
		vector<int> v;
		while(n--){
			cin>>a;
			v.push_back(a);
		}
		int t=0;
		for(int i=0;i<v.size();i++){
			if(v[i]>0 && (v[i]>=v[k-1])){t++;}
		}
		cout<<t<<"\n";
	}
}
```
