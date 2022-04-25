# Black Square

> https://codeforces.com/problemset/problem/431/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Quite recently, a very smart student named Jury decided that lectures are boring, so he downloaded a game called "Black Square" on his super cool touchscreen phone.

In this game, the phone's screen is divided into four vertical strips. Each second, a black square appears on some of the strips. According to the rules of the game, Jury must use this second to touch the corresponding strip to make the square go away. As Jury is both smart and lazy, he counted that he wastes exactly ***a<sub>i</sub>*** calories on touching the ***i***-th strip.

You've got a string ***s***, describing the process of the game and numbers ***a<sub>1</sub>*** , ***a<sub>2</sub>*** , ***a<sub>3</sub>*** ,  ***a<sub>4</sub>*** . Calculate how many calories Jury needs to destroy all the squares?

## Input

The first line contains four space-separated integers ***a<sub>1</sub>*** , ***a<sub>2</sub>*** , ***a<sub>3</sub>*** , ***a<sub>4</sub>*** ( ***0*** ≤ ***a<sub>1</sub>*** , ***a<sub>2</sub>*** , ***a<sub>3</sub>*** , ***a<sub>4</sub>*** ≤ ***10<sup>4</pub>*** ).

The second line contains string ***s*** ( ***1*** ≤ |***s***| ≤ ***10<sup>5</sup>*** ), where the ***і***-th character of the string equals "***1***", if on the ***i***-th second of the game the square appears on the first strip, "***2***", if it appears on the second strip, "***3***", if it appears on the third strip, "***4***", if it appears on the fourth strip.

## Output

Print a single integer — the total number of calories that Jury wastes.

## Examples

---
**input**
```
1 2 3 4
123214

```
**output**
```
13

```
---
**input**
```
1 5 3 2
11221

```
**output**
```
13

```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	300 KB
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int a,t=4,suma=0;
	string s;
	vector<int> v;
	while(t--){
		cin>>a;
		v.push_back(a);
	}
	cin>>s;
	for(int i=0;i<s.size();i++){
		suma+=v[s[i]-'0'-1];
	}
	cout<<suma<<endl;
	return 0;
}
```
