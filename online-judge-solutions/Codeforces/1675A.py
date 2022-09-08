#https://codeforces.com/problemset/problem/1675/A
#Lang		:	Python 3.8
#Time		:	124 ms
#Memory         :	0 KB
for _ in range(int(input())):
    a,b,c,x,y=map(int,input().split())
    print("YES" if (((a-x)*(a<x)+(b-y)*(b<y)+c)>=0) else "NO")
