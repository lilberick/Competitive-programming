#https://codeforces.com/problemset/problem/1722/C
#Lang		:	Python 3.8
#Time		:	358 ms
#Memory         :	1100 KB
for _ in range(int(input())):
    n=int(input())
    v,m=[[0 for j in range(n)] for i in range(3)],{}
    for i in range(3):
        x=input().split()
        for k in range(len(x)):
            m[x[k]]=m.get(x[k],0)+1
            v[i][k%n]=x[k]
    r=[0 for i in range(3)]
    for i in range(3):
        for j in range(n):
            r[i]+=(3 if m[v[i][j]]==1 else (1 if m[v[i][j]]==2 else 0))
    print(*r)
