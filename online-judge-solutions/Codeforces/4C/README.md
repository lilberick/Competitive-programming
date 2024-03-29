# Registration system

> https://codeforces.com/problemset/problem/4/C

```
time limit per test	:	5 seconds
memory limit per test	:	64 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

A new e-mail service "Berlandesk" is going to be opened in Berland in the near future. The site administration wants to launch their project as soon as possible, that's why they ask you to help. You're suggested to implement the prototype of site registration system. The system should work on the following principle.

Each time a new user wants to register, he sends to the system a request with his name. If such a name does not exist in the system database, it is inserted into the database, and the user gets the response OK, confirming the successful registration. If the name already exists in the system database, the system makes up a new user name, sends it to the user as a prompt and *also inserts the prompt into the database*. The new name is formed by the following rule. Numbers, starting with 1, are appended one after another to name (name1, name2, ...), among these numbers the least i is found so that namei does not yet exist in the database.

## Input

The first line contains number n (1 ≤ n ≤ 10<sup>5</sup>). The following n lines contain the requests to the system. Each request is a non-empty line, and consists of not more than 32 characters, which are all lowercase Latin letters.

## Output

Print n lines, which are system responses to the requests: **OK** in case of successful registration, or a prompt with a new name, if the requested name is already taken.

## Examples

---
**input**
```
4
abacaba
acaba
abacaba
acab
```
**output**
```
OK
OK
abacaba1
OK
```
---
**input**
```
6
first
first
second
second
third
third
```
**output**
```
OK
first1
OK
second1
OK
third1
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	1372 ms
//Memory	:	900 KB
#include <iostream>
#include <map>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		map<string,int>m;
		while(n--){
			string s;
			cin>>s;
			m[s]++;
			if(m.find(s)->second == 1){cout<<"OK"<<endl;}
			else{cout<<m.find(s)->first<<m.find(s)->second -1<<endl;}
		}
	}
	return 0;
}
```
