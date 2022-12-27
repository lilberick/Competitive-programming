#https://codeforces.com/problemset/problem/376/A
#Lang		:	Python 3.8
#Time		:	327 ms
#Memory         :	3000 KB
s,r=input(),0
m=s.find('^')
r=sum(int(s[i])*(i-m) if s[i].isdigit() else 0 for i in range(len(s)))
print("left" if r<0 else ("balance" if r==0 else "right"))
