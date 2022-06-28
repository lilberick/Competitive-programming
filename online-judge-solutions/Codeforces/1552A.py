#https://codeforces.com/problemset/problem/1552/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
t=int(input())
for x in range(0,t):
    n,s,p=int(input()),input(),0
    r=s
    s=''.join(sorted(s))
    for i in range(n):
        if(s[i]!=r[i]):p+=1
    print(p)
