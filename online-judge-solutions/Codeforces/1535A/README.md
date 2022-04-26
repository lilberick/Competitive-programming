# Fair Playoff

> https://codeforces.com/problemset/problem/1535/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Four players participate in the playoff tournament. The tournament is held according to the following scheme: the first player will play with the second, and the third player with the fourth, then the winners of the pairs will play in the finals of the tournament.

It is known that in a match between two players, the one whose skill is greater will win. The skill of the ***i***-th player is equal to ***s<sub>i</sub>*** and all skill levels are pairwise different (i. e. there are no two identical values in the array ***s***).

The tournament is called ***fair*** if the two players with the highest skills meet in the finals.

Determine whether the given tournament is ***fair***.

## Input

The first line contains a single integer ***t*** ( ***1*** ≤ ***t*** ≤ ***10<sup>4</sup>*** ) — the number of test cases.

A single line of test case contains four integers ***s<sub>1</sub>*** , ***s<sub>2</sub>*** , ***s<sub>3</sub>*** , ***s<sub>4</sub>*** (***1*** ≤ ***s<sub>i</sub>*** ≤ ***100***) — skill of the players. It is guaranteed that all the numbers in the array are different.

## Output

For each testcase, output YES if the tournament is ***fair***, or NO otherwise.

## Examples

---
**input**
```
4
3 7 9 5
4 5 6 9
5 3 8 1
6 5 3 2
```
**output**
```
YES
NO
YES
NO
```
---

## Note

Consider the example:

1. in the first test case, players ***2*** and ***3*** with skills ***7*** and ***9*** advance to the finals;
2. in the second test case, players ***2*** and ***4*** with skills ***5*** and ***9*** advance to the finals. The player with skill ***6*** does not advance, but the player with skill ***5*** advances to the finals, so the tournament is not fair;

3. in the third test case, players ***1*** and ***3*** with skills ***5*** and ***8*** advance to the finals;

4. in the fourth test case, players ***1*** and ***3*** with skills ***6*** and ***3*** advance to the finals. The player with skill ***5*** does not advance, but the player with skill ***3*** advances to the finals, so the tournament is not fair.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	62 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t,s1,s2,s3,s4;
	while(cin>>t){
		while(t--){
			while(cin>>s1>>s2>>s3>>s4){
				vector<int> v;
				v.insert(v.end(),{s1,s2,s3,s4});
				int n1=max(s1,s2);
				int n2=max(s3,s4);
				int mayor=max(n1,n2);
				int menor=min(n1,n2);
				sort(v.begin(),v.end());
				if((mayor==v[v.size()-1]) && (menor==v[v.size()-2])){cout<<"YES\n";}
				else{cout<<"NO\n";}
			}
		}
	}
	return 0;
}
```
