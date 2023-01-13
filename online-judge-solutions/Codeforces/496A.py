#https://codeforces.com/problemset/problem/496/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,s=int(input()),10000
v=list(map(int,input().split()))
for i in range(1,n-1,1):
    w=v[:]
    w,m=w[:i]+w[i+1:],0
    m=max(w[i+1]-w[i] for i in range(len(w)-1))
    s=min(s,m)
print(s)
