#https://codeforces.com/problemset/problem/595/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,m=map(int,input().split())
v=[x for i in range(n) for x in map(int,input().split())]
print(sum([1 for i in range(0,len(v),2) if sum(v[i:i+2])>0]))
