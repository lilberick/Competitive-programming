#https://codeforces.com/problemset/problem/1629/A
#Lang		:	Python 3.8
#Time		:	62 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))[:n]
    b=list(map(int,input().split()))[:n]
    p=[]
    for i in range(n):p.append([a[i],b[i]])
    p.sort()
    for i in range(n):
        if(p[i][0]<=k): k+=p[i][1]
        else: break
    print(k)
