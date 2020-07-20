# The New Year: Meeting Friends
> https://codeforces.com/problemset/problem/723/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard output
```
## Problem
There are three friend living on the straight line Ox in Lineland. The first friend lives at the point x 1, the second friend lives at the point x 2, and the third friend lives at the point x 3. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

It's guaranteed that the optimal answer is always integer.

## Input
The first line of the input contains three distinct integers x 1, x 2 and x 3 (1 ≤ x 1, x 2, x 3 ≤ 100) — the coordinates of the houses of the first, the second and the third friends respectively.

## Output
Print one integer — the minimum total distance the friends need to travel in order to meet together.
## Examples
---
**input**
```
7 1 4
```
**output**
```
6
```
---
**input**
```
30 20 10
```
**output**
```
20
```
---
## Note
In the first sample, friends should meet at the point 4. Thus, the first friend has to travel the distance of 3 (from the point 7 to the point 4), the second friend also has to travel the distance of 3 (from the point 1 to the point 4), while the third friend should not go anywhere because he lives at the point 4.
## Solution
```c++
//Lang		:	GNU C++11
//Time		:	31 ms
//Memory	:	3800 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int x1,x2,x3;
	while(cin>>x1>>x2>>x3){
		vector<int> v;
		v.push_back(x1);
		v.push_back(x2);
		v.push_back(x3);
		sort(v.begin(),v.end());
		cout<<(v[2]-v[1])+(v[1]-v[0])<<"\n";
	}

}
```
