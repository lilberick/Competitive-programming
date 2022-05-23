# Vus the Cossack and a Contest

> https://codeforces.com/problemset/problem/1186/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Vus the [Cossack](https://en.wikipedia.org/wiki/Cossacks) holds a programming competition, in which ***n*** people participate. He decided to award them all with pens and notebooks. It is known that Vus has exactly ***m*** pens and ***k*** notebooks.

Determine whether the Cossack can reward **all** participants, giving each of them at least one pen and at least one notebook.

## Input

The first line contains three integers ***n***, ***m***, and ***k*** (***1*** ≤ ***n***,***m***,***k*** ≤ ***100***) — the number of participants, the number of pens, and the number of notebooks respectively.

## Output

Print "Yes" if it possible to reward all the participants. Otherwise, print "No".

You can print each letter in any case (upper or lower).

## Examples

---
**input**
```
5 8 6
```
**output**
```
Yes
```
---
**input**
```
3 9 3
```
**output**
```
Yes
```
---
**input**
```
8 5 20
```
**output**
```
No
```
---

## Note

In the first example, there are ***5*** participants. The Cossack has ***8*** pens and ***6*** notebooks. Therefore, he has enough pens and notebooks.

In the second example, there are ***3*** participants. The Cossack has ***9*** pens and ***3*** notebooks. He has more than enough pens but only the minimum needed number of notebooks.

In the third example, there are ***8*** participants but only ***5*** pens. Since the Cossack does not have enough pens, the answer is "No".

## Solution

* C++

	```c++
	//Lang		:	GNU C++14
	//Time		:	15 ms
	//Memory	:	0 KB
	#include<iostream>
	using namespace std;
	int main(){
		int n,m,k;
		while(cin>>n>>m>>k){
			n<=m && n<=k ? cout<<"YES\n":cout<<"NO\n";
		}
		return 0;
	}
	```

* Python

	```py
	#Lang		:	Python 3.8
	#Time		:	31 ms
	#Memory		:	0 KB
	while True:
	    try:
		n,m,k=map(int,input().split())
		if(n<=m and n<=k):
		    print("YES")
		else:
		    print("NO")
	    except EOFError:
		break
	```
