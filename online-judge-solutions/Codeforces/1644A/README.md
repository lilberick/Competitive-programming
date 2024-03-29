# Doors and Keys

> https://codeforces.com/problemset/problem/1644/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

The knight is standing in front of a long and narrow hallway. A princess is waiting at the end of it.

In a hallway there are three doors: a red door, a green door and a blue door. The doors are placed one after another, however, possibly in a different order. To proceed to the next door, the knight must first open the door before.

Each door can be only opened with a key of the corresponding color. So three keys: a red key, a green key and a blue key — are also placed somewhere in the hallway. To open the door, the knight should first pick up the key of its color.

The knight has a map of the hallway. It can be transcribed as a string, consisting of six characters:

* R, G, B — denoting red, green and blue doors, respectively;

* r, g, b — denoting red, green and blue keys, respectively.

Each of these six characters appears in the string exactly once.

The knight is standing at the beginning of the hallway — on the left on the map.

Given a map of the hallway, determine if the knight can open all doors and meet the princess at the end of the hallway.

## Input

The first line contains a single integer ***t*** ( ***1*** ≤ ***t*** ≤ ***720*** ) — the number of testcases.

Each testcase consists of a single string. Each character is one of R, G, B (for the doors), r, g, b (for the keys), and each of them appears exactly once.

## Output

For each testcase, print YES if the knight can open all doors. Otherwise, print NO.

## Examples

---
**input**
```
4
rgbBRG
RgbrBG
bBrRgG
rgRGBb
```
**output**
```
YES
NO
YES
NO
```
---

## Note

In the first testcase, the knight first collects all keys, then opens all doors with them.

In the second testcase, there is a red door right in front of the knight, but he doesn't have a key for it.

In the third testcase, the key to each door is in front of each respective door, so the knight collects the key and uses it immediately three times.

In the fourth testcase, the knight can't open the blue door.

## Solution

```c++
//Lang		:	GNU C++14
//Time		:	0 ms
//Memory	:	0 KB
#include<iostream>
using namespace std;
int main(){
	int t;
	while(cin>>t){
		while(t--){
			string s;
			cin>>s;
			if(s.find('R')>s.find('r') && s.find('G')>s.find('g') && s.find('B')>s.find('b')){cout<<"YES\n";}
			else{cout<<"NO\n";}
		}
	}
	return 0;
}
```
