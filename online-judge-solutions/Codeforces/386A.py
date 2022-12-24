#https://codeforces.com/problemset/problem/386/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,m=int(input()),{}
p=list(map(int,input().split()))[:n]
m={x:i for i,x in enumerate(p)}
m=dict(sorted(m.items()))
print(m[list(m)[-1]]+1,list(m)[n-2])
