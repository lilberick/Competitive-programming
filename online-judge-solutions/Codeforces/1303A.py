#https://codeforces.com/problemset/problem/1303/A
#Lang		:	Python 3.8
#Time		:	31 ms
#Memory     :	0 KB
t=int(input())
for x in range(0,t):
    s=input()
    l=s.find('1')
    r=s.rfind('1')
    c=s.count('1')
    print(0) if c==0 else print((r-l+1)-c)
