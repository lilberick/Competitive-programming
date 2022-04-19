# Array Balancing

> https://codeforces.com/problemset/problem/1661/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

You are given two arrays of length ***n***: ***a<sub>1</sub>*** , ***a<sub>2</sub>*** ,…, ***a<sub>n</sub>*** and ***b<sub>1</sub>*** , ***b<sub>2</sub>*** ,…, ***b<sub>n</sub>*** .

You can perform the following operation any number of times:

1. Choose integer index ***i*** ( ***1*** ≤ ***i*** ≤ ***n*** );

2. Swap ***a<sub>i</sub>*** and ***b<sub>i</sub>*** .

What is the minimum possible sum | ***a<sub>1</sub>*** − ***a<sub>2</sub>*** |+| ***a<sub>2</sub>*** − ***a<sub>3</sub>*** |+⋯+| ***a<sub>n-1</sub>*** − ***a<sub>n</sub>*** | + | ***b<sub>1</sub>*** − ***b<sub>2</sub>*** |+| ***b<sub>2</sub>*** − ***b<sub>3</sub>*** |+⋯+| ***b<sub>n-1</sub>*** − ***b<sub>n</sub>*** | (in other words, ![formula](https://render.githubusercontent.com/render/math?math=\displaystyle\sum_{i=1}^{n-1}\(\|a_i-a_{i%2B1}|%2B|b_i%2Bb_{i%2B1}|\)) you can achieve after performing several (possibly, zero) operations?

## Input

The first line contains a single integer ***t*** ( ***1*** ≤ ***t*** ≤ ***4000*** ) — the number of test cases. Then, ***t*** test cases follow.

The first line of each test case contains the single integer ***n*** ( ***2*** ≤ ***n*** ≤ ***25*** ) — the length of arrays ***a*** and ***b***.

The second line of each test case contains ***n*** integers ***a<sub>1</sub>*** , ***a<sub>2</sub>*** ,…, ***a<sub>n</sub>*** ( ***1*** ≤ ***a<sub>i</sub>*** ≤ ***10<sup>9</sup>*** ) — the array ***a*** .

The third line of each test case contains ***n*** integers ***b<sub>1</sub>*** , ***b<sub>2</sub>*** , …, ***b<sub>n</sub>*** ( ***1*** ≤ ***b<sub>i</sub>*** ≤ ***10<sup>9</sup>*** ) — the array ***b*** .

## Output

For each test case, print one integer — the minimum possible sum ![formula](https://render.githubusercontent.com/render/math?math=\displaystyle\sum_{i=1}^{n-1}\(\|a_i-a_{i%2B1}|%2B|b_i%2Bb_{i%2B1}|\))

## Examples

---
**input**
```
3
4
3 3 10 10
10 10 3 3
5
1 2 3 4 5
6 7 8 9 10
6
72 101 108 108 111 44
10 87 111 114 108 100
```
**output**
```
0
8
218
```
---

## Note

In the first test case, we can, for example, swap ***a<sub>3</sub>*** with ***b<sub>3</sub>*** and ***a<sub>4</sub>*** with ***b<sub>4</sub>*** . We'll get arrays ***a***=[***3***,***3***,***3***,***3***] and ***b***=[***10***,***10***,***10***,***10***] with sum ***3*** ⋅|***3*** − ***3***| + ***3*** ⋅ |***10*** − ***10***|=***0***.

In the second test case, arrays already have minimum sum (described above) equal to |***1*** − ***2***|+⋯+|***4*** − ***5***|+|***6*** − ***7***|+⋯+|***9*** − ***10***| = ***4***+***4*** = ***8*** .

In the third test case, we can, for example, swap ***a<sub>5</sub>*** and ***b<sub>5</sub>*** .

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	358 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,n,x;
	while(cin>>t){
		while(t--){
			cin>>n;
			int n1=n, n2=n;
			vector<int>a,b;
			while(n1--){
				cin>>x;
				a.push_back(x);
			}
			while(n2--){
				cin>>x;
				b.push_back(x);
			}
			long long suma=0,suma1,suma2;
			for(int i=0;i<a.size()-1;i++){
				suma1=abs(a[i+1]-a[i])+abs(b[i+1]-b[i]);
				suma2=abs(b[i+1]-a[i])+abs(a[i+1]-b[i]);
				suma+=min(suma1,suma2);
			}
			cout<<suma<<"\n";
		}
	}
	return 0;
}
```
