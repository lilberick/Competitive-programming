# Beat The Odds

> https://codeforces.com/problemset/problem/1691/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Given a sequence ***a<sub>1</sub>*** , ***a<sub>2</sub>*** ,…, ***a<sub>n</sub>*** , find the minimum number of elements to remove from the sequence such that after the removal, the sum of every ***2*** consecutive elements is even.

## Input

Each test contains multiple test cases. The first line contains a single integer ***t*** (***1*** ≤ ***t*** ≤ ***100***) — the number of test cases. Description of the test cases follows.

The first line of each test case contains a single integer ***n*** ( ***3*** ≤ ***n*** ≤ ***10<sup>5</sup>*** ).

The second line of each test case contains ***n*** integers ***a<sub>1</sub>*** , ***a<sub>2</sub>*** ,…, ***a<sub>n</sub>*** ( ***1*** ≤ ***a<sub>i</sub>*** ≤ ***10<sup>9</sup>*** ) — elements of the sequence.

It is guaranteed that the sum of ***n*** over all test cases does not exceed ***10<sup>5</sup>*** .

## Output

For each test case, print a single integer — the minimum number of elements to remove from the sequence such that the sum of every ***2*** consecutive elements is even.

## Examples

---
**input**
```
2
5
2 4 3 6 8
6
3 5 9 7 1 3
```
**output**
```
1
0
```
---

## Note

In the first test case, after removing ***3***, the sequence becomes [***2***,***4***,***6***,***8***]. The pairs of consecutive elements are {[***2***,***4***],[***4***,***6***],[***6***,***8***]}. Each consecutive pair has an even sum now. Hence, we only need to remove ***1*** element to satisfy the condition asked.

In the second test case, each consecutive pair already has an even sum so we need not remove any element.

## Solution

* C

	```c
	//Lang		:	GNU C11
	//Time		:	31 ms
	//Memory	:	0 KB
	#include<stdio.h>
	int main(){
		int t,n,a;
		scanf("%d",&t);
		while(t--){
			scanf("%d",&n);
			int par=0,impar=0;
			while(n--){
				scanf("%d",&a);
				if(a%2==0) par++;
				else impar++;
			}
			if(par<impar) printf("%d\n",par);
			else printf("%d\n",impar);
		}
		return 0;
	}
	```

* C++

	```c++
	//Lang		:	GNU C++14
	//Time		:	171 ms
	//Memory	:	0 KB
	#include<iostream>
	using namespace std;
	int main(){
		int t,n,a;
		cin>>t;
		while(t--){
			cin>>n;
			int par=0,impar=0;
			while(n--){
				cin>>a;
				a%2==0 ? par++:impar++;
			}
			cout<<min(par,impar)<<endl;
		}
		return 0;
	}
	```

* Python

	```py
	#Lang		:	Python3.8
	#Time		:	77 ms
	#Memory	:	8600 KB
	t=int(input())
	for i in range(0,t):
	    n=int(input())
	    a=list(map(int,input().split()))[:n]
	    lista_impares=[i for i in a if i%2==1]
	    impares= len(lista_impares)
	    pares=len(a)-impares
	    print(pares) if pares<impares else print(impares)

	```
