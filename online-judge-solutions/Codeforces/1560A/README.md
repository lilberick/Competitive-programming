# Dislike of Threes

> https://codeforces.com/problemset/problem/1560/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Polycarp doesn't like integers that are divisible by ***3*** or end with the digit ***3*** in their decimal representation. Integers that meet both conditions are disliked by Polycarp, too.

Polycarp starts to write out the positive (greater than ***0*** ) integers which he likes: ***1***,***2***,***4***,***5***,***7***,***8***,***10***,***11***,***14***,***16***,…. Output the ***k***-th element of this sequence (the elements are numbered from ***1*** ).

## Input

The first line contains one integer ***t*** ( ***1*** ≤ ***t*** ≤ ***100*** ) — the number of test cases. Then ***t*** test cases follow.

Each test case consists of one line containing one integer ***k*** ( ***1*** ≤ ***k*** ≤ ***1000***).

## Output

For each test case, output in a separate line one integer ***x*** — the ***k***-th element of the sequence that was written out by Polycarp.

## Examples

---
**input**
```
10
1
2
3
4
5
6
7
8
9
1000
```
**output**
```
1
2
4
5
7
8
10
11
14
1666
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	int c=1,numero=1,t,k;
	while(c<1001){
		string num=to_string(numero);
		if(numero%3!=0 && num[num.size()-1]!='3'){
			v.push_back(numero);
			c++;
		}
		numero++;
	}
	while(cin>>t){
		while(t--){
			cin>>k;
			cout<<v[k-1]<<endl;
		}
	}
	return 0;
}
```
