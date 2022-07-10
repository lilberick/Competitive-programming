#https://codeforces.com/problemset/problem/1617/A
#Lang		:	Python 3.8
#Time		:	61 ms
#Memory         :	0 KB
x=int(input())
for z in range(x):
    s,t=input(),input()
    s=''.join(sorted(s))
    r=s
    r= "".join(dict.fromkeys(r))
    if not((r.find(t)!=-1)):print(s)
    else:
        n=s.count('c')
        c='c'*n
        s=s.replace('c','')
        i=s.find('b')
        print(s[0:i]+c+s[i:])
