#https://codeforces.com/problemset/problem/1720/B
#Lang		:	Python 3.8
#Time		:	78 ms
#Memory         :	8600 KB
for _ in range(int(input())):
    n=int(input())
    v=list(map(int,input().split()))[:n]
    m1,n1=max(v),min(v)
    for i in [m1,n1]: v.remove(i)
    m2,n2=max(v),min(v)
    print(m1+m2-n1-n2)
