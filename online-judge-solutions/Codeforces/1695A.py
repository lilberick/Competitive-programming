#https://codeforces.com/problemset/problem/1695/A
#Lang		:	Python 3.8
#Time		:	62 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,m=map(int,input().split())
    z,x,y,v=-1000000000,0,0,[]
    for i in range(n):
        fila=list(map(int,input().split()))[:m]
        v.append(fila)
    for i in range(n):
        for j in range(m):
            if(v[i][j]>z):
                z=v[i][j]
                y,x=i,j
    y+=1
    x+=1
    print(max(y,n-y+1)*max(x,m-x+1))
