#https://codeforces.com/problemset/problem/545/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,w=int(input()),[]
v=[list(map(int,input().split())) for _ in range(n)]
w=[i+1 for i,r in enumerate(v) if all(c!=1 and c!=3 for c in r)]
print(len(w))
print(*w)
