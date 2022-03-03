# Petya and Strings

> https://codeforces.com/problemset/problem/112/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings <ins>lexicographically</ins>. The letter's case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

## Input

Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

## Output

If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

## Examples

---
**input**
```
aaaa
aaaA
```
**output**
```
0
```
---
**input**
```
abs
Abz
```
**output**
```
-1
```
---
**input**
```
abcdefg
AbCdEfF
```
**output**
```
1
```
---

## Note

If you want more formal information about the lexicographical order (also known as the "<ins>dictionary order</ins>" or "<ins>alphabetical order</ins>"), you can visit the following site:

* http://en.wikipedia.org/wiki/Lexicographical_order

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string a,b;
	int sa=0,sb=0;
	bool q=true;
	cin>>a>>b;
	transform(a.begin(),a.end(),a.begin(),::tolower);
	transform(b.begin(),b.end(),b.begin(),::tolower);
	for(int i=0;i<a.size() && q==true;i++){  
		if(a[i]>b[i]){ sa++;q=false;}
		else if(a[i]<b[i]){ sb++;q=false;}
	}
	if(sa==sb)	cout<<0<<endl;
	else if(sa<sb)	cout<<-1<<endl;
	else if(sa>sb)	cout<<1<<endl;
	return 0;
}
```
