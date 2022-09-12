#https://codeforces.com/problemset/problem/1658/A
#Lang		:	Python 3.8
#Time		:	93 ms
#Memory         :	0 KB
for _ in range(int(input())):
    n,s,r,l=int(input()),input(),0,[]
    for i in range(n):
        if(i+2<n and s[i]=='0' and s[i+1]=='1' and s[i+2]=='0'): r+=1
        if(i+1<n and s[i]=='0' and s[i+1]=='0'): r+=2
    print(r)
