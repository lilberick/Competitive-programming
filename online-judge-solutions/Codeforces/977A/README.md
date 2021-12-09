# Wrong Subtraction

> https://codeforces.com/problemset/problem/977/A

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Little girl Tanya is learning how to decrease a number by one, but she does it wrong with a number consisting of two or more digits. Tanya subtracts one from a number by the following algorithm:

* if the last digit of the number is non-zero, she decreases the number by one;
* if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
You are given an integer number n. Tanya will subtract one from it k times. Your task is to print the result after all k subtractions.

It is guaranteed that the result will be positive integer number.

## Input

The first line of the input contains two integer numbers n and k (2 &leq; n &leq; 10<sup>9</sup>, 1 &leq; k &leq; 50) - the number from which Tanya will subtract and the number of subtractions correspondingly.

## Output

Print one integer number - the result of the decreasing n by one k times.

It is guaranteed that the result will be positive integer number.

## Examples

---
**input**
```
512 4
```
**output**
```
50
```
---
**input**
```
1000000000 9
```
**output**
```
1
```
---

## Note

The first example corresponds to the following sequence: 512 &#8594; 511 &#8594; 510 &#8594; 51 &#8594; 50.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	while(k--){
		if(n%10==0)	n=n/10;
		else		n--;
	}
	cout<<n<<endl;
	return 0;
}
```
