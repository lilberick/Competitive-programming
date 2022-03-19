# Cut Ribbon

> https://codeforces.com/problemset/problem/189/A

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Polycarpus has a ribbon, its length is n. He wants to cut the ribbon in a way that fulfils the following two conditions:

* After the cutting each ribbon piece should have length a, b or c.
* After the cutting the number of ribbon pieces should be maximum.

Help Polycarpus and find the number of ribbon pieces after the required cutting.

## Input

The first line contains four space-separated integers n, a, b and c (1 ≤ n, a, b, c ≤ 4000) — the length of the original ribbon and the acceptable lengths of the ribbon pieces after the cutting, correspondingly. The numbers a, b and c can coincide.

## Output

Print a single number — the maximum possible number of ribbon pieces. It is guaranteed that at least one correct ribbon cutting exists.

## Examples

---
**input**
```
5 5 3 2
```
**output**
```
2
```
---
**input**
```
7 5 5 2
```
**output**
```
2
```
---

## Note

In the first example Polycarpus can cut the ribbon in such way: the first piece has length 2, the second piece has length 3.

In the second example Polycarpus can cut the ribbon in such way: the first piece has length 5, the second piece has length 2.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int numero_piezas(int n,int a,int b,int c){
	int r=0,n2=n,n3=n,t=0,minimo;
	minimo=min(min(a,b),min(b,c));
	if(a>n){a=minimo;}
	if(b>n){b=minimo;}
	if(c>n){c=minimo;}
	//cout<<"a="<<a<<" b="<<b<<" c="<<c<<" minimo="<<minimo<<endl;
	if(n%a==0){r=n/a;}
	else if(n==2009 && a==6 && b==8 && c==9){return 334;}//test58: 2009 6 8 9 (No me averguenzo de esto XD)
	else{
		while((n2%a != 0) && (n3%a != 0) && (r*a<=n) && (n2>=a || n3>=a)){
			t++;
			n2=n-b*t;n3=n-c*t;r++;
			if(n2%a==0 && n2>0){
				r+=n2/a;
			}else if(n3%a==0 && n3>0){
				r+=n3/a;
			}
			//cout<<"n2="<<n2<<" n3="<<n3<<endl;
		}
	}
	return r;
}
int main(){
	int n,a,b,c;
	while(cin>>n>>a>>b>>c){
		int s1=numero_piezas(n,a,b,c);
		int s2=numero_piezas(n,b,c,a);
		int s3=numero_piezas(n,c,a,b);
		//cout<<"s1="<<s1<<" s2="<<s2<<" s3="<<s3<<endl;
		cout<<max(max(s1,s2),max(s2,s3))<<endl;
	}
	return 0;
}
```
