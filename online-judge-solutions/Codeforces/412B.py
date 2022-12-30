#https://codeforces.com/problemset/problem/412/B
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,k=map(int,input().split())
a=list(map(int,input().split()))
a.sort(reverse=True)
print(a[k-1])
