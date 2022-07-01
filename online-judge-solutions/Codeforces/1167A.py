#https://codeforces.com/problemset/problem/1167/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
t=int(input())
for x in range(0,t):
    n,s=int(input()),input()
    i=s.find('8')
    print("YES") if (i>=0 and n-i>=11) else print("NO")
