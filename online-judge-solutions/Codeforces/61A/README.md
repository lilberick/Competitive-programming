# Ultra-Fast Mathematician

> https://codeforces.com/problemset/problem/61/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Shapur was an extremely gifted student. He was great at everything including Combinatorics, Algebra, Number Theory, Geometry, Calculus, etc. He was not only smart but extraordinarily fast! He could manage to sum 10<sup>18</sup> numbers in a single second.

One day in 230 AD Shapur was trying to find out if any one can possibly do calculations faster than him. As a result he made a very great contest and asked every one to come and take part.

In his contest he gave the contestants many different pairs of numbers. Each number is made from digits 0 or 1. The contestants should write a new number corresponding to the given pair of numbers. The rule is simple: The *i*-th digit of the answer is 1 if and only if the *i*-th digit of the two given numbers differ. In the other case the *i*-th digit of the answer is 0.

Shapur made many numbers and first tried his own speed. He saw that he can perform these operations on numbers of length ∞ (length of a number is number of digits in it) in a glance! He always gives correct answers so he expects the contestants to give correct answers, too. He is a good fellow so he won't give anyone very big numbers and he always gives one person numbers of same length.

Now you are going to take part in Shapur's contest. See if you are faster and more accurate.

## Input

There are two lines in each input. Each of them contains a single number. It is guaranteed that the numbers are made from 0 and 1 only and that their length is same. The numbers may start with 0. The length of each number doesn't exceed 100.

## Output

Write one line — the corresponding answer. Do not omit the leading 0s.

## Examples

---
**input**
```
1010100
0100101
```
**output**
```
1110001
```
---
**input**
```
000
111
```
**output**
```
111
```
---
**input**
```
1110
1010
```
**output**
```
0100
```
---
**input**
```
01110
01100
```
**output**
```
00010
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
	string s,t;
	while(cin>>s>>t){
		string r;
		for(int i=0;i<s.size();i++){
			int a=(int(s[i]-48))^(int(t[i]-48));
			r+=char(a+48);
		}
		cout<<r<<endl;
	}
	return 0;
}
```
