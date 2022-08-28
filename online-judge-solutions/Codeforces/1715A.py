#https://codeforces.com/problemset/problem/1715/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,m=map(int,input().split())
    print(0 if (n==1 and m==1) else (n-1)+(m-1)+min(n-1,m-1)+1)
