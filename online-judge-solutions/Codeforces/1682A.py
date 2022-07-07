#https://codeforces.com/problemset/problem/1682/A
#Lang		:	Python 3.8
#Time		:	77 ms
#Memory         :	300 KB
t=int(input())
for x in range(t):
    n,s,d,c=int(input()),input(),0,''
    if(n%2!=0):
        d=1
        c=s[int(n/2)]
    else:c=s[int(n/2)-1]
    for i in range(int(n/2)-1,-1,-1):
        if(s[i]==c and s[n-1-i]==c):d+=2
        else:break
    print(d)
