#https://codeforces.com/problemset/problem/1684/A
#Lang		:	Python 3.8
#Time		:	108 ms
#Memory         :	0 KB
t=int(input())
for x in range(0,t):
    s=input()
    m,n=int(min(s)),len(s)
    if(n==1):r=int(s)
    elif(n==2):r=int(s[1])
    else:r=m
    print(r)
