#https://codeforces.com/problemset/problem/1646/B
#Lang		:	Python 3.8
#Time		:	187 ms
#Memory         :	17900 KB
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))[:n]
    a.sort()
    r1,l2=(n-1)//2,(n+2)//2
    b,r=sum(a[:r1+1]),sum(a[l2:])
    print("YES" if r>b else "NO")
