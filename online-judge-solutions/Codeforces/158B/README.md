# Taxi

> https://codeforces.com/problemset/problem/158/B

```
time limit per test	:	3 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the *i*-th group consists of s<sub>i</sub> friends (1 ≤ s<sub>i</sub> ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

## Input

The first line contains integer n (1 ≤ n ≤ 10<sup>5</sup>) — the number of groups of schoolchildren. The second line contains a sequence of integers s<sub>1</sub>, s<sub>2</sub>, ..., s<sub>n</sub> (1 ≤ s<sub>i</sub> ≤ 4). The integers are separated by a space, s<sub>i</sub> is the number of children in the *i*-th group.

## Output

Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

## Examples

---
**input**
```
5
1 2 4 3 3
```
**output**
```
4
```
---
**input**
```
8
2 3 4 4 2 1 3 1
```
**output**
```
5
```
---

## Note

In the first test we can sort the children into four cars like this:

* the third group (consisting of four children),
* the fourth group (consisting of three children),
* the fifth group (consisting of three children),
* the first and the second group (consisting of one and two children, correspondingly).

There are other ways to sort the groups into four cars.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	186 ms
//Memory	:	1100 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,a;
	while(cin>>n){
		vector<int> v;
		while(n--){
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		int i=v.size()-1,j=0,res=0;
		int r=v[i]+v[j];
		while(i-j>0){
			if(r<=4){
				j++;
				r+=v[j];
			}else{
				res++;
				i--;
				r=v[i]+v[j];
			}
		}
		cout<<res+1<<endl;
	}
	return 0;
}
```
