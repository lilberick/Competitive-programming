# Mishka and Game

> https://codeforces.com/problemset/problem/703/A

```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Mishka is a little polar bear. As known, little bears loves spending their free time playing dice for chocolates. Once in a wonderful sunny morning, walking around blocks of ice, Mishka met her friend Chris, and they started playing the game.

Rules of the game are very simple: at first number of rounds ***n*** is defined. In every round each of the players throws a cubical dice with distinct numbers from ***1*** to ***6*** written on its faces. Player, whose value after throwing the dice is greater, wins the round. In case if player dice values are equal, no one of them is a winner.

In average, player, who won most of the rounds, is the winner of the game. In case if two players won the same number of rounds, the result of the game is draw.

Mishka is still very little and can't count wins and losses, so she asked you to watch their game and determine its result. Please help her!

## Input

The first line of the input contains single integer  ***n*** ( ***1*** ≤ ***n*** ≤ ***100*** ) — the number of game rounds.
 
The next ***n*** lines contains rounds description. ***i***-th of them contains pair of integers ***m<sub>i</sub>*** and ***c<sub>i</sub>*** ( ***1*** ≤ ***m<sub>i</sub>*** ,  ***c<sub>i</sub>>*** ≤ ***6*** ) — values on dice upper face after Mishka's and Chris' throws in ***i***-th round respectively.

## Output

If Mishka is the winner of the game, print "Mishka" (without quotes) in the only line.

If Chris is the winner of the game, print "Chris" (without quotes) in the only line.

If the result of the game is draw, print "Friendship is magic!^^" (without quotes) in the only line.

## Examples

---
**input**
```
3
3 5
2 1
4 2
```
**output**
```
Mishka
```
---
**input**
```
2
6 1
1 6
```
**output**
```
Friendship is magic!^^
```
---
**input**
```
3
1 5
3 3
2 2
```
**output**
```
Chris
```
---

## Note

In the first sample case Mishka loses the first round, but wins second and third rounds and thus she is the winner of the game.

In the second sample case Mishka wins the first round, Chris wins the second round, and the game ends with draw with score 1:1.

In the third sample case Chris wins the first round, but there is no winner of the next two rounds. The winner of the game is Chris.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	15 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int n,m,c;
	while(cin>>n){
		int mishka=0,chris=0;
		while(n--){
			cin>>m>>c;
			if(m>c){mishka++;}
			else if(m<c){chris++;}
		}
		if(mishka>chris){cout<<"Mishka\n";}
		else if(mishka<chris){cout<<"Chris\n";}
		else{cout<<"Friendship is magic!^^\n";}
	}
	return 0;
}
```
