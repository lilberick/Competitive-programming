#https://codeforces.com/problemset/problem/439/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,d=map(int,input().split())
s=sum(map(int,input().split()))
s+=(n-1)*10
print(int(int(d-s if d>=s else 0)/5+(n-1)*2) if d>=s else -1)
