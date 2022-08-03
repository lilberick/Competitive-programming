#https://codeforces.com/problemset/problem/977/B
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,s,m,c,r=int(input()),input(),{},0,""
for i in range(n-1):
    w=s[i]+s[i+1]
    m[w]=m.get(w,0)+1
for i in m:
    if(m[i]>c):
        c=m[i]
        r=i
print(r)
