# Fafa and his Company

> https://codeforces.com/problemset/problem/935/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Fafa owns a company that works on huge projects. There are ***n*** employees in Fafa's company. Whenever the company has a new project to start working on, Fafa has to divide the tasks of this project among all the employees.

Fafa finds doing this every time is very tiring for him. So, he decided to choose the best ***l*** employees in his company as team leaders. Whenever there is a new project, Fafa will divide the tasks among only the team leaders and each team leader will be responsible of some positive number of employees to give them the tasks. To make this process fair for the team leaders, each one of them should be responsible for the same number of employees. Moreover, every employee, who is not a team leader, has to be under the responsibility of exactly one team leader, and no team leader is responsible for another team leader.

Given the number of employees ***n***, find in how many ways Fafa could choose the number of team leaders ***l*** in such a way that it is possible to divide employees between them evenly.

## Input

The input consists of a single line containing a positive integer ***n*** ( ***2*** ≤ ***n*** ≤ ***10<sup>5</sup>*** ) — the number of employees in Fafa's company.

## Output

Print a single integer representing the answer to the problem.

## Examples

---
**input**
```
2

```
**output**
```
1

```
---
**input**
```
10

```
**output**
```
3

```
---

## Note

In the second sample Fafa has 3 ways:

* choose only ***1*** employee as a team leader with ***9*** employees under his responsibility.

* choose ***2*** employees as team leaders with ***4*** employees under the responsibility of each of them.

* choose ***5*** employees as team leaders with ***1*** employee under the responsibility of each of them.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	405 ms
//Memory	:	0 KB
#include<iostream>
#include<map>
using namespace std;
#define typeof(x) __typeof__(x)
#define tr(c,i) for(typeof(c.begin()) i=c.begin(); i!=c.end(); i++)
bool Primo(int x){
	bool esprimo=true;
	for(int i=2;i<x;i++){
		if(x%i==0){esprimo=false;}
	}
	if(x==1){return false;}
	else{return esprimo;}
}
void NumeroDivisores(int x){
	map<int,int> m;
	int i=2,cd=1;
	while(x!=1){
		if(Primo(i) && x%i==0){
			x/=i;m[i]++;
		}
		if(x%i!=0){i++;}
	}
	tr(m,j){
		cd*=(j->second)+1;
	}
	cout<<cd-1<<endl;
}
int main(){
	int n;
	while(cin>>n){
		NumeroDivisores(n);
	}
	return 0;
}
```
