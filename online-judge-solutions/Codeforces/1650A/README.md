# Deletions of Two Adjacent Letters

> https://codeforces.com/problemset/problem/1650/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

The string ***s*** is given, the string length is **odd** number. The string consists of lowercase letters of the Latin alphabet.

As long as the string length is greater than ***1***, the following operation can be performed on it: select any two adjacent letters in the string ***s*** and delete them from the string. For example, from the string "lemma" in one operation, you can get any of the four strings: "mma", "lma", "lea" or "lem" In particular, in one operation, the length of the string reduces by ***2***.

Formally, let the string ***s*** have the form ***s***=***s<sub>1</sub>*** ***s<sub>2</sub>*** … ***s<sub>n</sub>*** (***n***>***1***). During one operation, you choose an arbitrary index ***i*** (***1*** ≤ ***i*** < ***n***) and replace ***s***=***s<sub>1</sub>*** ***s<sub>2</sub>*** … ***s<sub>i-1</sub>*** ***s<sub>i+2</sbu>*** … ***s<sub>n</sub>*** .

For the given string ***s*** and the letter ***c***, determine whether it is possible to make such a sequence of operations that in the end the equality ***s***=***c*** will be true? In other words, is there such a sequence of operations that the process will end with a string of length ***1***, which consists of the letter ***c***?

## Input

The first line of input data contains an integer ***t*** ( ***1*** ≤ ***t*** ≤ ***10<sup>3</sup>*** ) — the number of input test cases.

The descriptions of the ***t*** cases follow. Each test case is represented by two lines:

* string ***s***, which has an odd length from ***1*** to ***49*** inclusive and consists of lowercase letters of the Latin alphabet;
* is a string containing one letter ***c***, where ***c*** is a lowercase letter of the Latin alphabet.

## Output

For each test case in a separate line output:

* YES, if the string ***s*** can be converted so that ***s***=***c*** is true;
* NO otherwise.

You can output YES and NO in any case (for example, the strings yEs, yes, Yes and YES will be recognized as a positive response).

## Examples

---
**input**
```
5
abcde
c
abcde
b
x
y
aaaaaaaaaaaaaaa
a
contest
t
```
**output**
```
YES
NO
NO
YES
YES
```
---

## Note

In the first test case, ***s***="abcde". You need to get ***s***="c". For the first operation, delete the first two letters, we get ***s***="cde". In the second operation, we delete the last two letters, so we get the expected value of ***s***="c".

In the third test case, ***s***="x", it is required to get ***s***="y". Obviously, this cannot be done.

## Solution

* C++

	```c++
	//Lang		:	GNU C++14
	//Time		:	15 ms
	//Memory	:	100 KB
	#include<iostream>
	using namespace std;
	bool yes(string s,int i){
		string pre=s.substr(0,i);
		string post=s.substr(i+1,s.size());
		if(pre.size()%2==0 && post.size()%2==0){return true;}
		else{return false;}
	}
	int main(){
		int t;
		while(cin>>t){
			while(t--){
				string s;
				char c;
				cin>>s>>c;
				bool termina=false,encontrado=false;
				for(int i=0;i<s.size() && termina==false;i++){
					if(s[i]==c) termina=yes(s,i);
					if(termina) encontrado=termina;
				}
				if(encontrado){cout<<"YES\n";}
				else{cout<<"NO\n";}
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
	def yes(s: str,i: int)->bool:
	    pre=s[0:i]
	    post=s[i+1:len(s)]
	    if(len(pre)%2==0 and len(post)%2==0): return True
	    else: return False
	while(t>0):
	    t-=1
	    s=input()
	    c=input()
	    termina,encontrado=False,False
	    for i in range(0,len(s)):
		if(s[i]==c): termina=yes(s,i)
		if(termina): encontrado=termina
	    if(encontrado): print("YES")
	    else: print("NO")
	```
