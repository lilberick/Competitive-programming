#https://codeforces.com/problemset/problem/1656/A
#Lang		:	Python 3.8
#Time		:	280 ms
#Memory         :	16000 KB
for _ in range(int(input())):
    n,m=int(input()),{}
    x=map(int,input().split())
    for i,v in enumerate(x):m[v]=i+1
    m=dict(sorted(m.items()))
    print(m[list(m)[0]],m[list(m)[-1]])
