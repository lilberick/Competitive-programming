#https://codeforces.com/problemset/problem/1672/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,g=int(input()),0
    print("errorgorn" if sum([1 for x in input().split() if int(x)%2==0])%2!=0 else "maomao90")
