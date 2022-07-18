#https://codeforces.com/problemset/problem/202/A
#Lang		:	Python 3.8
#Time		:	92 ms
#Memory         :	0 KB
s,m=input(),{}
for i in range(len(s)):m[s[i]]=m.get(s[i],0)+1
m=sorted(m.items())
c,n=list(m)[-1][0],list(m)[-1][1]
for i in range(n):print(c,end='')
