# Team Olympiad

> https://codeforces.com/problemset/problem/490/A

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

The School №0 of the capital of Berland has n children studying in it. All the children in this school are gifted: some of them are good at programming, some are good at maths, others are good at PE (Physical Education). Hence, for each child we know value t<sub>i</sub>:

* t<sub>i</sub> = 1, if the *i*-th child is good at programming,
* t<sub>i</sub> = 2, if the *i*-th child is good at maths,
* t<sub>i</sub> = 3, if the *i*-th child is good at PE

Each child happens to be good at exactly one of these three subjects.

The Team Scientific Decathlon Olympias requires teams of three students. The school teachers decided that the teams will be composed of three children that are good at different subjects. That is, each team must have one mathematician, one programmer and one sportsman. Of course, each child can be a member of no more than one team.

What is the maximum number of teams that the school will be able to present at the Olympiad? How should the teams be formed for that?

## Input

The first line contains integer *n* (1 ≤ *n* ≤ 5000) — the number of children in the school. The second line contains n integers t<sub>1</sub>, t<sub>2</sub>, ..., t<sub>n</sub> (1 ≤ t<sub>i</sub> ≤ 3), where ti describes the skill of the *i*-th child.

## Output

In the first line output integer w — the largest possible number of teams.

Then print w lines, containing three numbers in each line. Each triple represents the indexes of the children forming the team. You can print both the teams, and the numbers in the triplets in any order. The children are numbered from 1 to *n* in the order of their appearance in the input. Each child must participate in no more than one team. If there are several solutions, print any of them.

If no teams can be compiled, print the only line with value w equal to 0.

## Examples

---
**input**
```
7
1 3 1 3 2 1 2
```
**output**
```
2
3 5 2
6 7 4
```
---
**input**
```
4
2 1 1 2
```
**output**
```
0
```
---

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	31 ms
//Memory	:	200 KB
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,a;
	while(cin>>n){
		vector<int> v;
		vector<int> uno;
		vector<int> dos;
		vector<int> tres;
		while(n--){
			cin>>a;
			v.push_back(a);
		}
		for(int i=0;i<v.size();i++){
			if(v[i]==1){uno.push_back(i);}
			else if(v[i]==2){dos.push_back(i);}
			else if(v[i]==3){tres.push_back(i);}
		}
		int w=min(min(uno.size(),dos.size()),min(dos.size(),tres.size()));
		cout<<w<<endl;
		while(uno.size() && dos.size() && tres.size()){
			cout<<uno[0]+1<<" "<<dos[0]+1<<" "<<tres[0]+1<<endl;
			uno.erase(remove(uno.begin(),uno.end(),uno[0]));
			dos.erase(remove(dos.begin(),dos.end(),dos[0]));
			tres.erase(remove(tres.begin(),tres.end(),tres[0]));
		}
	}
	return 0;
}
```
