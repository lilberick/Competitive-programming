#https://codeforces.com/problemset/problem/1680/B
#Lang		:	Python 3.8
#Time		:	202 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,m=map(int,input().split())
    v=[[j for j in input().strip()] for i in range(n)]
    imin=jmin=6
    for i in range(n):
        for j in range(m):
            if(v[i][j]=='R'):
                imin,jmin=min(i,imin),min(j,jmin)
    print("YES" if v[imin][jmin]=='R' else "NO")
