# Div. 7

> https://codeforces.com/problemset/problem/1633/A

```
time limit per test	:	2 seconds
memory limit per test	:	512 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

You are given an integer ***n***. You have to change the minimum number of digits in it in such a way that the resulting number **does not have any leading zeroes** and **is divisible by 7**.

If there are multiple ways to do it, print any of them. If the given number is already divisible by **7**, leave it unchanged.

## Input

The first line contains one integer ***t*** (***1*** ≤ ***t*** ≤ ***990***) — the number of test cases.

Then the test cases follow, each test case consists of one line containing one integer ***n*** (***10*** ≤ ***n*** ≤ ***999***).

## Output

For each test case, print one integer without any leading zeroes — the result of your changes (i. e. the integer that is divisible by ***7*** and can be obtained by changing the minimum possible number of digits in ***n***).

If there are multiple ways to apply changes, print any resulting number. If the given number is already divisible by ***7***, just print it.

## Examples

---
**input**
```
3
42
23
377
```
**output**
```
42
28
777
```
---

## Note

In the first test case of the example, ***42*** is already divisible by ***7***, so there's no need to change it.

In the second test case of the example, there are multiple answers — ***28***, ***21*** or ***63***.

In the third test case of the example, other possible answers are ***357***, ***371*** and ***378***. Note that you cannot print ***077*** or ***77***.

## Solution

* C

	```c
	//Lang		:	GNU C11
	//Time		:	15 ms
	//Memory	:	0 KB
	#include<stdio.h>
	int digitos_diferentes(int a,int b){
		int c1=a/100,c2=b/100,dif=0;
		int d1=(a%100)/10,d2=(b%100)/10;
		int u1=a%10,u2=b%10;
		//printf("%d %d %d\n",c1,d1,u1);
		//printf("%d %d %d\n",c2,d2,u2);
		if(c1!=c2 && (c1!=0 && c2!=0)) dif++;
		if(d1!=d2) dif++;
		if(u1!=u2) dif++;
		return dif;
	}
	int div7(int n){
		int c=n/100;
		int d=(n%100)/10;
		int u=n%10;
		int div=c*2+d*3+u;
		return div;
	}
	int escoger(int n,int restado,int sumado){
		int dres=digitos_diferentes(n,restado);
		int dsum=digitos_diferentes(n,sumado);
		if(dres<dsum) return restado;
		else	return sumado;
	}
	int main(){
		int t,n;
		scanf("%d",&t);
		while(t--){
			scanf("%d",&n);
			if(n%7==0){printf("%d\n",n);}
			else{
				int restar=div7(n)%7;
				int sumar=7-restar;
				int restado=n-restar;
				int sumado=n+sumar;
				//printf("%d %d\n",restado,sumado);
				printf("%d\n",escoger(n,restado,sumado));
			}
		}
		return 0;
	}
	```

* Python 

	```py
	#Lang		:	Python 3.8
	#Time		:	46 ms
	#Memory	:	0 KB
	t=int(input())
	def digitos_diferentes(a:int,b:int)->int:
	    c1,c2,dif=int(a/100),int(b/100),0
	    d1,d2=int((a%100)/10),int((b%100)/10)
	    u1=a%10
	    u2=b%10
	    if(c1!=c2 and (c1!=0 and c2!=0)): dif+=1
	    if(d1!=d2): dif+=1
	    if(u1!=u2): dif+=1
	    return dif
	def div7(n: int)->int:
	    c,d,u=int(n/100),int((n%100)/10),n%10
	    div=c*2+d*3+u
	    return div
	def escoger(n: int,restado: int,sumado: int)->int:
	    dres=digitos_diferentes(n,restado)
	    dsum=digitos_diferentes(n,sumado)
	    return restado if dres<dsum else sumado
	while(t>0):
	    t-=1
	    n=int(input())
	    if(n%7==0):print(n)
	    else:
		restar=div7(n)%7
		sumar=7-restar
		restado,sumado=n-restar,n+sumar
		print(escoger(n,restado,sumado))
	```
