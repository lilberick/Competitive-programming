#https://codeforces.com/problemset/problem/1144/A
#Lang		:	Python 3.8
#Time		:	31 ms
#Memory         :	0 KB
n=int(input())
for x in range(0,n):
    s=input()
    n1=len(s)
    s=''.join(sorted(set(s)))
    n2=len(s)
    if(n1!=n2):print("NO")
    else:
        t=1
        for i in range(1,n2):
            if(ord(s[i])-ord(s[i-1])>1):t=0
            if(t==0):break
        print("NO" if t==0 else "YES")
