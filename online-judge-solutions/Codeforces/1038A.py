#https://codeforces.com/problemset/problem/1038/A
#Lang		:	Python 3.8
#Time		:	108 ms
#Memory         :	200 KB
import sys
n,k=map(int,input().split())
m={}
for i in range(k):m[chr(i+65)]=0
for x in range(n):
    c=''.join(sys.stdin.read(1).split())
    m[c]=m.get(c,0)+1
z=min(m, key=m.get)
print(m[z]*k)
