#https://codeforces.com/problemset/problem/447/
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory         :	0 KB
p,n=map(int,input().split())
s,b,m=-1,True,{}
for i in range(n):
    x=int(input())
    m[x%p]=m.get(x%p,0)+1;
    if(m[x%p]>1 and b):
        s=i
        b=1-b
print(s+1 if s>-1 else s)
