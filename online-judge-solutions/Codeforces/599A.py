#https://codeforces.com/problemset/problem/599/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
d1,d2,d3=map(int,input().split())
print(min(2*min(d1+d2,d1+d3,d2+d3),d1+d2+d3))
