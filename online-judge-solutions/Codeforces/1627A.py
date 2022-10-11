#https://codeforces.com/problemset/problem/1627/A
#Lang		:	Python 3.8
#Time		:	93 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,m,r,c=map(int,input().split())
    v=[input() for i in range(n)]
    y=x=b=False
    for i in range(n):
        for j in range(m):
            if(v[i][j]=='B'):
                b=True
                if(i+1==r): y=True
                if(j+1==c): x=True
    if not b: print(-1)
    else:
        if(v[r-1][c-1]=='B'): print(0)
        else: print(1 if (x or y) else 2)
