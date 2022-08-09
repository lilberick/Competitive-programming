#https://codeforces.com/problemset/problem/1716/B
#Lang		:	Python 3.8
#Time		:	1248 ms
#Memory         :	0 KB
t=int(input())
for x in range(t):
    n=int(input())
    print(n)
    v=[]
    v=list(range(1,n+1))
    for i in range(n):print(v[i],end=' ')
    print("")
    for i in range(0,n-1):
        v[i],v[n-1]=v[n-1],v[i]
        for j in range(n):
            print(v[j],end=' ')
        print("")
