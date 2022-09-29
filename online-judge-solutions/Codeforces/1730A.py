#https://codeforces.com/problemset/problem/1730/A
#Lang		:	Python 3.8
#Time		:	62 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,c=map(int,input().split())
    v=list(map(int,input().split()))[:n]
    s,r=set(),0
    for i in v:s.add(i);
    for k in s:r+=min(c,v.count(k))
    print(r)
