#https://codeforces.com/problemset/problem/1716/A
#Lang		:	Python 3.8
#Time		:	171 ms
#Memory         :	0 KB
import math
t=int(input())
for x in range(t):
    n=int(input())
    print(2 if n==1 else (1 if n==2 or n==3 else math.ceil(n/3)))
