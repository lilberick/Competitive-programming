#https://codeforces.com/problemset/problem/609/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,m=int(input()),int(input())
s=[0]*(n)
a=sorted([int(input()) for i in range(n)],reverse=True)
s[0]=a[0]
for i in range(1,n,1):s[i]=s[i-1]+a[i]
print(next((i for i in range(n) if s[i]>=m),None)+1)
