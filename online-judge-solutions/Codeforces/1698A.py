#https://codeforces.com/problemset/problem/1698/A
#Lang		:	Python 3.8
#Time		:	62 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n=int(input())
    v=list(map(int,input().split()))[:n]
    print(v[n-1])
