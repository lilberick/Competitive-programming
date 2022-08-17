#https://codeforces.com/problemset/problem/1698/B
#Lang		:	Python 3.8
#Time		:	186 ms
#Memory         :	15300 KB
for _ in range(int(input())):
    n,k=map(int,input().split())
    v=list(map(int,input().split()))[:n]
    if(k==1):print(int((n-1)/2))
    else:
        r=0
        for i in range(1,n-1):r+=v[i]>v[i-1]+v[i+1]
        print(r)
