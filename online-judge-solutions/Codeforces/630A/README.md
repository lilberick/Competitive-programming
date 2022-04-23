# Again Twenty Five!

> https://codeforces.com/problemset/problem/630/A

```
time limit per test	:	0.5 seconds
memory limit per test	:	64 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

The HR manager was disappointed again. The last applicant failed the interview the same way as 24 previous ones. "Do I give such a hard task?" — the HR manager thought. "Just raise number 5 to the power of n and get last two digits of the number. Yes, of course, n can be rather big, and one cannot find the power using a calculator, but we need people who are able to think, not just follow the instructions."

Could you pass the interview in the machine vision company in IT City?

## Input

The only line of the input contains a single integer ***n*** ( ***2*** ≤ ***n*** ≤ ***2***·***10<sup>18<sup>*** ) — the power in which you need to raise number ***5***.

## Output

Output the last two digits of ***5<sup>n</sup>*** without spaces between them.

## Examples

---
**input**
```
2
```
**output**
```
25
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	cout<<"25\n";
	return 0;
}
```
