#https://codeforces.com/problemset/problem/1678/A
#Lang		:	Python 3.8
#Time		:	77 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,s,n0=int(input()),set(),0
    x=list(map(int,input().split()))[:n]
    for i in x:
        s.add(i)
        if(i==0): n0+=1
    print(n-n0 if n0>0 else (n if len(s)<n else n+1))
