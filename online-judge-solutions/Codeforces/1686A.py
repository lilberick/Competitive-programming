#https://codeforces.com/problemset/problem/1686/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,b=int(input()),False
    v=list(map(int,input().split()))[:n]
    s=sum(v)
    b=[True for i in v if i==s/n]
    print("YES" if b else "NO")
