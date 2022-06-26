#https://codeforces.com/problemset/problem/1481/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	4700 KB
t=int(input())
for x in range(0,t):
    px,py=map(int,input().split())
    s=input()
    R=s.count('R')
    L=s.count('L')
    D=s.count('D')
    U=s.count('U')
    rx,ry=False,False
    if((px>=0 and R-px>=0) or (px<0 and px+L>=0)): rx=True
    if((py>=0 and U-py>=0) or (py<0 and py+D>=0)): ry=True
    print("YES") if (rx and ry) else print("NO")
