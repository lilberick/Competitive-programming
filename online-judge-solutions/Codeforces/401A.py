#https://codeforces.com/problemset/problem/401/A
#Lang		:	Python 3.8
#Time		:	61 ms
#Memory         :	0 KB
import math
n,x=map(int,input().split())
s=abs(sum([i for i in list(map(int,input().split()))]))
print(math.ceil(s/x))
