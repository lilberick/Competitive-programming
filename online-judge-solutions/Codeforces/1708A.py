#https://codeforces.com/problemset/problem/1708/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,b=int(input()),True
    v=list(map(int,input().split()))[:n]
    b=[False for i in range(1,len(v),1) if v[i]%v[0]!=0]
    print("YES" if not b else "NO")
