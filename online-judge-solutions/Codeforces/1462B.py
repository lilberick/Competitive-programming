#https://codeforces.com/problemset/problem/1462/B
#Lang		:	Python 3.8
#Time		:	155 ms
#Memory     :	0 KB
t=int(input())
for x in range(0,t):
    n,s,o,t=int(input()),input(),"2020",1
    if(s==o):print("YES")
    else:
        for i in range(n):
            r=s
            r=r[0:i]+r[i+n-4:]
            if(o==r): t=0
        print("YES") if t==0 else print("NO")
