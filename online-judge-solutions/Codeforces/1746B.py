#https://codeforces.com/problemset/problem/1746/B
#Lang		:	Python 3.8
#Time		:	233 ms
#Memory         :	3000 KB
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))[:n]
    b=a[:]
    a.sort()
    c=[1 for i in range(n) if a[i]!=b[i]]
    print(int(sum(c)/2))
