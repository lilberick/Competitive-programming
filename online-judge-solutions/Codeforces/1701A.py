#https://codeforces.com/problemset/problem/1701/A
#Lang		:	Python 3.8
#Time		:	30 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,s=4,0
    for _ in range(2):s+=(list(map(int,input().split()))[:2]).count(1)
    print(0 if s==0 else (2 if s==4 else 1))
