# Tram

> https://codeforces.com/problemset/problem/116/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Linear Kingdom has exactly one tram line. It has n stops, numbered from 1 to n in the order of tram's movement. At the i-th stop a<sub>i</sub> passengers exit the tram, while b<sub>i</sub> passengers enter it. The tram is empty before it arrives at the first stop. Also, when the tram arrives at the last stop, all passengers exit so that it becomes empty.

Your task is to calculate the tram's minimum capacity such that the number of people inside the tram at any time never exceeds this capacity. Note that at each stop all exiting passengers exit before any entering passenger enters the tram.

## Input

The first line contains a single number n (2 &leq; n &leq; 1000) - the number of the tram's stops.

Then n lines follow, each contains two integers a<sub>i</sub> and b<sub>i</sub> (0 &leq; a<sub>i</sub>, b<sub>i</sub> &leq; 1000) - the number of passengers that exits the tram at the *i*-th stop, and the number of passengers that enter the tram at the *i*-th stop. The stops are given from the first to the last stop in the order of tram's movement.

* The number of people who exit at a given stop does not exceed the total number of people in the tram immediately before it arrives at the stop. More formally, ![formula](https://render.githubusercontent.com/render/math?math=\displaystyle\forall\i\(\1&leq;i&leq;n\)\:\sum_{j=1}^{i-1}b_j\-\sum_{j=1}^{i-1}a_j\geq\a_i). This particularly means that a<sub>1</sub> = 0.
* At the last stop, all the passengers exit the tram and it becomes empty. More formally, ![formula](https://render.githubusercontent.com/render/math?math=\displaystyle\sum_{j=1}^{n-1}b_j\-\sum_{j=1}^{n-1}\a_j\=\a_n).
* No passenger will enter the train at the last stop. That is, b<sub>n</sub> = 0.

## Output

Print a single integer denoting the minimum possible capacity of the tram (0 is allowed).


## Examples

---
**input**
```
4
0 3
2 5
4 2
4 0
```
**output**
```
6
```
---

## Note

For the first example, a capacity of 6 is sufficient:

* At the first stop, the number of passengers inside the tram before arriving is 0. Then, 3 passengers enter the tram, and the number of passengers inside the tram becomes 3.
* At the second stop, 2 passengers exit the tram (1 passenger remains inside). Then, 5 passengers enter the tram. There are 6 passengers inside the tram now.
* At the third stop, 4 passengers exit the tram (2 passengers remain inside). Then, 2 passengers enter the tram. There are 4 passengers inside the tram now.
* Finally, all the remaining passengers inside the tram exit the tram at the last stop. There are no passenger inside the tram now, which is in line with the constraints.
Since the number of passengers inside the tram never exceeds 6, a capacity of 6 is sufficient. Furthermore it is not possible for the tram to have a capacity less than 6. Hence, 6 is the correct answer.

En caso no carguen las fórmulas mediante [katex](https://katex.org/), adjunto las dos fórmulas:

* ![](.img/formula1.png)

* ![](.img/formula2.png)

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,a,b,capacidad=0,quedan=0;
	cin>>n;
	while(n--){
		cin>>a>>b;
		quedan+=-a+b;
		if(quedan>capacidad)	capacidad=quedan;
	}
	cout<<capacidad<<endl;
	return 0;
}
```
