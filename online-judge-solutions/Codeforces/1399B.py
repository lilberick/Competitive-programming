#https://codeforces.com/problemset/problem/1399/B
#Lang		:	Python 3.8
#Time		:	61 ms
#Memory	:	0 KB
t=int(input())
for z in range(t):
    n=int(input())
    a=list(map(int,input().split()))[:n]
    b=list(map(int,input().split()))[:n]
    amin=min(a)
    bmin=min(b)
    for i,valor in enumerate(a):
        a[i]-=amin
        b[i]-=bmin
        if(a[i]>=b[i]):b[i]=0
        else: a[i]=0
    print(sum(a)+sum(b))

