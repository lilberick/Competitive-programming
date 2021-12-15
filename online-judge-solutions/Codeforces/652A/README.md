# Gabriel and Caterpillar

> https://codeforces.com/problemset/problem/652/A

```
time limit per test	:	1 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

The 9-th grade student Gabriel noticed a caterpillar on a tree when walking around in a forest after the classes. The caterpillar was on the height h<sub>1</sub> cm from the ground. On the height h<sub>2</sub> cm (h<sub>2</sub> > h<sub>1</sub>) on the same tree hung an apple and the caterpillar was crawling to the apple.

Gabriel is interested when the caterpillar gets the apple. He noted that the caterpillar goes up by a cm per hour by day and slips down by b cm per hour by night.

In how many days Gabriel should return to the forest to see the caterpillar get the apple. You can consider that the day starts at 10 am and finishes at 10 pm. Gabriel's classes finish at 2 pm. You can consider that Gabriel noticed the caterpillar just after the classes at 2 pm.

Note that the forest is magic so the caterpillar can slip down under the ground and then lift to the apple.

## Input

The first line contains two integers h<sub>1</sub>, h<sub>2</sub> (1 &leq; h<sub>1</sub> < h<sub>2</sub> &leq; 10<sub>5</sub>) — the heights of the position of the caterpillar and the apple in centimeters.

The second line contains two integers a, b (1 &leq; a, b &leq; 10<sup>5</sup>) — the distance the caterpillar goes up by day and slips down by night, in centimeters per hour.

## Output

Print the only integer *k* — the number of days Gabriel should wait to return to the forest and see the caterpillar getting the apple.

If the caterpillar can't get the apple print the only integer  - 1.

## Examples

---
**input**
```
10 30
2 1
```
**output**
```
1
```
---
**input**
```
10 13
1 1
```
**output**
```
0
```
---
**input**
```
10 19
1 2
```
**output**
```
-1
```
---
**input**
```
1 50
5 4
```
**output**
```
1
```
---

## Note

In the first example at 10 pm of the first day the caterpillar gets the height 26. At 10 am of the next day it slips down to the height 14. And finally at 6 pm of the same day the caterpillar gets the apple.

Note that in the last example the caterpillar was slipping down under the ground and getting the apple on the next day.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int h1,h2,a,b;
	while(cin>>h1>>h2){
		bool termina=false;
		cin>>a>>b;
		//dia1
		h1+=a*8;
		if(h1>=h2){cout<<0<<endl;termina=true;}
		h1-=b*12;
		//dia2-->
		int dia=0;
		while(h1<h2 && termina==false){
			if(b>=a){termina=true;cout<<-1<<endl;}
			dia++;
			h1+=a*12;
			if(h1>=h2){cout<<dia<<endl;termina=true;}
			h1-=b*12;
		}
	}
	return 0;
}
```
