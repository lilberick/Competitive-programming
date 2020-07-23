# Sereja and Dima
> https://codeforces.com/problemset/problem/381/A
```
time limit per test	:	1 second
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard output
```
## Problem 
Sereja and Dima play a game. The rules of the game are very simple. The players have n cards in a row. Each card contains a number, all numbers on the cards are distinct. The players take turns, Sereja moves first. During his turn a player can take one card: either the leftmost card in a row, or the rightmost one. The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.

Sereja and Dima are being greedy. Each of them chooses the card with the larger number during his move.

Inna is a friend of Sereja and Dima. She knows which strategy the guys are using, so she wants to determine the final score, given the initial state of the game. Help her.

## Input
The first line contains integer n (1 ≤ n ≤ 1000) — the number of cards on the table. The second line contains space-separated numbers on the cards from left to right. The numbers on the cards are distinct integers from 1 to 1000.

## Output
On a single line, print two integers. The first number is the number of Sereja's points at the end of the game, the second number is the number of Dima's points at the end of the game.
## Examples
---
**input**
```
4
4 1 2 10
```
**output**
```
12 5
```
---
**input**
```
7
1 2 3 4 5 6 7
```
**output**
```
16 12
```
---
## Note
In the first sample Sereja will take cards with numbers 10 and 2, so Sereja's sum is 12. Dima will take cards with numbers 4 and 1, so Dima's sum is 5.
## Solution
```c++
//Lang		:	GNU C++11
//Time		:	31 ms
//Memory	:	3800 KB
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int max(int x, int y){return x ^ ((x ^ y) & -(x < y));}
int main(){
	int n,a,c=0,mayor;
	cin>>n;
	vector<int> v,Sereja,Dima;
	while(n--){cin>>a;v.push_back(a);}
	while(v.size()!=0){
		mayor=max(v[0],v[v.size()-1]);
		if(c%2==0){Sereja.push_back(mayor);}
		if(c%2!=0){Dima.push_back(mayor);}
		if(mayor==v[v.size()-1]){
			v.erase(v.begin()+v.size()-1);
		}else if(mayor==v[0]){
			v.erase(v.begin());
		}
		c++;
	}
	cout<<accumulate(Sereja.begin(),Sereja.end(),0)<<"\n";
	cout<<accumulate(Dima.begin(),Dima.end(),0)<<"\n";
}
```
