# Young Physicist

> https://codeforces.com/problemset/problem/69/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

A guy named Vasya attends the final grade of a high school. One day Vasya decided to watch a match of his favorite hockey team. And, as the boy loves hockey very much, even more than physics, he forgot to do the homework. Specifically, he forgot to complete his physics tasks. Next day the teacher got very angry at Vasya and decided to teach him a lesson. He gave the lazy student a seemingly easy task: You are given an idle body in space and the forces that affect it. The body can be considered as a material point with coordinates (0; 0; 0). Vasya had only to answer whether it is in equilibrium. "Piece of cake" - thought Vasya, we need only to check if the sum of all vectors is equal to 0. So, Vasya began to solve the problem. But later it turned out that there can be lots and lots of these forces, and Vasya can not cope without your help. Help him. Write a program that determines whether a body is idle or is moving by the given vectors of forces.

## Input

The first line contains a positive integer n (1 &leq; n &leq; 100), then follow n lines containing three integers each: the x<sub>i</sub> coordinate, the y<sub>i</sub> coordinate and the z<sub>i</sub> coordinate of the force vector, applied to the body ( - 100 &leq; xi, yi, zi &leq; 100).

## Output

Print the word "YES" if the body is in equilibrium, or the word "NO" if it is not.

## Examples

---
**input**
```
3
4 1 7
-2 4 -1
1 -5 -3
```
**output**
```
NO
```
---
**input**
```
3
3 -1 7
-5 2 -4
2 -1 -3
```
**output**
```
YES
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	100 KB
#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
vector<vector<int> > transpose(const vector<vector<int> > &b){
    vector<vector<int> > trans_vec(b[0].size(), vector<int>());
    for (int i = 0; i < b.size(); i++){
        for (int j = 0; j < b[i].size(); j++){
            trans_vec[j].push_back(b[i][j]);
        }
    }
    return trans_vec;
}
int main(){
	int n,a,b,c,sum=0;
	vector< vector<int> > v;
	cin>>n;
	while(n--){
		vector<int> fila;
		cin>>a>>b>>c;
		fila.push_back(a);
		fila.push_back(b);
		fila.push_back(c);
		v.push_back(fila);
	}
	v=transpose(v);
	bool f=true;
	for(int i=0;i<v.size() && true;i++){
		sum += accumulate(v[i].begin(), v[i].end(), 0);
		if(sum != 0){f=false;}
	}
	if(f)	cout<<"YES\n";
	else		cout<<"NO\n";
	return 0;
}
```
