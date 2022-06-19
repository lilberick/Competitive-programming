#https://codeforces.com/problemset/problem/1551/B1
#Lang		:	Python 3.8
#Time		:	46 ms
#Memory     :	0 KB
t=int(input())
for z in range(0,t):
    s=input()
    d={}
    for i in s:
        d[i]=0
    for i in s:
        d[i]+=1
    r,dif=0,0
    for i in d:
        if(d[i]>=2): r+=1
        else: dif+=1
    r+=int(dif/2)
    print(r)
