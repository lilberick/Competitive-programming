#https://codeforces.com/problemset/problem/1515/B
#Lang		:	Python 3.8
#Time		:	124 ms
#Memory         :	0 KB
import math
def EsCuad(x: int)->bool:
    if math.sqrt(x).is_integer(): return True
    else: return False
t=int(input())
for x in range(t):
    n=int(input())
    n2=int(n/2)
    if((EsCuad(n) or EsCuad(n/2)) and n%2==0):print("YES")
    else: print("NO")
