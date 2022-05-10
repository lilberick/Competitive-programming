# Most Similar Words

> https://codeforces.com/problemset/problem/1676/C

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

You are given ***n*** words of **equal** length ***m***, consisting of lowercase Latin alphabet letters. The ***i***-th word is denoted si.

In one move you can choose **any position in any single word** and change the letter at that position to the previous or next letter in alphabetical order. For example:

* you can change 'e' to 'd' or to 'f';
* 'a' can only be changed to 'b';
* 'z' can only be changed to 'y'.

The difference between two words is the **minimum** number of moves required to make them equal. For example, the difference between "best" and "cost" is ***1***+***10***+***0***+***0***=***11***.

Find the minimum difference of ***s<sub>i</sub>*** and ***s<sub>j</sub>*** such that (***i***<***j***). In other words, find the minimum difference over all possible pairs of the ***n*** words.


## Input

The first line of the input contains a single integer ***t*** (***1*** ≤ ***t*** ≤ ***100***) — the number of test cases. The description of test cases follows.

The first line of each test case contains ***2*** integers ***n*** and ***m*** (***2*** ≤ ***n*** ≤ ***50***, ***1*** ≤ ***m*** ≤ ***8***) — the number of strings and their length respectively.

Then follows ***n*** lines, the ***i***-th of which containing a single string ***s<sub>i</sub>*** of length ***m***, consisting of lowercase Latin letters.

## Output

For each test case, print a single integer — the minimum difference over all possible pairs of the given strings.

## Examples

---
**input**
```
6
2 4
best
cost
6 3
abb
zba
bef
cdu
ooo
zzz
2 7
aaabbbc
bbaezfe
3 2
ab
ab
ab
2 8
aaaaaaaa
zzzzzzzz
3 1
a
u
y
```
**output**
```
11
8
35
0
200
4
```
---

## Note

For the second test case, one can show that the best pair is ("abb","bef"), which has difference equal to ***8***, which can be obtained in the following way: change the first character of the first string to 'b' in one move, change the second character of the second string to 'b' in ***3*** moves and change the third character of the second string to 'b' in ***4*** moves, thus making in total ***1***+***3***+***4***=***8*** moves.

For the third test case, there is only one possible pair and it can be shown that the minimum amount of moves necessary to make the strings equal is ***35***.

For the fourth test case, there is a pair of strings which is already equal, so the answer is ***0***.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	4 KB
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int sumaMenor(int k,vector<string>& v){
	int sumaMenor=100000;
	for(int i=0;i<v.size();i++){
		int suma=0;
		for(int j=0;j<v[i].size();j++){
			if(k!=i){suma+=abs(v[k][j]-v[i][j]);}
		}
		if(k!=i){sumaMenor=min(sumaMenor,suma);}
	}
	return sumaMenor;
}
int main(){
	int t,n,m;
	while(cin>>t){
		while(t--){
			cin>>n>>m;
			string s;
			vector<string> v;
			while(n--){
				cin>>s;
				v.push_back(s);
			}
			int respuesta=10000;
			for(int i=0;i<v.size();i++){
				respuesta=min(respuesta,sumaMenor(i,v));
			}
			cout<<respuesta<<endl;
		}
	}
	return 0;
}
```
