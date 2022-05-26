# Brain's Photos

> https://codeforces.com/problemset/problem/707/A

```
time limit per test	:	2 seconds
memory limit per test	:	256 megabytes
input			:	standard input
output			:	standard ouput
```

## Problem

Small, but very brave, mouse Brain was not accepted to summer school of young villains. He was upset and decided to postpone his plans of taking over the world, but to become a photographer instead.

As you may know, the coolest photos are on the film (because you can specify the hashtag #film for such).

Brain took a lot of colourful pictures on colored and black-and-white film. Then he developed and translated it into a digital form. But now, color and black-and-white photos are in one folder, and to sort them, one needs to spend more than one hour!

As soon as Brain is a photographer not programmer now, he asks you to help him determine for a **single** photo whether it is colored or black-and-white.

Photo can be represented as a matrix sized ***n*** × ***m***, and each element of the matrix stores a symbol indicating corresponding pixel color. There are only ***6*** colors:

* 'C' (cyan)
* 'M' (magenta)
* 'Y' (yellow)
* 'W' (white)
* 'G' (grey)
* 'B' (black)

The photo is considered black-and-white if it has only white, black and grey pixels in it. If there are any of cyan, magenta or yellow pixels in the photo then it is considered colored.

## Input

The first line of the input contains two integers ***n*** and ***m*** (***1*** ≤ ***n***, ***m*** ≤ ***100***) — the number of photo pixel matrix rows and columns respectively.

Then ***n*** lines describing matrix rows follow. Each of them contains m space-separated characters describing colors of pixels in a row. Each character in the line is one of the '***C***', '***M***', '***Y***', '***W***', '***G***' or '***B***'.

## Output

Print the "#Black&White" (without quotes), if the photo is black-and-white and "#Color" (without quotes), if it is colored, in the only line.

## Examples

---
**input**
```
2 2
C M
Y Y

```
**output**
```
#Color
```
---
**input**
```
3 2
W W
W W
B B

```
**output**
```
#Black&White
```
---
**input**
```
1 1
W

```
**output**
```
#Black&White
```
---

## Solution

* C

	```c
	//Lang		:	GNU C11
	//Time		:	31 ms
	//Memory	:	0 KB
	#include<stdio.h>
	#include <stdbool.h>
	int main(){
		int n,m;
		while(scanf("%d%d",&n,&m)!=EOF){
			int t=n*m;
			char c;
			bool color=false;
			while(t--){
				getchar();
				scanf("%c",&c);
				if(c=='C' || c=='M' || c=='Y'){color=true;}
			}
			color ? printf("#Color\n"):printf("#Black&White\n");
		}
		return 0;
	}
	```

* Python

	```py
	#Lang		:	Python 3.8
	#Time		:	46 ms
	#Memory	:	0 KB
	import sys
	while True:
	    try:
		n,m=map(int,input().split())
		t=n*m;
		color=False
		while(t>0):
			t-=1;
			c=sys.stdin.read(1).split()
			d=sys.stdin.read(1).split()
			if(c[0]=='C' or c[0]=='M' or c[0]=='Y'):
			    color=True
		if(color):  print("#Color")
		else:       print("#Black&White")
	    except EOFError:
		break
	```
