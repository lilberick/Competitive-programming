#https://codeforces.com/problemset/problem/1697/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,m=map(int,input().split())
    v=list(map(int,input().split()))[:n]
    s=sum(v)
    print(0 if m>=s else s-m)
