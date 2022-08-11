#https://codeforces.com/problemset/problem/1709/A
#Lang		:	Python 3.8
#Time		:	31 ms
#Memory         :	0 KB
for _ in range(int(input())):
    x,m=int(input()),{}
    a,b,c=map(int,input().split())
    m[0],m[1],m[2],m[3]=0,a,b,c
    print("YES" if m[m[x]] else "NO")
