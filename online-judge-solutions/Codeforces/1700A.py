#https://codeforces.com/problemset/problem/1700/A
#Lang		:	Python 3.8
#Time		:	62 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,m=map(int,input().split())
    print(int((m*(m+1))/2+m*((n*(n+1))/2)-m))
