#https://codeforces.com/problemset/problem/802/G
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
s,w=input(),"heidi"
for x in s:
    if(len(w)>0 and w[0]==x): w=w[1:]
print("YES" if len(w)==0 else "NO")
