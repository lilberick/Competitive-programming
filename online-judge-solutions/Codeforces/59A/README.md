# Word

> https://codeforces.com/problemset/problem/59/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP - with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

## Input

The first line contains a word s - it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

## Output

Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

## Examples

---
**input**
```
HoUse
```
**output**
```
house
```
---
**input**
```
ViP
```
**output**
```
VIP
```
---
**input**
```
maTRIx
```
**output**
```
matrix
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string s;
	int may=0,min=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(int(s[i])>=97 && int(s[i])<=122)	min++;
		else					may++;
	}
	if(min>=may)	transform(s.begin(),s.end(),s.begin(),::tolower);
	else		transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s<<endl;
	return 0;
}
```
