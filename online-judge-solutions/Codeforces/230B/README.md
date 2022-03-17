# T-primes

> https://codeforces.com/problemset/problem/230/B 

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

We know that prime numbers are positive integers that have exactly two distinct positive divisors. Similarly, we'll call a positive integer t <ins>Т-prime</ins>, if t has exactly three distinct positive divisors.

You are given an array of n positive integers. For each of them determine whether it is Т-prime or not.

## Input

The first line contains a single positive integer, n (1 ≤ n ≤ 10<sup>5</sup>), showing how many numbers are in the array. The next line contains n space-separated integers x<sub>i</sub> (1 ≤ x<sub>i</sub> ≤ 10<sup>12</sup>).

Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is advised to use the cin, cout streams or the %I64d specifier.

## Output

Print n lines: the i-th line should contain "YES" (without the quotes), if number x<sub>i</sub> is Т-prime, and "NO" (without the quotes), if it isn't.

## Examples

---
**input**
```
3
4 5 6
```
**output**
```
YES
NO
NO
```
---

## Note

The given test has three numbers. The first number 4 has exactly three divisors — 1, 2 and 4, thus the answer for this number is "YES". The second number 5 has two divisors (1 and 5), and the third number 6 has four divisors (1, 2, 3, 6), hence the answer for them is "NO".

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	1496 ms
//Memory	:	0 KB
#include<iostream>
#include<math.h>
using namespace std;
bool es_primo(long long number){
    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;
}
bool cuadrado_perfecto(long long n){
	long long r=sqrt(n);
	return r*r==n;
}
int main(){
	long long n,a;
	while(cin>>n){
		while(n--){
			cin>>a;
			if(cuadrado_perfecto(a) && es_primo(sqrt(a)) && a!=1){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
		}
	}
	return 0;
}
```
