#https://codeforces.com/problemset/problem/978/B
#Lang		:	Python 3.8
#Time		:	62 ms
#Memory     :	0 KB
n,s=int(input()),input()
nx=s.find("xxx")
while(nx>=0):
    nx=s.find("xxx")
    s=s.replace("xxx","xx")
print(n-len(s))
