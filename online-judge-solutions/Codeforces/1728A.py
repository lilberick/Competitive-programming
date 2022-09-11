#https://codeforces.com/problemset/problem/1728/A
#Lang		:	Python 3.8
#Time		:	30 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    print(a.index(max(a))+1)

