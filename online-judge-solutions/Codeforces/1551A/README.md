# Polycarp and Coins

> https://codeforces.com/problemset/problem/1551/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Polycarp must pay **exactly** ***n*** burles at the checkout. He has coins of two nominal values: ***1*** burle and ***2*** burles. Polycarp likes both kinds of coins equally. So he doesn't want to pay with more coins of one type than with the other.

Thus, Polycarp wants to minimize the difference between the count of coins of ***1*** burle and ***2*** burles being used. Help him by determining two non-negative integer values ***c<sub>1</sub>*** and ***c<sub>2</sub>*** which are the number of coins of ***1*** burle and ***2*** burles, respectively, so that the total value of that number of coins is exactly ***n*** (i. e. ***c<sub>1</sub>*** + ***2 ⋅ c<sub>2</sub>*** = ***n*** ), and the absolute value of the difference between ***c<sub>1</sub>*** and ***c<sub>2</sub>*** is as little as possible (i. e. you must minimize | ***c<sub>1</sub>*** − ***c<sub>2</sub>*** |).

## Input

The first line contains one integer ***t*** ( ***1*** ≤ ***t*** ≤ ***10<sup>4</sup>*** ) — the number of test cases. Then ***t*** test cases follow.

Each test case consists of one line. This line contains one integer ***n*** ( ***1*** ≤ ***n*** ≤ ***10<sup>9</sup>*** ) — the number of burles to be paid by Polycarp.

## Output

For each test case, output a separate line containing two integers ***c<sub>1</sub>*** and ***c<sub>2</sub>*** ( ***c<sub>1</sub>*** , ***c<sub>2</sub>*** ≥ ***0*** ) separated by a space where ***c<sub>1</sub>*** is the number of coins of ***1*** burle and ***c<sub>2</sub>*** is the number of coins of ***2*** burles. If there are multiple optimal solutions, print any one.

## Examples

---
**input**
```
6
1000
30
1
32
1000000000
5
```
**output**
```
334 333
10 10
1 0
10 11
333333334 333333333
1 2
```
---

## Note

The answer for the first test case is "334 333". The sum of the nominal values of all coins is ***334 ⋅ 1 + 333 ⋅ 2*** = ***1000***, whereas | ***334*** − ***333*** | = ***1***. One can't get the better value because if | ***c<sub>1</sub>*** − ***c<sub>2</sub>*** | = ***0***, then ***c<sub>1</sub>*** = ***c<sub>2</sub>*** and ***c<sub>1</sub> ⋅ 1 + c<sub>1</sub> ⋅ 2*** = ***1000***, but then the value of ***c<sub>1</sub>*** isn't an integer.

The answer for the second test case is "10 10". The sum of the nominal values is ***10*** ⋅ ***1*** + ***10*** ⋅ ***2*** = ***30*** and | ***10*** − ***10*** | = ***0***, whereas there's no number having an absolute value less than ***0***.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	46 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t,n;
	while(cin>>t){
		while(t--){
			cin>>n;
			int d=n/3;
			int b1=d+n%3;
			int b2=d;
			cout<<b1-(abs(b1-b2)/2)*2<<" "<<b2+(abs(b1-b2)/2)<<endl;
		}
	}
	return 0;
}
```
