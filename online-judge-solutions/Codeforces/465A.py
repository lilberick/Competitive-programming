#https://codeforces.com/problemset/problem/465/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n=int(input())
t=n
r=[i+1 for i,x in enumerate(input()) if x=='0']
print(r[0] if len(r) else t)
