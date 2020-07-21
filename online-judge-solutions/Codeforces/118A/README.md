# String Task
> https://codeforces.com/problemset/problem/118/A
```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard output
```
## Problem
Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

* deletes all the vowels,
* inserts a character "." before each consonant,
* replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

# Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

# Output
Print the resulting string. It is guaranteed that this string is not empty.
## Examples
---
**input**
```
tour
```
**output**
```
.t.r
```
---
**input**
```
Codeforces
```
**output**
```
.c.d.f.r.c.s
```
---
**input**
```
aBAcAba
```
**output**
```
.b.c.b
```
---
## Solution
```c++
//Lang		:	GNU C++11
//Time		:	62 ms
//Memory	:	3800 KB
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		transform(s.begin(),s.end(),s.begin(),::tolower);
		s.erase(remove(s.begin(),s.end(),'a'),s.end());
		s.erase(remove(s.begin(),s.end(),'e'),s.end());
		s.erase(remove(s.begin(),s.end(),'i'),s.end());
		s.erase(remove(s.begin(),s.end(),'o'),s.end());
		s.erase(remove(s.begin(),s.end(),'u'),s.end());
		s.erase(remove(s.begin(),s.end(),'y'),s.end());
		for(int i=0;i<s.size();i++){
			cout<<"."<<s[i];
		}
		cout<<"\n";
	}
}
```
