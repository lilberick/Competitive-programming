#https://codeforces.com/problemset/problem/1744/B
#Lang		:	Python 3.8
#Time		:	1029 ms
#Memory         :	12400 KB
for _ in range(int(input())):
    n,q=map(int,input().split())
    s=impar=par=0
    a=list(map(int,input().split()))[:n]
    s,m=sum(a),{}
    for i in a:
        if(i%2==0):par+=1
        else:impar+=1
    m[0],m[1]=par,impar
    for i in range(q):
        typ,x=map(int,input().split())
        s+=m[typ]*x
        if(m[typ]>0 and x%2==1):
            m[1-typ],m[typ]=n,0
        print(s)
