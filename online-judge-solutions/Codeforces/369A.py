#https://codeforces.com/problemset/problem/369/A
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
n,m,k=map(int,input().split())
n1=n2=0
a=list(map(int,input().split()))
for i in a:
    if(i==1): n1+=1
    else: n2+=1
if(n1>=m):
    n1-=m
    m=0
else:
    m-=n1
    n1=0
n2=0 if (n2<m+k) else n2-m-k
print(n1+n2)
