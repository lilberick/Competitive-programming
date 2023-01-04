#https://codeforces.com/problemset/problem/421/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,a,b=map(int,input().split())
v=list(map(int,input().split()))
w=list(map(int,input().split()))
m={c:2 for c in w}
m.update({c:1 for c in v})
m=dict(sorted(m.items()))
print(*list(m.values()))
