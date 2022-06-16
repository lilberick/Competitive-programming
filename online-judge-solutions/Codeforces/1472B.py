#https://codeforces.com/problemset/problem/1472/B
#Lang		:	Python 3.8
#Time		:	108 ms
#Memory     :	0 KB
t=int(input())
for x in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))[:n]
    suma=sum(a)
    n1=a.count(1)
    if(n%2==0):
        print("YES") if suma%2==0 else print("NO")
    else:
        print("YES") if (n1%2==0 and n1>0) else print("NO")
