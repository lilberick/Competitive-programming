#https://codeforces.com/problemset/problem/1705/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,x=map(int,input().split())
    h=list(map(int,input().split()))[:2*n]
    h.sort()
    b=True
    for i in range(n):
        if(h[i+n]-h[i]<x):
            b=False
            break
    print("YES" if b else "NO")
