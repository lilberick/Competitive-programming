#https://codeforces.com/problemset/problem/551/A
#Lang		:	Python 3.8
#Time		:	436 ms
#Memory         :	200 KB
n=int(input())
a=list(map(int,input().split()))
m=p={}
for i in a:m[i]=m.get(i,0)+1
m=dict(sorted(m.items()))
m[list(m)[-1]+1]=0
for i in range(1,len(m),1):
    s=1
    for k,v in list(m.items())[i:len(m)]:s+=v
    p[list(m.keys())[i-1]]=s
for i in a:print(p[i],end=" ")
