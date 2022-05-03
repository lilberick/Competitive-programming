# Vanya and Cubes

> https://codeforces.com/problemset/problem/492/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Vanya got ***n*** cubes. He decided to build a pyramid from them. Vanya wants to build the pyramid as follows: the top level of the pyramid must consist of ***1*** cube, the second level must consist of ***1*** + ***2*** = ***3*** cubes, the third level must have ***1*** + ***2*** + ***3*** = ***6*** cubes, and so on. Thus, the ***i***-th level of the pyramid must have ***1*** + ***2*** + ... + (***i*** - ***1***) + ***i*** cubes.

Vanya wants to know what is the maximum height of the pyramid that he can make using the given cubes.

## Input

The first line contains integer ***n*** ( ***1*** ≤ ***n*** ≤ ***10<sup>4</sup>*** ) — the number of cubes given to Vanya.

## Output

Print the maximum possible height of the pyramid in the single line.

## Examples

---
**input**
```
1

```
**output**
```
1

```
---
**input**
```
25

```
**output**
```
4

```
---

## Note

Illustration to the second sample: 

![](.img/1.png)

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int i=1;
		while((i+(i*i*i+3*i*i-4*i)/6)<=n){i++;}
		cout<<i-1<<endl;
	}
	return 0;
}
```
