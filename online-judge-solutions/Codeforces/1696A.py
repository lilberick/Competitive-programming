#https://codeforces.com/problemset/problem/1696/A
#Lang		:	Python 3.8
#Time		:	61 ms
#Memory         :	300 KB
for _ in range(int(input())):
    n,z=map(int,input().split())
    s=0
    v=list(map(int,input().split()))[:n]
    for i in v:s=max(i|z,s)
    print(s)
