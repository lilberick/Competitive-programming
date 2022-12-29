#https://codeforces.com/problemset/problem/415/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,m=map(int,input().split())
a=[-1 for i in range(n)]
w=list(map(int,input().split()))
for x in w:
    for j in range(x-1,n):
        if(a[j]==-1):a[j]=x
print(*a)
