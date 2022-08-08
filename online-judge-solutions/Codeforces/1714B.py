#https://codeforces.com/problemset/problem/1714/B
#Lang		:	Python 3.8
#Time		:	265 ms
#Memory         :	13500 KB
t=int(input())
for x in range(t):
    n=int(input())
    v=list(map(int,input().split()))[:n]
    b,s=True,set()
    for i in range(n-1,-1,-1):
        s2={v[i]}
        if(s2.issubset(s)):
            print(i+1)
            b=False
            break
        s.add(v[i])
    if(b):print(0)
