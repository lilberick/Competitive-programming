#https://codeforces.com/problemset/problem/1670/A
#Lang		:	Python 3.8
#Time		:	186 ms
#Memory         :	7500 KB
for _ in range(int(input())):
    n,z,w=int(input()),0,[]
    v=list(map(int,input().split()))[:n]
    z=[z+1 for i in v if(i<0)]
    for i in range(n):
        v[i]=(-abs(v[i]) if i<len(z) else abs(v[i]))
    w=v[:]
    v.sort()
    print("YES" if v==w else "NO")
