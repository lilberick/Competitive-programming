#https://codeforces.com/problemset/problem/1684/B
#Lang		:	Python 3.8
#Time		:	140 ms
#Memory         :	0 KB
for _ in range(int(input())):
    v=list(map(int,input().split()))[:3]
    sorted(v)
    z=v[2]
    y=z+v[1]
    x=y+v[0]
    print(x,y,z)
