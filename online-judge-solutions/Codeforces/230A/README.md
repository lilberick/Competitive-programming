# Dragons

> https://codeforces.com/problemset/problem/230/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Kirito is stuck on a level of the MMORPG he is playing now. To move on in the game, he's got to defeat all n dragons that live on this level. Kirito and the dragons have <ins>strength</ins>, which is represented by an integer. In the duel between two opponents the duel's outcome is determined by their strength. Initially, Kirito's strength equals s.

If Kirito starts duelling with the *i*-th (1 ≤ *i* ≤ n) dragon and Kirito's strength is not greater than the dragon's strength x<sub>i</sub>, then Kirito loses the duel and dies. But if Kirito's strength is greater than the dragon's strength, then he defeats the dragon and gets a bonus strength increase by y<sub>i</sub>.

Kirito can fight the dragons in any order. Determine whether he can move on to the next level of the game, that is, defeat all dragons without a single loss.

## Input

The first line contains two space-separated integers s and n (1 ≤ s ≤ 10<sup>4</sup>, 1 ≤ n ≤ 10<sup>3</sup>). Then n lines follow: the *i*-th line contains space-separated integers x<sub>i</sub> and y<sub>i</sub> (1 ≤ x<sub>i</sub> ≤ 10<sup>4</sup>, 0 ≤ y<sub>i</sub> ≤ 10<sup>4</sup>) — the *i*-th dragon's strength and the bonus for defeating it.

## Output

On a single line print "YES" (without the quotes), if Kirito can move on to the next level and print "NO" (without the quotes), if he can't.

## Examples

---
**input**
```
2 2
1 99
100 0
```
**output**
```
YES
```
---
**input**
```
10 1
100 100
```
**output**
```
NO
```
---

## Note

In the first sample Kirito's strength initially equals 2. As the first dragon's strength is less than 2, Kirito can fight it and defeat it. After that he gets the bonus and his strength increases to 2 + 99 = 101. Now he can defeat the second dragon and move on to the next level.

In the second sample Kirito's strength is too small to defeat the only dragon and win.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	30 ms
//Memory	:	0 KB
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main(){
	int s,n,x,y;
	while(cin>>s>>n){
		vector< pair<int,int> > v;
		pair<int,int>p;
		while(n--){
			cin>>x>>y;
			p=make_pair(x,y);
			v.push_back(p);
		}
		sort(v.begin(),v.end());
		bool termina=false;
		for(int i=0;i<v.size();i++){
			if(s>v[i].first){s += v[i].second;}
			else if(s<=v[i].first){s=-1;}
		}
		if(s>0){cout<<"YES\n";}
		else{cout<<"NO\n";}
	}
	return 0;
}
```
