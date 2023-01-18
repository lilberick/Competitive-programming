#https://codeforces.com/problemset/problem/549/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,m = map(int, input().split())
v=[input() for i in range(n)]
s={'f', 'a', 'c', 'e'}
print(sum(1 for i in range(n-1) for j in range(m-1) if set(v[i][j]+v[i][j+1]+v[i+1][j]+v[i+1][j+1])==s))
