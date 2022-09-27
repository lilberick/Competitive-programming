#https://codeforces.com/problemset/problem/1734/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))[:n]
    a.sort()
    r=1000000000
    r=[min(r,a[i+2]-a[i]) for i in range(n-2)]
    print(min(r))
