#codeforces.com/problemset/problem/448/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
import math
a=sum(map(int,input().split()))
b=sum(map(int,input().split()))
n=int(input())
print("NO" if (math.ceil(a/5)+math.ceil(b/10)>n) else "YES")
