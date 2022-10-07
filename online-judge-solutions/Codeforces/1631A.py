#https://codeforces.com/problemset/problem/1631/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n=int(input())
    a,b=list(map(int,input().split()))[:n],list(map(int,input().split()))[:n]
    a2,b2=list(range(n)),list(range(n))
    for i in range(n):
        a2[i],b2[i]=max(a[i],b[i]),min(a[i],b[i])
    print(max(a2)*max(b2))
