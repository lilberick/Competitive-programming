#https://codeforces.com/problemset/problem/1606/A
#Lang		:	Python 3.8
#Time		:	31 ms
#Memory         :	0 KB
n=int(input())
for x in range(n):
    s=input()
    print(s[:-1]+s[0])
