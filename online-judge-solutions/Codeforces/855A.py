#https://codeforces.com/problemset/problem/855/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,m=int(input()),{}
for x in range(n):
    s=input()
    m[s]=m.get(s,0)+1
    print("NO" if m[s]==1 else "YES")
